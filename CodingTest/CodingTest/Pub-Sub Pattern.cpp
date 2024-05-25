//#include <iostream>
//#include <vector>
//#include <functional>
//
//class Delegate
//{
//public:
//	void Bind(std::function<void()> _Func)
//	{
//		Funcs.push_back(_Func);
//	}
//
//	void Execute()
//	{
//		for (int i = 0; i < Funcs.size(); i++)
//		{
//			Funcs[i]();
//		}
//	}
//
//private:
//	std::vector<std::function<void()>> Funcs;
//};
//
////Publisher
//class Boss
//{
//public:
//	void SetDelegate(Delegate* _Delegate)
//	{
//		MyDelegate = _Delegate;
//	}
//
//	void Die()
//	{
//		std::cout << "Boss가 죽었습니다. " << std::endl;
//		
//		if (MyDelegate != nullptr)
//		{
//			MyDelegate->Execute();
//		}
//	}
//
//private:
//	Delegate* MyDelegate = nullptr;
//};
//
////Subscriber
//class MiniMob1
//{
//public:
//	void Die()
//	{
//		std::cout << "MiniMob1 이 죽었습니다." << std::endl;
//	}
//};
//
////Subscriber
//class MiniMob2
//{
//public:
//	void Die()
//	{
//		std::cout << "MiniMob2 가 죽었습니다." << std::endl;
//	}
//};
//
////Subscriber
//class MiniMob3
//{
//public:
//	void Die()
//	{
//		std::cout << "MiniMob3 이 죽었습니다." << std::endl;
//	}
//};
//
//int main()
//{
//	Delegate NewDelegate;
//
//	Boss NewBoss;
//
//	MiniMob1 NewMob1;
//	MiniMob2 NewMob2;
//	MiniMob3 NewMob3;
//
//	NewBoss.SetDelegate(&NewDelegate);
//	
//	NewDelegate.Bind(std::bind(&MiniMob1::Die, &NewMob1));
//	NewDelegate.Bind(std::bind(&MiniMob2::Die, &NewMob2));
//	NewDelegate.Bind(std::bind(&MiniMob3::Die, &NewMob3));
//
//	NewBoss.Die();
//
//	return 0;
//}
