//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//long long solution(vector<int> queue1, vector<int> queue2)
//{
//    std::vector<int> MergeVector;
//    MergeVector.reserve(queue1.size() + queue2.size());
//
//    long long Sum = 0;
//
//    for (int i = 0; i < queue1.size(); i++)
//    {
//        Sum += queue1[i];
//        MergeVector.push_back(queue1[i]);
//    }
//
//    for (int i = 0; i < queue2.size(); i++)
//    {
//        Sum += queue2[i];
//        MergeVector.push_back(queue2[i]);
//    }
//
//    if (Sum % 2 == 1)
//    {
//        return -1;
//    }
//
//    long long Target = Sum / 2;
//
//    int Left = 0;
//    int Right = 0;
//
//    long long PrefixSum = 0;
//
//    std::vector<std::pair<int, int>> TargetCase;
//    while (true)
//    {
//        if (Right == MergeVector.size() && PrefixSum < Target)
//        {
//            break;
//        }
//
//        if (PrefixSum < Target)
//        {
//            PrefixSum += MergeVector[Right];
//            Right++;
//        }
//        else if (PrefixSum > Target)
//        {
//            PrefixSum -= MergeVector[Left];
//            Left++;
//        }
//        else
//        {
//            TargetCase.push_back({ Left, Right - 1 });
//
//            PrefixSum -= MergeVector[Left];
//            Left++;
//        }
//    }
//
//    int Answer = 999999999;
//
//    for (std::pair<int, int> _Pair : TargetCase)
//    {
//        int Count = 0;
//
//        if (_Pair.first < queue1.size() && _Pair.second < queue1.size())
//        {
//            if (_Pair.first == 0 && _Pair.second != queue1.size() - 1)
//            {
//                Count = queue2.size() + (_Pair.second - _Pair.first + 1);
//            }
//            else if (_Pair.first != 0 && _Pair.second == queue1.size() - 1)
//            {
//                Count = _Pair.first;
//            }
//            else if (_Pair.first == 0 && _Pair.second == queue1.size() - 1)
//            {
//                Count = 0;
//            }
//            else
//            {
//                Count = queue2.size() + (_Pair.second + 1) + _Pair.first;
//            }
//        }
//        else if (_Pair.first < queue1.size() && _Pair.second >= queue1.size())
//        {
//            if (_Pair.first == 0 && _Pair.second != queue1.size() + queue2.size() - 1)
//            {
//                Count = _Pair.second - queue1.size() + 1;
//            }
//            else if (_Pair.first != 0 && _Pair.second == queue1.size() + queue2.size() - 1)
//            {
//                Count = _Pair.first + queue2.size();
//            }
//            else
//            {
//                Count = (_Pair.second - queue1.size() + 1) + _Pair.first;
//            }
//        }
//        else if (_Pair.first >= queue1.size() && _Pair.second >= queue1.size())
//        {
//            if (_Pair.first == queue1.size() && _Pair.second != queue1.size() + queue2.size() - 1)
//            {
//                Count = queue1.size() + (_Pair.second - _Pair.first + 1);
//            }
//            else if (_Pair.first != queue1.size() && _Pair.second == queue1.size() + queue2.size() - 1)
//            {
//                Count = _Pair.second - _Pair.first + 1;
//            }
//            else if (_Pair.first == queue1.size() && _Pair.second == queue1.size() + queue2.size() - 1)
//            {
//                Count = 0;
//            }
//            else
//            {
//                Count = (_Pair.second - queue1.size() + 1) + (queue1.size()) + (_Pair.first - queue1.size());
//            }
//        }
//
//        Answer = std::min(Answer, Count);
//
//        std::cout << _Pair.first << " " << _Pair.second << " " << Count << "\n";
//    }
//
//    if (Answer == 999999999)
//    {
//        Answer = -1;
//    }
//
//    return Answer;
//}