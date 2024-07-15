//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool isAble(const std::vector<int>& _House, int _Distance, int _NumRouter)
//{
//	int Count = 1;
//	int PrevHouse = _House[0];
//
//	for (int i = 1; i < _House.size(); i++)
//	{
//		if (_House[i] - PrevHouse >= _Distance)
//		{
//			Count++;
//			PrevHouse = _House[i];
//		}
//
//		if (Count >= _NumRouter)
//		{
//			break;
//		}
//	}
//
//	return (Count >= _NumRouter);
//}
//
//int main()
//{
//	Init();
//	
//	int NumHouse = 0;
//	int NumRouter = 0;
//	std::cin >> NumHouse >> NumRouter;
//
//	std::vector<int> Houses(NumHouse);
//
//	for (int i = 0; i < NumHouse; i++)
//	{
//		std::cin >> Houses[i];
//	}
//
//	std::sort(Houses.begin(), Houses.end());
//
//	int Left = 0;
//	int Right = 1000000000;
//
//	int Mid = 0;
//	int Answer = 0;
//
//	while (Left <= Right)
//	{
//		Mid = (Right + Left) / 2;
//
//		if (isAble(Houses, Mid, NumRouter) == true)
//		{
//			Left = Mid + 1;
//			Answer = std::max(Answer, Mid);
//		}
//		else
//		{
//			Right = Mid - 1;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}