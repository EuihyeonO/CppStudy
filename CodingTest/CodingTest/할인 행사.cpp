//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<string> want, vector<int> number, vector<string> discount)
//{
//
//    std::map<std::string, int> WantMap;
//
//    for (int i = 0; i < want.size(); i++)
//    {
//        WantMap[want[i]] = number[i];
//    }
//
//    int DayCount = 0;
//    int StartIndex = 0;
//    int DisCountSize = discount.size();
//
//    while (StartIndex < DisCountSize)
//    {
//        int MaxSize = std::min(StartIndex + 10, DisCountSize);
//
//        std::map<std::string, int> Sell;
//        for (int i = StartIndex; i < MaxSize; i++)
//        {
//            Sell[discount[i]]++;
//        }
//
//        std::map<std::string, int>::iterator CurIter = WantMap.begin();
//        std::map<std::string, int>::iterator EndIter = WantMap.end();
//
//        bool isAble = true;
//
//        while (CurIter != EndIter)
//        {
//            std::string CurItem = CurIter->first;
//
//            if (Sell[CurItem] < WantMap[CurItem])
//            {
//                isAble = false;
//                break;
//            }
//
//            CurIter++;
//        }
//
//        if (isAble == true)
//        {
//            DayCount++;
//        }
//
//        StartIndex++;
//    }
//
//    return DayCount;
//}
//
//int main()
//{
//    solution({ "banana", "apple", "rice", "pork", "pot" }, { 3, 2, 2, 2, 1 }, { "chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" });
//
//    return 0;
//}