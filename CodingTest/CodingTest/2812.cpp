//#include <iostream>
//#include <vector>
//#include <stack>
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
//	int NumLength = 0, DeleteCount = 0;
//	std::cin >> NumLength >> DeleteCount;
//	
//	std::string Number = "";
//	std::cin >> Number;
//	
//	std::stack<int> Indexs;
//
//	for (int i = 0; i < NumLength; i++)
//	{
//		if (Indexs.size() == 0)
//		{
//			Indexs.push(i);
//		}
//		else
//		{
//			while(Indexs.size() > 0 && Number[Indexs.top()] < Number[i])
//			{
//				Number[Indexs.top()] = 'X';
//				Indexs.pop();
//
//				DeleteCount--;
//
//				if (DeleteCount == 0)
//				{
//					break;
//				}
//			}
//
//			if (DeleteCount == 0)
//			{
//				break;
//			}
//
//			Indexs.push(i);
//		}
//	}
//
//	while(Number.size() > 0 && DeleteCount > 0)
//	{
//		if (Number.back() != 'X')
//		{
//			DeleteCount--;
//		}
//
//		Number.pop_back();
//	}
//
//	for (int i = 0; i < Number.size(); i++)
//	{
//		if (Number[i] != 'X')
//		{
//			std::cout << Number[i];
//		}
//	}
//
//	return 0;
//}