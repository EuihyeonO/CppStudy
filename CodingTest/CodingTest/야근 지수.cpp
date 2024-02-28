//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//long long solution(int n, vector<int> works)
//{
//    std::map<int, int> Maps;
//    int Answer = 0;
//    int SumTest = 0;
//
//    for (int i = 0; i < works.size(); i++)
//    {
//        Maps[works[i]]++;
//        SumTest += works[i];
//    }
//
//    if (SumTest < n)
//    {
//        return 0;
//    }
//
//    while (n >= 0)
//    {
//        if (Maps.size() <= 1)
//        {
//            std::map<int, int>::iterator StartIter = Maps.begin();
//
//            int CurNum = StartIter->first;
//            int CurCount = StartIter->second;
//
//            CurNum -= n / CurCount;
//            int Remain = n % CurCount;
//
//            Answer += Remain * (CurNum - 1) * (CurNum - 1);
//            Answer += (CurCount - Remain) * CurNum * CurNum;
//
//            return Answer;
//        }
//
//        std::map<int, int>::iterator MaxIter = Maps.end();
//        MaxIter--;
//
//        int MaxNum = MaxIter->first;
//        int MaxCount = MaxIter->second;
//
//        MaxIter--;
//        int NextMaxNum = MaxIter->first;
//
//        int Gap = MaxNum - NextMaxNum;
//
//        if (Gap * MaxCount <= n)
//        {
//            n -= Gap * MaxCount;
//
//            MaxIter = Maps.end();
//            MaxIter--;
//
//            Maps.erase(MaxIter);
//
//            MaxIter = Maps.end();
//            MaxIter--;
//
//            MaxIter->second += MaxCount;
//        }
//        else
//        {
//            int Share = n / MaxCount;
//            int Remain = n % MaxCount;
//
//            int NewMaxNum = MaxNum - Share;
//
//            Maps[MaxNum] -= MaxCount;
//            Maps[NewMaxNum] += MaxCount;
//
//            if (Maps[MaxNum] <= 0)
//            {
//                std::map<int, int>::iterator FindIter = Maps.find(MaxNum);
//                Maps.erase(FindIter);
//            }
//
//            for (int i = 0; i < Remain; i++)
//            {
//                Maps[NewMaxNum]--;
//                Maps[NewMaxNum - 1]++;
//            }
//
//            std::map<int, int>::iterator StartIter = Maps.begin();
//            std::map<int, int>::iterator EndIter = Maps.end();
//
//            while (StartIter != EndIter)
//            {
//                int Num = StartIter->first;
//                int Count = StartIter->second;
//
//                Answer += Num * Num * Count;
//
//                StartIter++;
//            }
//
//            break;
//        }
//    }
//
//    return Answer;
//}
//
//int main()
//{
//    int a = solution(99, { 2, 15, 22, 55, 55});
//    return 0;
//}