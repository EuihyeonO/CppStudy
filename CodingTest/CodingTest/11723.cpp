//#include <iostream>
//#include <memory.h>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int main()
//{
//	Init();
//
//	int NumOfCommand = 0;
//	std::cin >> NumOfCommand;
//
//	bool Arr[21] = { false, };
//
//	for (int i = 0; i < NumOfCommand; i++)
//	{
//		std::string Command = "";
//		int TargetNumber = 0;
//		
//		std::cin >> Command;
//		if (Command != "all" && Command != "empty")
//		{
//			std::cin >> TargetNumber;
//		}
//
//		if (Command == "add")
//		{
//			if (Arr[TargetNumber] == false)
//			{
//				Arr[TargetNumber] = true;
//			}
//		}
//		else if (Command == "remove")
//		{
//			if (Arr[TargetNumber] == true)
//			{
//				Arr[TargetNumber] = false;
//			}
//		}
//		else if (Command == "check")
//		{
//			if (Arr[TargetNumber] == true)
//			{
//				std::cout << 1;
//			}
//			else
//			{
//				std::cout << 0;
//			}
//
//			std::cout << "\n";
//		}
//		else if (Command == "toggle")
//		{
//			Arr[TargetNumber] = !Arr[TargetNumber];
//		}
//		else if (Command == "all")
//		{
//			memset(Arr, true, sizeof(Arr));
//		}
//		else if (Command == "empty")
//		{
//			memset(Arr, false, sizeof(Arr));
//		}
//	}
//
//	return 0;
//}