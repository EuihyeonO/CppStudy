//#include <chrono>
//
//int main()
//{
//	int Arr[100] = { 0, };
//
//	//속도측정
//	std::chrono::system_clock::time_point StartTime1 = std::chrono::system_clock::now();
//
//	for (int i = 0; i < 10000000; i++)
//	{
//		int a = *(Arr + 99);
//	}
//
//	std::chrono::system_clock::time_point EndTime1 = std::chrono::system_clock::now();
//
//	std::chrono::system_clock::time_point StartTime2 = std::chrono::system_clock::now();
//
//	for (int i = 0; i < 10000000; i++)
//	{
//		int a = Arr[99];
//	}
//
//	std::chrono::system_clock::time_point EndTime2 = std::chrono::system_clock::now();
//
//	std::chrono::nanoseconds Dur1 = std::chrono::duration_cast<std::chrono::nanoseconds>(EndTime1 - StartTime1);
//	std::chrono::nanoseconds Dur2 = std::chrono::duration_cast<std::chrono::nanoseconds>(EndTime2 - StartTime2);
//
//	//sizeof
//	int* ArrPtr = Arr;
//
//	size_t ArrSize = sizeof(Arr);
//	size_t ArrPtrSize = sizeof(ArrPtr);
//
//	size_t Arr0Size = sizeof(Arr[0]);
//	size_t Arr0PtrSize = sizeof(&Arr[0]);
//
//	return 0;
//}