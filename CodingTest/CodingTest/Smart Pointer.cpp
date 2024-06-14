//#include <memory>
//#include <algorithm>
//#include <iostream>
//#include <crtdbg.h>
//
//#define _CRTDBG_MAP_ALLOC
//
//class Shared_A;
//class Shared_B;
//class Weak_A;
//class Weak_B;
//
//class Shared_A
//{
//public:
//	std::shared_ptr<Shared_B> SharedPtr = nullptr;
//};
//
//class Shared_B
//{
//public:
//	std::shared_ptr<Shared_A> SharedPtr = nullptr;
//};
//
//class Weak_A
//{
//public:
//	std::weak_ptr<Weak_B> WeakPtr;
//};
//
//class Weak_B
//{
//public:
//	std::weak_ptr<Weak_A> WeakPtr;
//};
//
//class Unique_A
//{
//public:
//	std::unique_ptr<Unique_B> UniquePtr;
//};
//
//class Unique_B
//{
//public:
//	std::unique_ptr<Unique_A> UniquePtr;
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	//Shared_ptr
//	std::shared_ptr<Shared_A> NewShared_A = std::make_shared<Shared_A>();
//	std::shared_ptr<Shared_B> NewShared_B = std::make_shared<Shared_B>();
//
//	NewShared_A->SharedPtr = NewShared_B;
//	NewShared_B->SharedPtr = NewShared_A;
//	
//	std::cout << NewShared_A.use_count() << " " << NewShared_B.use_count() << "\n";
//	
//	//Weak_Ptr
//	std::shared_ptr<Weak_A> NewWeak_A = std::make_shared<Weak_A>();
//	std::shared_ptr<Weak_B> NewWeak_B = std::make_shared<Weak_B>();
//
//	NewWeak_A->WeakPtr = NewWeak_B;
//	NewWeak_B->WeakPtr = NewWeak_A;
//
//	std::cout << NewWeak_A.use_count() << " " << NewWeak_B.use_count() << "\n";
//
//	//Unique_Ptr
//	std::unique_ptr<Unique_A> NewUnique_A = std::make_unique<Unique_A>();
//	std::unique_ptr<Unique_B> NewUnique_B = std::make_unique<Unique_B>();
//	
//	//복사 대입자가 delete되어있다. 대입이 불가능
//	//NewUnique_A->UniquePtr = NewUnique_B;
//	//NewUnique_B->UniquePtr = NewUnique_A;
//
//	return 0;
//}