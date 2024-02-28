//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <queue>
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
//	int NumSize = 0;
//	std::cin >> NumSize;
//	
//	std::priority_queue<int, std::vector<int>, std::less<int>> Front;
//	std::priority_queue<int, std::vector<int>, std::greater<int>> Back;
//	std::vector<int> Answers(NumSize);
//	
//	
//	for (int i = 0; i < NumSize; i++)
//	{
//		int Input = 0;
//		std::cin >> Input;
//
//		if (Front.size() == Back.size())
//		{
//			Front.push(Input);
//		}
//		else
//		{
//			Back.push(Input);
//		}
//
//		if (Back.size() > 0)
//		{
//			int FrontTop = Front.top();
//			int BackTop = Back.top();
//
//			if (FrontTop > BackTop)
//			{
//				Front.pop();
//				Back.pop();
//
//				Front.push(BackTop);
//				Back.push(FrontTop);
//			}
//		}
//
//		Answers[i] = Front.top();
//	}
//
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<int>(std::cout, "\n"));
//
//	return 0;
//}