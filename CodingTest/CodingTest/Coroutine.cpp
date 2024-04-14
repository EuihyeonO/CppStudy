//#include <iostream>
//#include <coroutine>
//#include <chrono>
//
//class MyCoroutine
//{
//public:
//	struct promise_type
//	{
//		MyCoroutine get_return_object()
//		{
//			return  MyCoroutine{ std::coroutine_handle<promise_type>::from_promise(*this) };
//		}
//
//		std::suspend_always initial_suspend()
//		{
//			return std::suspend_always{};
//		}
//
//		std::suspend_always final_suspend() noexcept
//		{
//			return std::suspend_always{};
//		}
//
//		int YieldValue = 0;
//		std::suspend_always yield_value(int _Value)
//		{
//			YieldValue = _Value;
//			return std::suspend_always{};
//		}
//
//		int ReturnValue = 0;
//		void return_value(int value) 
//		{
//			ReturnValue = value;
//		}
//
//		void unhandled_exception() {}
//
//	};
//	
//	int GetReturnValue() 
//	{
//		return Handler.promise().ReturnValue;
//	}
//
//	int GetYieldValue()
//	{
//		return Handler.promise().YieldValue;
//	}
//
//	MyCoroutine(std::coroutine_handle<promise_type> _Handler) : Handler(_Handler) {}
//	
//	~MyCoroutine()
//	{
//		if ((bool)Handler == true)
//		{
//			Handler.destroy();
//		}
//	}
//
//public:
//	const std::coroutine_handle<promise_type> GetHandler()
//	{
//		return Handler;
//	}
//
//private:
//	std::coroutine_handle<promise_type> Handler;
//};
//
//MyCoroutine CoroutineTest()
//{
//	std::cout << "Coroutine 1" << std::endl;
//	co_yield (5);
//
//	std::cout << "Coroutine 2" << std::endl;
//	co_yield (2);
//
//	co_return(10);
//}
//
//int main()
//{
//	std::cout << "main 1" << std::endl;
//
//	MyCoroutine Coroutine = CoroutineTest();
//	if (Coroutine.GetHandler().done() == false)
//	{
//		Coroutine.GetHandler().resume();
//		std::cout << Coroutine.GetYieldValue() << std::endl;
//	}
//	
//	if (Coroutine.GetHandler().done() == false)
//	{
//		Coroutine.GetHandler().resume();
//		std::cout << Coroutine.GetYieldValue() << std::endl;
//	}
//
//	std::cout << "main 2" << std::endl;
//}
