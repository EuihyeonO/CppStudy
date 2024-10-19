//#include <string>
//#include <vector>
//#include <iostream>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//int solution(int cacheSize, vector<string> cities)
//{
//    std::map<std::string, int> CashMap;
//
//    int Time = 0;
//
//    for (int i = 0; i < cities.size(); i++)
//    {
//        for (int j = 0; j < cities[i].size(); j++)
//        {
//            if (cities[i][j] >= 'a' && cities[i][j] <= 'z')
//            {
//                cities[i][j] += 'A' - 'a';
//            }
//        }
//
//        if (CashMap.find(cities[i]) != CashMap.end())
//        {
//            Time += 1;
//            CashMap[cities[i]] = i;
//        }
//        else
//        {
//            if (CashMap.size() < cacheSize)
//            {
//                Time += 5;
//                CashMap.insert({ cities[i], i });
//            }
//            else
//            {
//                if (cacheSize == 0)
//                {
//                    Time += 5;
//                    continue;
//                }
//
//                std::pair<std::string, int> LRU = { "", 10000000 };
//
//                for (const std::pair<std::string, int>& _Pair : CashMap)
//                {
//                    if (_Pair.second < LRU.second)
//                    {
//                        LRU = _Pair;
//                    }
//                }
//
//                CashMap.insert({ cities[i], i });
//                CashMap.erase(LRU.first);
//
//                Time += 5;
//            }
//        }
//    }
//
//    return Time;
//}