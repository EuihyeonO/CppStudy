//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(int k, vector<int> tangerine)
//{
//    std::map<int, int> TangerineMap;
//
//    size_t Size = tangerine.size();
//
//    for (size_t i = 0; i < Size; i++)
//    {
//        TangerineMap[tangerine[i]]++;
//    }
//
//    std::vector<int> NumVec;
//    NumVec.reserve(TangerineMap.size());
//
//    std::map<int, int>::iterator StartIter = TangerineMap.begin();
//    std::map<int, int>::iterator EndIter = TangerineMap.end();
//
//    while (StartIter != EndIter)
//    {
//        NumVec.push_back(StartIter->second);
//        StartIter++;
//    }
//
//    sort(NumVec.begin(), NumVec.end(), [](int& _Left, int& _Right)
//        {
//            if (_Left > _Right)
//            {
//                return true;
//            }
//
//            return false;
//        });
//
//    int Sum = 0;
//    int Index = 0;
//
//    while (k > Sum)
//    {
//        Sum += NumVec[Index];
//        Index++;
//    }
//
//
//    return Index;
//}