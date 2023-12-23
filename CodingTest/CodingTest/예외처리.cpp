//#include <iostream>
//
//class A
//{
//public:
//	int a = 0;
//};
//
//class B : public A
//{
//public:
//	int b = 0;
//};
//
//void Func(A _A)
//{
//	if (_A.a == 0) throw _A;
//	std::cout << "성공" << std::endl;
//}
//
//void Func1(B _B)
//{
//	if (_B.a == 0) throw _B;
//	std::cout << "성공" << std::endl;
//}
//
////int main()
////{
////	A NewA;
////	B NewB;
////
////	try 
////	{
////		Func1(NewB);
////	}
////
////	//상속관계에서는 자식클래스가 부모클래스로 캐스팅될 수 있기 때문에, 자식클래스의 Catch를 더 앞에 작성해야한다.
////	catch (B& _B)
////	{
////		std::cout << "자식 예외처리";
////	}
////	catch (A& _A)
////	{
////		std::cout << "부모 예외처리";
////	}
////
////	return 0;
////}