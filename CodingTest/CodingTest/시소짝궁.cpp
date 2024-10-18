//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//long long solution(vector<int> weights)
//{
//    std::map<int, int> Map;
//    for (int i = 0; i < weights.size(); i++)
//    {
//        Map[weights[i]]++;
//    }
//
//    long long Answer = 0;
//
//    std::map<int, int>::iterator StartIter = Map.begin();
//    std::map<int, int>::iterator EndIter = Map.end();
//
//    while (StartIter != EndIter)
//    {
//        std::map<int, int>::iterator InnerIter = StartIter;
//        ++InnerIter;
//
//        while (InnerIter != EndIter)
//        {
//            if (InnerIter->first % 2 == 0 && InnerIter->first / 2 * 3 == StartIter->first)
//            {
//                Answer += (long long)StartIter->second * InnerIter->second;
//            }
//            else if (InnerIter->first % 3 == 0 && InnerIter->first / 3 * 2 == StartIter->first)
//            {
//                Answer += (long long)StartIter->second * InnerIter->second;
//            }
//            if (InnerIter->first % 3 == 0 && InnerIter->first / 3 * 4 == StartIter->first)
//            {
//                Answer += (long long)StartIter->second * InnerIter->second;
//            }
//            else if (InnerIter->first % 4 == 0 && InnerIter->first / 4 * 3 == StartIter->first)
//            {
//                Answer += (long long)StartIter->second * InnerIter->second;
//            }
//            else if (InnerIter->first * 2 == StartIter->first || StartIter->first * 2 == InnerIter->first)
//            {
//                Answer += (long long)StartIter->second * InnerIter->second;
//            }
//
//            InnerIter++;
//        }
//
//        StartIter++;
//    }
//
//    for (const std::pair<int, int>& _Pair : Map)
//    {
//        if (_Pair.second > 1)
//        {
//            Answer += (long long)_Pair.second * (_Pair.second - 1) / 2;
//        }
//    }
//
//    return Answer;
//}