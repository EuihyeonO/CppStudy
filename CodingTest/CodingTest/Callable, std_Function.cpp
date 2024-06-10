//#include <functional>
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
//int Sum(int _A, int _B)
//{
//    return _A + _B;
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
//
//
//    return 0;
//}