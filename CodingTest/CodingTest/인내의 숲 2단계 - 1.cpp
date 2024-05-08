//#include <iostream>
//
////1,2,3 으로 n을 만들 수 있는 경우의 수
//int Case = 0;
//
//void Recursive(int _CurHP)
//{
//    if (_CurHP == 1)
//    {
//        Case++;
//    }
//
//    if (_CurHP - 1 >= 1)
//    {
//        Recursive(_CurHP - 1);
//    }
//
//    if (_CurHP - 2 >= 1)
//    {
//        Recursive(_CurHP - 2);
//    }
//
//    if (_CurHP - 3 >= 1)
//    {
//        Recursive(_CurHP - 3);
//    }
//}
//
//int main()
//{
//    int StartHP = 0;
//    std::cin >> StartHP;
//
//    Recursive(StartHP);
//    std::cout << Case;
//
//    return 0;
//}