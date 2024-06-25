//#include <iostream>
//
//class A
//{
//public:
//    void Death() {}
//    void Attack() {}
//};
//
//class AProxy
//{
//public:
//    void Attack()
//    {
//        if (NewA == nullptr)
//        {
//            NewA = new A();
//        }
//
//        NewA->Attack();
//    }
//
//    void Death()
//    {
//        if (NewA == nullptr)
//        {
//            std::cout << "A객체가 생성되지도 않았는데, 파괴하려 하였습니다." << std::endl;
//            return;
//        }
//
//        NewA->Death();
//        delete NewA;
//        NewA = nullptr;
//    }
//
//private:
//    A* NewA = nullptr;
//};
//
//int main()
//{
//    AProxy* NewProxy = new AProxy();
//
//    NewProxy->Attack();
//    NewProxy->Death();
//
//    return 0;
//}