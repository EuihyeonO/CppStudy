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
//	int Size = 0;
//	std::cin >> Size;
//
//	std::string Command;
//	std::cin >> Command;
//
//	std::vector<int> Nums(Size);
//	for (int i = 0; i < Size; i++)
//	{
//		std::cin >>	Nums[i];
//	}
//
//	std::stack<double> Stack;
//
//	for (int i = 0; i < Command.size(); i++)
//	{
//		if(Command[i] >= 'A' && Command[i] <= 'Z')
//		{
//			double CurNum = Nums[Command[i] - 'A'];
//			Stack.push(CurNum);
//		}
//		else
//		{
//			double Num1 = Stack.top();
//			Stack.pop();
//
//			double Num2 = Stack.top();
//			Stack.pop();
//
//			if (Command[i] == '+')
//			{
//				Stack.push(Num2 + Num1);
//			}
//			else if (Command[i] == '-')
//			{
//				Stack.push(Num2 - Num1);
//			}
//			else if (Command[i] == '*')
//			{
//				Stack.push(Num2 * Num1);
//			}
//			else if(Command[i] == '/')
//			{
//				Stack.push(Num2 / Num1);
//			}
//		}
//	}
//
//	printf("%.2f", Stack.top());
//
//	return 0;
//}