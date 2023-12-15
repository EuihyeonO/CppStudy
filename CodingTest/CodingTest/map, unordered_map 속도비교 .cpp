//#include <map>
//#include <unordered_map>
//#include <chrono>
//#include <string>
//
///*
//* 적은 연산 횟수
//* :unordered_map 이 더 빠르긴 하다.)
//* 
//* 많은 연산 횟수
//* :map에 비해 unordered_map 이 10배 가까이 느리다. (map은 1.3초가량 소요, unordered_map은 11초 소요)
//* 
//* 짧은 문자열 키
//* :unorderd_map 이 더 빠르긴 하다. (이것 또한 3~40%가량 더 빠르다.)
//* 
//* 긴 문자열 키
//* :map이 2배가까이 빠르다. 
//* 
//* unordered_map 은 문자열이 아닌key를 받으며 데이터의 수(혹은 연산횟수)가 많지 않을 때 더 좋은 성능을 보인다.
//(몇 번 측정해보니, 4~50%가량 더 빠르다.)
//*/
//int main()
//{
//	std::chrono::duration<float> Arr[10] = {  };
//
//	//정수형 키 (10만회)
//	{
//		std::map<int, int> Map;
//
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000; i++)
//		{
//			Map[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//
//		Arr[0] = Time;
//	}
//
//	{
//		std::unordered_map<int, int> UMap;
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000; i++)
//		{
//			UMap[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//
//		Arr[1] = Time;
//	}
//
//	//정수형 키 (1000만회)
//	{
//		std::map<int, int> Map;
//	
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000000; i++)
//		{
//			Map[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//	
//		Arr[2] = Time;
//	}
//	
//	{
//		std::unordered_map<int, int> UMap;
//	
//		std::chrono::duration<float> Time;
//		std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//		for (int i = 0; i < 50000000; i++)
//		{
//			UMap[i] = 0;
//		}
//		std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//		Time = EndTime - StartTime;
//	
//		Arr[3] = Time;
//	}
//
//	//짧은 문자열 키
//	//{
//	//	std::map<std::string, int> Map;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		Map["A"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[4] = Time;
//	//}
//	//
//	//{
//	//	std::unordered_map<std::string, int> UMap;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		UMap["A"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[5] = Time;
//	//}
//	//
//	////긴 문자열 키
//	//{
//	//	std::map<std::string, int> Map;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		Map["ABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJ"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[6] = Time;
//	//}
//	//
//	//{
//	//	std::unordered_map<std::string, int> UMap;
//	//
//	//	std::chrono::duration<float> Time;
//	//	std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::now();
//	//	for (int i = 0; i < 100000; i++)
//	//	{
//	//		UMap["ABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJABCDEFGHIJ"] = 0;
//	//	}
//	//	std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::now();
//	//	Time = EndTime - StartTime;
//	//
//	//	Arr[7] = Time;
//	//}
//
//
//	return 0;
//}