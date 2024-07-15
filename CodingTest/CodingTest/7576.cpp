//#include <iostream>
//#include <set>
//#include <queue>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Data
//{
//	std::pair<int, int> Pos;
//	int Days = 0;
//};
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	int Height = 0;
//
//	std::cin >> Width >> Height;
//
//	std::set<std::pair<int, int>> UnGrown;
//	std::queue<Data> Grown;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			int Input = 0;
//			std::cin >> Input;
//
//			if (Input == 0)
//			{
//				UnGrown.insert({ i, j });
//			}
//			else if (Input == 1)
//			{
//				Grown.push({ { i, j }, 0 });
//			}
//		}
//	}
//
//	std::vector<int> DirX = { 1, 0, -1, 0 };
//	std::vector<int> DirY = { 0, 1, 0, -1 };
//
//	int Answer = 0;
//
//	while (Grown.size() > 0)
//	{
//		std::pair<int, int> CurTomato = Grown.front().Pos;
//		int Days = Grown.front().Days;
//		Grown.pop();
//
//		Answer = std::max(Answer, Days);
//
//		for (int i = 0; i < 4; i++)
//		{
//			std::pair<int, int> NearTomato = { CurTomato.first + DirY[i], CurTomato.second + DirX[i] };
//
//			if (UnGrown.find(NearTomato) != UnGrown.end())
//			{
//				UnGrown.erase(NearTomato);
//				Grown.push({ NearTomato, Days + 1});
//			}
//		}
//	}
//
//	if (UnGrown.size() > 0)
//	{
//		std::cout << -1;
//	}
//	else
//	{
//		std::cout << Answer;
//	}
//
//	return 0;
//}