//#include <iostream>
//
//class ShallowCopy
//{
//public:
//    int Hp = 0;
//    int Mp = 0;
//
//    int* Level = nullptr;
//
//    ShallowCopy()
//    {
//        Level = new int();
//    }
//};
//
//class DeepCopy
//{
//public:
//    int Hp = 0;
//    int Mp = 0;
//
//    int* Level = nullptr;
//
//    DeepCopy(const DeepCopy& _Other)
//    {
//        if(Level == nullptr)
//        {
//            Level = new int();
//        }
//
//        Hp = _Other.Hp;
//        Mp = _Other.Mp;
//
//        *Level = *_Other.Level;
//    }
//
//    DeepCopy()
//    {
//        Level = new int();
//    }
//
//    DeepCopy& operator= (const DeepCopy& _Other)
//    {
//        Hp = _Other.Hp;
//        Mp = _Other.Mp;
//
//        *Level = *_Other.Level;
//        
//        return *this;
//    }
//};
//
//int main()
//{
//    {
//        ShallowCopy A;
//        A.Hp = 100;
//        A.Mp = 50;
//        *A.Level = 5;
//  
//        ShallowCopy B;
//  
//        B = A;
//  
//        std::cout << A.Hp << " " << A.Mp << " " << *A.Level << " " << A.Level << std::endl;
//        std::cout << B.Hp << " " << B.Mp << " " << *B.Level << " " << B.Level << std::endl;
//		
//        std::cout << std::endl;
//        delete (B.Level);
// 
//		std::cout << A.Hp << " " << A.Mp << " " << *A.Level << " " << A.Level << std::endl;
//        std::cout << B.Hp << " " << B.Mp << " " << *B.Level << " " << B.Level << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    {
//        DeepCopy A;
//        A.Hp = 100;
//        A.Mp = 50;
//        *A.Level = 5;
//
//        DeepCopy B;
//
//        B = A;
//
//        std::cout << A.Hp << " " << A.Mp << " " << *A.Level << " " << A.Level << std::endl;
//        std::cout << B.Hp << " " << B.Mp << " " << *B.Level << " " << B.Level << std::endl;
//       
//        std::cout << std::endl;
//        delete (B.Level);
//
//        std::cout << A.Hp << " " << A.Mp << " " << *A.Level << " " << A.Level << std::endl;
//        std::cout << B.Hp << " " << B.Mp << " " << *B.Level << " " << B.Level << std::endl;
//    }
//
//    return 0;
//}