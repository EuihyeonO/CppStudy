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
//	int NumSize = 0;
//	std::cin >> NumSize;
//	
//	std::priority_queue<int, std::vector<int>, std::greater<int>> PQ;
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		int Input = 0;
//		std::cin >> Input;
//
//		PQ.push(Input);
//	}
//
//	int Count = 0;
//	while (PQ.size() > 1)
//	{
//		int First = PQ.top();
//		PQ.pop();
//
//		int Second = PQ.top();
//		PQ.pop();
//
//		PQ.push(First + Second);
//		Count += First + Second;
//	}
//
//	std::cout << Count;
//	return 0;
//}