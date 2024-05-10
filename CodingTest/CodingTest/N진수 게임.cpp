//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//char GetDigit(int _Num)
//{
//    if (_Num < 10)
//    {
//        return _Num + '0';
//    }
//    else
//    {
//        int Gap = _Num - 10;
//        char ReturnChar = Gap + 'A';
//
//        return ReturnChar;
//    }
//}
//
//std::string FullStr;
//
//void AddNumToFullStr(int _n, int _CurNumber)
//{
//    std::string CurStr;
//
//    if (_CurNumber == 0)
//    {
//        FullStr += '0';
//        return;
//    }
//
//    while (_CurNumber > 0)
//    {
//        int Share = _CurNumber / _n;
//        int Remain = _CurNumber % _n;
//
//        CurStr += GetDigit(Remain);
//
//        _CurNumber = Share;
//    }
//
//    for (int i = 0; i < CurStr.size(); i++)
//    {
//        FullStr += CurStr[CurStr.size() - i - 1];
//    }
//}
//
//string solution(int n, int t, int m, int p)
//{
//    FullStr.reserve(10000);
//
//    int CurNum = 0;
//
//    while (true)
//    {
//        if (FullStr.size() / m >= t)
//        {
//            break;
//        }
//
//        AddNumToFullStr(n, CurNum);
//        CurNum++;
//    }
//
//    std::string Answer;
//    Answer.reserve(t);
//
//    for (int i = 0; i < FullStr.size(); i++)
//    {
//        if (Answer.size() == t)
//        {
//            break;
//        }
//
//        if (i % m == p - 1)
//        {
//            Answer += FullStr[i];
//        }
//    }
//
//    return Answer;
//}