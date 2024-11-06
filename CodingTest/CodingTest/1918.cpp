//#include <iostream>
//#include <vector>
//
//#include <queue>
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
//	std::string Input;
//	std::cin >> Input;
//
//	std::stack<char> Sign;
//
//	std::string Answer = "";
//
//	for (int i = 0; i < Input.size(); i++)
//	{
//		char CurChar = Input[i];
//
//		if (CurChar >= 'A' && CurChar <= 'Z')
//		{
//			Answer.push_back(CurChar);
//		}
//		else
//		{
//			if (CurChar == ')')
//			{
//				while (Sign.size() > 0 && Sign.top() != '(')
//				{
//					Answer.push_back(Sign.top());
//					Sign.pop();
//				}
//
//				if (Sign.size() > 0 && Sign.top() == '(')
//				{
//					Sign.pop();
//				}
//			}
//			else if (Sign.size() > 0 && (Sign.top() == '+' || Sign.top() == '-') && (CurChar == '+' || CurChar == '-'))
//			{
//				Answer.push_back(Sign.top());
//				Sign.pop();
//				Sign.push(CurChar);
//			}
//			else if (Sign.size() > 0 && (Sign.top() == '*' || Sign.top() == '/') && (CurChar == '*' || CurChar == '/'))
//			{
//				Answer.push_back(Sign.top());
//				Sign.pop();
//				Sign.push(CurChar);
//			}
//			else if (Sign.size() > 0 && (Sign.top() == '*' || Sign.top() == '/') && (CurChar == '+' || CurChar == '-'))
//			{
//				while (Sign.size() > 0 && Sign.top() != '(')
//				{
//					Answer.push_back(Sign.top());
//					Sign.pop();
//				}
//
//				Sign.push(CurChar);
//			}
//			else
//			{
//				Sign.push(CurChar);
//			}
//		}
//	}
//
//	while(Sign.size() > 0)
//	{
//		Answer.push_back(Sign.top());
//		Sign.pop();
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}