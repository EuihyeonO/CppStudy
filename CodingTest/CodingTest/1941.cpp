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
//std::vector<std::vector<char>> Map;
//int Answer = 0;
//
//void Check(std::vector<std::pair<int, int>>& _Indexes)
//{
//	static std::vector<std::vector<int>> NearCheck(5, std::vector<int>(5));
//	static std::vector<int> DirX = { 0, 1, 0, -1 };
//	static std::vector<int> DirY = { -1, 0, 1, 0 };
//
//	for (int i = 0; i < _Indexes.size(); i++)
//	{
//		auto [Y, X] = _Indexes[i];
//		NearCheck[Y][X] = 1;
//	}
//
//	//Y, X
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push(_Indexes[0]);
//
//	NearCheck[_Indexes[0].first][_Indexes[0].second] = 0;
//
//	int NearCount = 0;
//	int SomCount = 0;
//
//	while (BFS.size() > 0)
//	{
//		auto [CurY, CurX] = BFS.front();
//		BFS.pop();
//
//		NearCount++;
//
//		if (Map[CurY][CurX] == 'S')
//		{
//			SomCount++;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurX + DirX[i];
//			int NextY = CurY + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= 5 || NextY >= 5)
//			{
//				continue;
//			}
//
//			if (NearCheck[NextY][NextX] != 1)
//			{
//				continue;
//			}
//
//			NearCheck[NextY][NextX] = -1;
//			BFS.push({ NextY, NextX });
//		}
//	}
//
//	if (NearCount == 7 && SomCount >= 4)
//	{
//		Answer++;
//	}
//
//	for (int i = 0; i < _Indexes.size(); i++)
//	{
//		auto [Y, X] = _Indexes[i];
//		NearCheck[Y][X] = 0;
//	}
//}
//
//void Combination(const std::vector<std::vector<std::pair<int, int>>>& _Indexes, int _CurIndex, int _CurSize)
//{
//	static std::vector<std::pair<int, int>> Selected(7);
//
//	if (_CurSize == 7)
//	{
//		Check(Selected);
//		return;
//	}
//
//	for (int i = _CurIndex; i < 25; i++)
//	{
//		Selected[_CurSize] = _Indexes[i / 5][i % 5];
//		Combination(_Indexes, i + 1, _CurSize + 1);
//	}
//}
//
//int main()
//{
//	Init();
//
//	Map.resize(5, std::vector<char>(5, 0));
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::vector<std::vector<std::pair<int, int>>> Indexs(5, std::vector<std::pair<int, int>>(5));
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			Indexs[i][j] = { i, j };
//		}
//	}
//
//	Combination(Indexs, 0, 0);
//	std::cout << Answer;
//	return 0;
//}