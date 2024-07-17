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
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	std::queue<Data> Grown;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 1)
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
//		Data CurData = Grown.front();
//		Grown.pop();
//
//		Answer = std::max(Answer, CurData.Days);
//
//		for (int i = 0; i < 4; i++)
//		{
//			std::pair<int, int> NearTomato = { CurData.Pos.first + DirY[i], CurData.Pos.second + DirX[i]};
//
//			if (NearTomato.first < 0 || NearTomato.second < 0 || NearTomato.first >= Height || NearTomato.second >= Width)
//			{
//				continue;
//			}
//
//			if (Map[NearTomato.first][NearTomato.second] == 0)
//			{
//				Map[NearTomato.first][NearTomato.second] = 1;
//				Grown.push({ NearTomato, CurData.Days + 1});
//			}
//		}
//	}
//
//	for (int i = 0; i < Height; i++)
//	{
//		for(int j = 0; j < Width; j++)
//		{
//			if (Map[i][j] == 0)
//			{
//				std::cout << -1;
//				return 0;
//			}
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}