//#include <string_view>
//#include <iostream>
//#include <chrono>
//
//using namespace std::literals;
//
//void PrintStringView(std::string_view _Str)
//{
//	_Str;
//	return;
//}
//
//void PrintString(const std::string& _Str)
//{
//	_Str;
//	return;
//}
//
//void Function(std::string& _Str)
//{
//	std::cout << _Str << "\n";
//}
//
//
//int main()
//{
//	{
//		std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//	
//		for (int i = 0; i < 5000000; i++)
//		{
//			PrintString("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
//		}
//	
//		std::chrono::system_clock::time_point End = std::chrono::system_clock::now();
//	
//		std::chrono::duration<float> Time = End - Start;
//		std::cout << Time << "\n";
//	}
//	
//	{
//		std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//	
//		std::string Str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	
//		for (int i = 0; i < 5000000; i++)
//		{
//			PrintString(Str);
//		}
//	
//		std::chrono::system_clock::time_point End = std::chrono::system_clock::now();
//	
//		std::chrono::duration<float> Time = End - Start;
//		std::cout << Time << "\n";
//	}
//	
//	{
//		std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//	
//		for (int i = 0; i < 5000000; i++)
//		{
//			PrintStringView("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
//		}
//	
//		std::chrono::system_clock::time_point End = std::chrono::system_clock::now();
//	
//		std::chrono::duration<float> Time = End - Start;
//		std::cout << Time << "\n";
//	}
//	
//	{
//		std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//		
//		std::string Str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	
//		for (int i = 0; i < 5000000; i++)
//		{
//			PrintStringView(Str);
//		}
//	
//		std::chrono::system_clock::time_point End = std::chrono::system_clock::now();
//	
//		std::chrono::duration<float> Time = End - Start;
//		std::cout << Time << "\n";
//	}
//
//	return 0;
//}