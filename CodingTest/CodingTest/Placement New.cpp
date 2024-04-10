//#include <cstdlib>
//#include <new>
//#include <crtdbg.h>
//#include <iostream>
//
//class Point
//{
//public:
//	Point() {};
//
//	Point(int _X, int _Y) : X(_X), Y(_Y)
//	{
//
//	}
//	~Point() 
//	{
//		std::cout << "Delete" << "\n"; 
//	};
//
//	int GetX()
//	{
//		return X;
//	}
//
//	int GetY()
//	{
//		return Y;
//	}
//
//private:
//	int X = 0;
//	int Y = 0;
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//	
//	//스택에도 되네
//	{
//		char Address[100] = { 0, };
//		Point* P = new(Address) Point;
//	}
//
//	// 새로 할당할 땐 operator new?
//	{
//		void* Address = operator new(sizeof(Point));
//		Point* P = new(Address) Point;
//
//		//메모리를 해제하기 전에, 해당 메모리에 위치한 객체의 소멸자를 명시적으로 호출해주는 것이 좋다.
//		//이 코드에선 Address로 delete를 하고 있는데, Address는 void타입이기 때문에, 실제 그 위치에 있는 특정 객체의 소멸자가 제대로 호출되지 않을 수 있기 떄문이다.
//		P->~Point();
//		delete(Address);
//	}
//
//	// 새로 할당할 땐 operator new?
//	{
//		void* Address = operator new(sizeof(Point) + sizeof(int));
//		Point* P = new(Address) Point;
//		
//		//포인터의 연산을 할 때, 어떤 자료형으로 캐스팅 하냐에 따라 다르게 해야한다는 것을 주의해야한다.		
//		//int* I = new((Point*)Address + 1) int(15);
//		int* I = new((char*)Address + sizeof(Point)) int(19);
//
//		std::cout << P->GetX() << " " << P->GetY() << " " << *I << "\n";
//
//		P->~Point();
//		delete(Address);
//	}
//}
