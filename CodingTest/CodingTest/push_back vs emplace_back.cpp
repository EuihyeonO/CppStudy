//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//class Object
//{
//public:
//    Object() { std::cout << "일반 생성자" << std::endl; };
//    Object(const Object& _Other) { std::cout << "복사 생성자" << std::endl; };
//    Object(const Object&& _Other) noexcept { std::cout << "이동 생성자" << std::endl; };
//
//    Object(int _A) { std::cout << "int 1개 생성자" << std::endl; };
//    Object(int _A, int _B) { std::cout << "int 2개 생성자" << std::endl; };
//    Object(int _A, int _B, int _C) { std::cout << "int 3개 생성자" << std::endl; };
//};
//
//void push_back(const Object& _Object)
//{
//    Object* NewObject = new Object(_Object);
//    //NewObject를 벡터에 삽입 
//}
//
//void push_back(Object&& _Object)
//{
//    Object* NewObject = new Object(std::move(_Object));
//    //NewObject를 벡터에 삽입 
//}
//
//template<class... Types>
//void emplace_back(const Types&&... _Args)
//{
//    Object* NewObject = new Object(std::forward(_Args));
//    //NewObject를 벡터에 삽입
//}
//
//int main()
//{
//    Object NewObject;
//    std::cout << "--------------------" << std::endl;
//    
//    std::vector<Object> NewVector;
//    NewVector.reserve(100);
//
//    NewVector.push_back(NewObject);
//    std::cout << "--------------------" << std::endl;
//    NewVector.push_back(Object());
//    std::cout << "--------------------" << std::endl;
//
//    NewVector.emplace_back(Object());
//    std::cout << "--------------------" << std::endl;
//    NewVector.emplace_back(3);
//    std::cout << "--------------------" << std::endl;
//    NewVector.emplace_back(3, 5, 7);
//}