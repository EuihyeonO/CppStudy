//#include <iostream>
//#include <climits>
//
//int GetGCD(int _A, int _B)
//{
//    while (_B > 0)
//    {
//        int Remain = _A % _B;
//        _A = _B;
//        _B = Remain;
//    }
//
//    return _A;
//}
//
//int main()
//{
//    int ATarget = 0;
//    int BTarget = 0;
//
//    std::cin >> ATarget >> BTarget;
//
//    int GCD = GetGCD(ATarget, BTarget);
//
//    if (ATarget > 0 && GCD == 1)
//    {
//        std::cout << "POSSIBLE";
//    }
//    else
//    {
//        std::cout << "IMPOSSIBLE";
//    }
//
//    return 0;
//}