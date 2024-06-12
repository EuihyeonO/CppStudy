//#include <functional>
//#include <iostream>
//
//class FuncObject
//{
//public:
//    int operator()(int _A, int _B)
//    {
//        return (_A + _B);
//    }
//};
//
//class Object
//{
//public:
//    void Test()
//    {
//        //
//    }
//};
//
//class Player
//{
//public:
//    int NumEquip = 0;
//    int NumConsumption = 0;
//};
//
//int SumFunc(const int* _A, const int* _B)
//{
//    return *_A + *_B;
//}
//
//void RemoveFunc(int* _Target, int _RemoveValue, int _C)
//{
//    std::cout << _RemoveValue << _C;
//    *_Target -= _RemoveValue;
//}
//
//int main()
//{
//    FuncObject NewFuncObject;
//
//    std::function<int(int, int)> Functor = NewFuncObject;
//    int Sum = Functor(3, 5);
//
//    std::function<int()> Lamda = []()->int{return 10;};
//    int LamdaReturn = Lamda();
//
//    std::function<void(Object*)> MemberFunc = &Object::Test;
//   
//    Object NewObject;
//    MemberFunc(&NewObject);
//
//    std::function<void()> BindedMemberFunc = std::bind(&Object::Test, &NewObject);
//    BindedMemberFunc();
//
//    [](int _A, int _B)->int {return _A + _B; }(3, 5);
//
//    int A = 0;
//    int B = 0;
//
//    int R = [](int arg)->int
//        {
//            int rx = 10;
//            return arg + rx;
//        }(1); 
//
//    Player NewPlayer;
//    std::function<int()> SumFuncPtr = std::bind(&SumFunc, &NewPlayer.NumEquip, &NewPlayer.NumConsumption);
//    
//    std::cout << SumFuncPtr() << std::endl;
//    
//    NewPlayer.NumEquip = 3;
//    NewPlayer.NumConsumption = 5;
//    
//    std::cout << SumFuncPtr() << std::endl;
//
//    std::function<void(int*, int, int)> RemoveFuncPtr = std::bind(&RemoveFunc, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
//    RemoveFuncPtr(&NewPlayer.NumConsumption, 6, 10);
//
//    return 0;
//}