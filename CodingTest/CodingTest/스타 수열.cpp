//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <map>
//
//int GetStarSequenceSize(std::vector<bool>& _isUse, std::vector<int>& _Sequence, int _Num)
//{
//    std::fill(_isUse.begin(), _isUse.end(), false);
//
//    int Answer = 0;
//
//    for (int i = 0; i < _Sequence.size(); i++)
//    {
//        if (_Sequence[i] == _Num && _isUse[i] == false)
//        {
//            if (i >= 1 && _isUse[i - 1] == false && _Sequence[i - 1] != _Sequence[i])
//            {
//                Answer += 2;
//
//                _isUse[i - 1] = true;
//                _isUse[i] = true;
//            }
//
//            else if (i < _Sequence.size() - 1 && _isUse[i + 1] == false && _Sequence[i + 1] != _Sequence[i])
//            {
//                Answer += 2;
//
//                _isUse[i + 1] = true;
//                _isUse[i] = true;
//            }
//        }
//    }
//
//    return Answer;
//}
//
//bool Compare(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//{
//    return _Left.second > _Right.second;
//}
//
//int solution(std::vector<int> a)
//{
//    std::map<int, int> OverlapCount;
//    for (int i = 0; i < a.size(); i++)
//    {
//        int CurNum = a[i];
//        OverlapCount[CurNum]++;
//    }
//
//    //숫자, 중복횟수
//    std::vector<std::pair<int, int>> Nums;
//    Nums.reserve(OverlapCount.size());
//
//    std::map<int, int>::iterator StartIter = OverlapCount.begin();
//    std::map<int, int>::iterator EndIter = OverlapCount.end();
//
//    while (StartIter != EndIter)
//    {
//        int Num = StartIter->first;
//        int Overlap = StartIter->second;
//
//        Nums.push_back({ Num, Overlap });
//        StartIter++;
//    }
//
//    std::sort(Nums.begin(), Nums.end(), Compare);
//
//    std::vector<bool> isUse(a.size(), false);
//
//    int Answer = 0;
//
//    for (int i = 0; i < 2; i++)
//    {
//        int CurAnswer = GetStarSequenceSize(isUse, a, Nums[i].first);
//        Answer = std::max(Answer, CurAnswer);
//    }
//
//    return Answer;
//}