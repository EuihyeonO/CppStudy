//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//long long GetSumTime(const vector<int>& _Diff, const vector<int>& _Times, long long _Level)
//{
//    long long NumPuzzle = _Diff.size();
//
//    long long SumTime = 0;
//    long long PrevTime = 0;
//
//    for (int i = 0; i < NumPuzzle; i++)
//    {
//        long long CurDiff = _Diff[i];
//        long long CurTime = _Times[i];
//
//        long long NumOfWrong = CurDiff - _Level;
//
//        if (NumOfWrong <= 0)
//        {
//            SumTime += CurTime;
//        }
//        else
//        {
//            SumTime += NumOfWrong * (CurTime + PrevTime) + CurTime;
//        }
//
//        PrevTime = CurTime;
//    }
//
//    return SumTime;
//}
//
//
//int solution(vector<int> diffs, vector<int> times, long long limit)
//{
//    long long Left = 1;
//    long long Right = 300000;
//
//    long long Answer = 999999999;
//
//    while (Left <= Right)
//    {
//        long long Mid = (Left + Right) / 2;
//        long long CurSumTime = GetSumTime(diffs, times, Mid);
//
//        if (CurSumTime > limit)
//        {
//            Left = Mid + 1;
//        }
//        else
//        {
//            Answer = std::min(Mid, Answer);
//            Right = Mid - 1;
//        }
//
//    }
//
//    return Answer;
//}