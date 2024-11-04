//#include <iostream>
//#include <vector>
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
//	std::string Input;
//	std::cin >> Input;
//
//	int Answer = 0;
//	int BPointer = -1;
//
//	for (int i = 0; i < Input.size(); i++)
//	{
//		if (Input[i] == 'B' && BPointer == -1)
//		{
//			BPointer = i;
//		}
//		else if (Input[i] == 'C' && BPointer != -1)
//		{
//			if (BPointer < i)
//			{
//				Input[i] = 'X';
//				Input[BPointer] = 'X';
//
//				while (BPointer < Input.size() && Input[BPointer] != 'B')
//				{
//					BPointer++;
//				}
//
//				Answer++;
//			}
//		}
//	}
//
//	BPointer = -1;
//
//	for (int i = Input.size() - 1; i >= 0; i--)
//	{
//		if (Input[i] == 'B' && BPointer == -1)
//		{
//			BPointer = i;
//		}
//		else if (Input[i] == 'A' && BPointer != -1)
//		{
//			if (BPointer > i)
//			{
//				Input[i] = 'X';
//				Input[BPointer] = 'X';
//
//				while (BPointer >= 0 && Input[BPointer] != 'B')
//				{
//					BPointer--;
//				}
//
//				Answer++;
//			}
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}