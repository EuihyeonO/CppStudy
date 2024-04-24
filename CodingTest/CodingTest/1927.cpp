//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int InputSize = 0;
//	std::cin >> InputSize;
//
//	std::priority_queue<int, std::vector<int>, std::greater<int>> Queue;
//	std::vector<int> Answer;
//	Answer.reserve(InputSize);
//
//	for (int i = 0; i < InputSize; i++)
//	{
//		int Input = 0;
//		std::cin >> Input;
//
//		if (Input == 0)
//		{
//			if (Queue.size() == 0)
//			{
//				Answer.push_back(0);
//			}
//			else
//			{
//				Answer.push_back(Queue.top());
//				Queue.pop();
//			}
//		}
//		else
//		{
//			Queue.push(Input);
//		}
//	}
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}