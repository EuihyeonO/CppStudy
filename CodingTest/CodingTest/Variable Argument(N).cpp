//#include <string>
//#include <iostream>
//
////template<typename T>
////void Print_1(T _FixArg)
////{
////    std::cout << _FixArg << " ";
////}
////
////template<typename T1, typename... Types>
////void Print_1(T1 _FixArg , Types... _VarArgs)
////{
////    std::cout << _FixArg << " ";
////    Print_1(_VarArgs...);
////}
////
////template<typename T>
////int Sum(T _FixArg)
////{
////    return _FixArg;
////}
////
////template<typename T1, typename... Types>
////int Sum(T1 _FixArg, Types... _VarArgs)
////{
////    int Result = _FixArg + Sum(_VarArgs...);
////    return Result;
////}
//
///*-------------------------------------------------------------------------------------------*/
//
//template<typename ...Types>
//int Sum(Types... _VarArgs)
//{
//    return (_VarArgs + ...);
//}
//
//
//template<typename ...Types>
//int Sub_1(Types... _VarArgs)
//{
//    return (_VarArgs - ...);
//}
//
//template<typename ...Types>
//int Sub_2(Types... _VarArgs)
//{
//    return (... - _VarArgs);
//}
//
//template<typename ...Types>
//int Sub_3(Types... _VarArgs)
//{
//    return (1 - ... - _VarArgs);
//}
//
//template<typename ...Types>
//int Sub_4(Types... _VarArgs)
//{
//    return (_VarArgs - ... - 1);
//}
//
//template<typename ...Types>
//void PrintAll(Types... _VarArgs)
//{
//    (std::cout << ... << _VarArgs);
//}
//
//int main()
//{
//    PrintAll(1, 2, 3, 4);
//
//    return 0;
//}