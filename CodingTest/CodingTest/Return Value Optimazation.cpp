//#include <iostream>
//
//class A
//{
//public:
//	A()
//	{
//		std::cout << "일반 생성자 호출" << std::endl;
//	}
//
//	A(const A& _A)
//	{
//		std::cout << "복사 생성자 호출" << std::endl;
//	}
//
//	A& operator=(const A& _A)
//	{
//		std::cout << "복사 대입자 호출" << std::endl;
//	}
//};
//
//A CreateA()
//{
//	return A();
//}
//
//int main()
//{
//	A NewA = CreateA();
//	return 0;
//}