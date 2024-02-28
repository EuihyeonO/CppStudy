//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
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
//	int NumOfStr = 0;
//	std::cin >> NumOfStr;
//
//	std::vector<std::string> Vec(NumOfStr);
//	for (int i = 0; i < NumOfStr; i++)
//	{
//		std::cin >> Vec[i];
//	}
//
//	sort(Vec.begin(), Vec.end());
//
//	std::stack<std::string> Answer;
//	Answer.push(Vec[0]);
//
//	for (int i = 1; i < Vec.size(); i++)
//	{
//		std::string StackStr = Answer.top();
//		std::string CurStr = Vec[i];
//
//		std::string LongStr = "";
//		std::string ShortStr = "";
//
//		if (StackStr.size() < CurStr.size())
//		{
//			LongStr = CurStr;
//			ShortStr = StackStr;
//		}
//		else
//		{
//			LongStr = StackStr;
//			ShortStr = CurStr;
//		}
//
//		if (LongStr.substr(0, ShortStr.size()) == ShortStr)
//		{
//			Answer.pop();
//			Answer.push(LongStr);
//		}
//		else
//		{
//			Answer.push(CurStr);
//		}
//	}
//
//	std::cout << Answer.size();
//
//	return 0;
//}