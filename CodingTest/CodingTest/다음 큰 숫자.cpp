//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int GetOneCount(int _Num)
//{
//    int CurOneCount = 0;
//
//    while (_Num > 0)
//    {
//        if (_Num % 2 == 1)
//        {
//            CurOneCount++;
//        }
//
//        _Num /= 2;
//    }
//
//    return CurOneCount;
//}
//
//int solution(int n)
//{
//    int CurOneCount = GetOneCount(n);
//
//    int PlusCount = 1;
//    int CurNum = 0;
//
//    while (true)
//    {
//        CurNum = n + PlusCount;
//
//        int NextOneCount = GetOneCount(CurNum);
//
//        if (NextOneCount == CurOneCount)
//        {
//            break;
//        }
//
//        PlusCount++;
//    }
//
//    return CurNum;
//}