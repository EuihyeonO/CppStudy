//#include "windows.h"
//#include "psapi.h"
//
//
//int main() 
//{
//	PROCESS_MEMORY_COUNTERS_EX pmc;
//	GetProcessMemoryInfo(GetCurrentProcess(), reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc));
//	//pmc의 자료형이 함수의 인자와 호환이 안돼서, 타입캐스팅 해주었다.
//
//	SIZE_T virtualMemUsedByMe = pmc.PrivateUsage; //가상메모리 체크
//	SIZE_T physMemUsedByMe = pmc.WorkingSetSize; //물리메모리 체크
//
//	int* Arr = new int[100]();
//
//	GetProcessMemoryInfo(GetCurrentProcess(), reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc));
//
//	SIZE_T virtualMemUsedByMe1 = pmc.PrivateUsage; //가상메모리 체크
//	SIZE_T physMemUsedByMe1 = pmc.WorkingSetSize; //물리메모리 체크
//
//	SIZE_T Data = physMemUsedByMe1 - physMemUsedByMe;
//
//	return 0;
//}
