//#include <iostream>
//#include <vector>
//#include <string>
//#include <climits>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int GetResult(int _FirstNum, int _SecondNum, const std::string& _Sign)
//{
//	if (_Sign == "+")
//	{
//		return _FirstNum + _SecondNum;
//	}
//	else if (_Sign == "-")
//	{
//		return _FirstNum - _SecondNum;
//	}
//	else if (_Sign == "*")
//	{
//		return _FirstNum * _SecondNum;
//	}
//	else
//	{
//		return INT_MAX;
//	}
//}
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	std::cin >> Width;
//
//	std::vector<std::vector<std::string>> Map(Width, std::vector<std::string>(Width, ""));
//	std::vector<std::vector<int>> MaxDp(Width, std::vector<int>(Width, INT_MIN));
//	std::vector<std::vector<int>> MinDp(Width, std::vector<int>(Width, INT_MAX));
//
//	int Count = 0;
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Count % 2 == 0)
//			{
//				int Input = 0;
//				std::cin >> Input;
//				Map[i][j] = std::to_string(Input);
//			}
//			else
//			{
//				std::cin >> Map[i][j];
//			}
//
//			Count++;
//		}
//	}
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push({ 0, 0 });
//	MinDp[0][0] = std::stoi(Map[0][0]);
//	MaxDp[0][0] = std::stoi(Map[0][0]);
//
//	std::vector<int> WY = { 2, 1, 1, 0 };
//	std::vector<int> WX = { 0, 1, 1, 2 };
//
//	std::vector<int> SWY = { 1, 1, 0, 0 };
//	std::vector<int> SWX = { 0, 0, 1, 1 };
//
//	while (BFS.size() > 0)
//	{
//		int CurY = BFS.front().first;
//		int CurX = BFS.front().second;
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurX + WX[i];
//			int NextY = CurY + WY[i];
//			
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Width)
//			{
//				continue;
//			}
//
//			int SignX = CurX + SWX[i];
//			int SignY = CurY + SWY[i];
//
//			int NextMaxValue = GetResult(MaxDp[CurY][CurX], std::stoi(Map[NextY][NextX]), Map[SignY][SignX]);
//			int NextMinValue = GetResult(MinDp[CurY][CurX], std::stoi(Map[NextY][NextX]), Map[SignY][SignX]);
//
//			if (MaxDp[NextY][NextX] < NextMaxValue)
//			{
//				BFS.push({ NextY, NextX });
//				MaxDp[NextY][NextX] = NextMaxValue;
//			}
//			
//			if (MinDp[NextY][NextX] > NextMinValue)
//			{
//				BFS.push({ NextY, NextX });
//				MinDp[NextY][NextX] = NextMinValue;
//			}
//		}
//	}
//
//	std::cout << MaxDp[Width - 1][Width - 1] << " " << MinDp[Width - 1][Width - 1];
//
//	return 0;
//}