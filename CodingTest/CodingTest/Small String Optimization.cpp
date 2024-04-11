//#include <string>
//#include <chrono>
//#include <iostream>
//
//int main()
//{
//	int a = sizeof(std::string);
//
//	{
//		std::chrono::system_clock::time_point Start = std::chrono::system_clock::now();
//
//		for (int i = 0; i < 5000000; i++)
//		{
//			std::string Test = "A";
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
//			std::string Test = "AAAAAAAAAAAAAAA";
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
//			std::string Test = "AAAAAAAAAAAAAAAA";
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