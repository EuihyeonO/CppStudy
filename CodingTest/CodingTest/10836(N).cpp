//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void FirstGrow(std::vector<std::vector<int>>& _Map, std::vector<std::vector<int>>& _GrowToday, const std::vector<std::vector<int>>& _GrowthInfo, int _CurDay)
//{
//	int CurX = 0;
//	int CurY = _Map.size() - 1;
//
//	int GrowIndex = 0;
//	
//	while(CurY > 0)
//	{
//		_Map[CurY][CurX] += _GrowthInfo[_CurDay][GrowIndex];
//		_GrowToday[CurY][CurX] = _GrowthInfo[_CurDay][GrowIndex];
//
//		GrowIndex++;
//
//		CurY--;
//	}
//	
//	while (CurX < _Map.size())
//	{
//		_Map[CurY][CurX] += _GrowthInfo[_CurDay][GrowIndex];
//		_GrowToday[CurY][CurX] = _GrowthInfo[_CurDay][GrowIndex];
//
//		GrowIndex++;
//
//		CurX++;
//	}
//}
//
//void SecondGrow(std::vector<std::vector<int>>& _Map, std::vector<std::vector<int>>& _GrowToday)
//{
//	for (int i = 1; i < _Map.size(); i++)
//	{
//		for (int j = 1; j < _Map.size(); j++)
//		{
//			int MaxGrow = std::max(_GrowToday[i][j - 1], _GrowToday[i - 1][j]);
//			MaxGrow = std::max(MaxGrow, _GrowToday[i - 1][j - 1]);
//
//			_GrowToday[i][j] = MaxGrow;
//			_Map[i][j] += MaxGrow;
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	int MapSize = 0;
//	int Days = 0;
//	std::cin >> MapSize >> Days;
//
//	std::vector<std::vector<int>> Map(MapSize, std::vector<int>(MapSize, 1));
//	std::vector<std::vector<int>> GrowToday(MapSize, std::vector<int>(MapSize, 0));
//	std::vector<std::vector<int>> GrowthInfo(Days, std::vector<int>(2 * MapSize - 1));
//
//	for (int i = 0; i < Days; i++)
//	{
//		int ZeroCount = 0;
//		int OneCount = 0;
//		int TwoCount = 0;
//
//		std::cin >> ZeroCount >> OneCount >> TwoCount;
//
//		for (int j = 0; j < ZeroCount; j++)
//		{
//			GrowthInfo[i][j] = 0;
//		}
//
//		for (int j = ZeroCount; j < ZeroCount + OneCount; j++)
//		{
//			GrowthInfo[i][j] = 1;
//		}
//
//		for (int j = ZeroCount + OneCount; j < ZeroCount + OneCount + TwoCount; j++)
//		{
//			GrowthInfo[i][j] = 2;
//		}
//	}
//
//	for (int i = 0; i < Days; i++)
//	{
//		FirstGrow(Map, GrowToday, GrowthInfo, i);
//		SecondGrow(Map, GrowToday);
//	}
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		for (int j = 0; j < MapSize; j++)
//		{
//			std::cout << Map[i][j] << " ";
//		}
//
//		std::cout << "\n";
//	}
//
//	return 0;
//}