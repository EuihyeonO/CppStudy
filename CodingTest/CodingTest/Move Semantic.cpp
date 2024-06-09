//#include <chrono>
//#include <iostream>
//
//class A
//{
//public:
//    //기본 생성자
//    A()
//    {
//        Arr = new int[50];
//
//        for (int i = 0; i < 50; i++)
//        {
//            Arr[i] = i;
//        }
//    }
//
//    ~A()
//    {
//        if (Arr != nullptr)
//        {
//            delete[] Arr;
//            Arr = nullptr;
//        }
//    }
//
//    //복사 생성자
//    A(const A& _Other)
//    {
//        Arr = new int[50];
//    
//        for (int i = 0; i < 50; i++)
//        {
//            Arr[i] = _Other.Arr[i];
//        }
//    }
//    
//    //복사 대입자
//    A& operator=(const A& _Other)
//    {
//        for (int i = 0; i < 50; i++)
//        {
//            Arr[i] = _Other.Arr[i];
//        }
//    
//        return *this;
//    }
//
//    //이동 생성자
//    A(A&& _Other)
//    {
//        Arr = _Other.Arr;
//        _Other.Arr = nullptr;
//    }
//
//    //이동 대입자
//    A& operator=(A&& _Other)
//    {
//        if (Arr != nullptr)
//        {
//            delete[] Arr;
//        }
//    
//        Arr = _Other.Arr;
//        _Other.Arr = nullptr;
//    
//        return *this;
//    }
//
//    int* Arr = nullptr;
//};
//
//A CreateA()
//{
//    A NewA;
//    return NewA;
//}
//
//void Func(A& _A)
//{
//    A NewA;
//    _A = std::move(NewA);
//}
//
//int main()
//{
//    A NewA;
//
//    for(int i = 0; i < 5; i++)
//    {
//        std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//        
//        for (int i = 0; i < 1000000; i++)
//        {
//            NewA = CreateA();
//        }
//
//        std::chrono::system_clock::time_point End = std::chrono::system_clock::now();
//        std::chrono::milliseconds Time = std::chrono::duration_cast<std::chrono::milliseconds>(End - Start);
//        
//        std::cout << Time << std::endl;
//    }
//
//    return 0;
//}