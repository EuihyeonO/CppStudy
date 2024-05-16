//#include <iostream>
//#include <vector>
//#include <stack>
//#include <iterator>
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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<std::string> Answers(NumCase);
//
//	for(int Case = 0; Case < NumCase; Case++)
//	{
//		std::string Input;
//		std::cin >> Input;
//
//		std::stack<char> LeftStack;
//		std::stack<char> RightStack;
//
//		for (int i = 0; i < Input.size(); i++)
//		{
//			if (Input[i] == '<')
//			{
//				if (LeftStack.size() > 0)
//				{
//					RightStack.push(LeftStack.top());
//					LeftStack.pop();
//				}
//			}
//			else if (Input[i] == '>')
//			{
//				if (RightStack.size() > 0)
//				{
//					LeftStack.push(RightStack.top());
//					RightStack.pop();
//				}
//			}
//			else if (Input[i] == '-')
//			{
//				if (LeftStack.size() > 0)
//				{
//					LeftStack.pop();
//				}
//			}
//			else
//			{
//				LeftStack.push(Input[i]);
//			}
//		}
//
//		int LeftSize = LeftStack.size();
//		int RightSize = RightStack.size();
//
//		std::string Answer(LeftSize + RightSize, '\0');
//		for (int i = 0; i < LeftSize; i++)
//		{
//			Answer[LeftSize - 1 - i] = LeftStack.top();
//			LeftStack.pop();
//		}
//
//		for (int i = LeftSize; i < Answer.size(); i++)
//		{
//			Answer[i] = RightStack.top();
//			RightStack.pop();
//		}
//
//		Answers[Case] = Answer;
//	}
//
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//
//	return 0;
//}