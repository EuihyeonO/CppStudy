//#include <iostream>
//
//void Func()
//{
//	std::cout << "Func 호출" << std::endl;
//}
//
//int Func2()
//{
//	std::cout << "Func2 호출" << std::endl;
//	return 2;
//}
//
//int Func3(int _A, int _B)
//{
//	std::cout << "Func3 호출" << std::endl;
//	return _A + _B;
//}

//int main()
//{
//	void (*FuncPtr)();
//	FuncPtr = &Func;
//	FuncPtr();
//
//	int (*Func2Ptr)();
//	Func2Ptr = &Func2;
//	int ReturnValue_1 = Func2Ptr();
//	std::cout << "Func2Ptr Return Value : " << ReturnValue_1 << std::endl;
//
//	int (*Func3Ptr)(int, int);
//	Func3Ptr = &Func3;
//
//	int ReturnValue_2 = Func3Ptr(5, 6);
//	std::cout << "Func3Ptr Return Value : " << ReturnValue_2 << std::endl;
//
//	return 0;
//}
