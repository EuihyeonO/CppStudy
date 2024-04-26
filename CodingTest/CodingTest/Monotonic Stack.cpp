//#include <stack>
//#include <vector>
//#include <iostream>
//
//int main()
//{
//	std::vector<int> Array = { 1, 7, 5, 3, 6, 10 };
//	std::vector<int> Answer(Array.size(), 0);
//
//	std::stack<int> MonotonicStack;
//
//	for (int i = Array.size() - 1; i >= 0; i--)
//	{
//		int CurNum = Array[i];
//
//		while (MonotonicStack.size() > 0)
//		{
//			if (MonotonicStack.top() > CurNum)
//			{
//				break;
//			}
//
//			MonotonicStack.pop();
//		}
//
//		if (MonotonicStack.size() == 0)
//		{
//			Answer[i] = -1;
//		}
//		else
//		{
//			Answer[i] = MonotonicStack.top();
//		}
//
//		MonotonicStack.push(CurNum);
//	}
//
//	return 0;
//}
