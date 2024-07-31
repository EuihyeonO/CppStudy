//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool isRotate[4] = { false, };
//
//void Rotate(std::vector<std::string>& _Gears, int _CurGear, int _Dir)
//{
//	isRotate[_CurGear] = true;
//
//	int LeftGear = _CurGear - 1;
//	int RightGear = _CurGear + 1;
//
//	if (LeftGear >= 0 && isRotate[LeftGear] == false && _Gears[LeftGear][2] != _Gears[_CurGear][6])
//	{
//		Rotate(_Gears, LeftGear, _Dir * (-1));
//	}
//
//	if (RightGear <= 3 && isRotate[RightGear] == false && _Gears[RightGear][6] != _Gears[_CurGear][2])
//	{
//		Rotate(_Gears, RightGear, _Dir * (-1));
//	}
//
//	if (_Dir == 1)
//	{
//		char LastChar = _Gears[_CurGear].back();
//
//		_Gears[_CurGear].insert(_Gears[_CurGear].begin(), LastChar);
//		_Gears[_CurGear].pop_back();
//	}
//	else if (_Dir == -1)
//	{
//		char FirstChar = _Gears[_CurGear].front();
//
//		_Gears[_CurGear].push_back(FirstChar);
//		_Gears[_CurGear].erase(_Gears[_CurGear].begin());
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::vector<std::string> Gears(4);
//	for (int i = 0; i < 4; i++)
//	{
//		std::cin >> Gears[i];
//	}
//
//	int NumCommand = 0;
//	std::cin >> NumCommand;
//
//	std::vector<std::pair<int, int>> Commands(NumCommand);
//
//	for (int i = 0; i < NumCommand; i++)
//	{
//		std::cin >> Commands[i].first >> Commands[i].second;
//	}
//
//	for (int i = 0; i < NumCommand; i++)
//	{
//		Rotate(Gears, Commands[i].first - 1, Commands[i].second);
//
//		for (int j = 0; j < 4; j++)
//		{
//			isRotate[j] = false;
//		}
//	}
//
//	int Answer = 0;
//	
//	Answer += 1 * (Gears[0][0] - '0');
//	Answer += 2 * (Gears[1][0] - '0');
//	Answer += 4 * (Gears[2][0] - '0');
//	Answer += 8 * (Gears[3][0] - '0');
//
//	std::cout << Answer;
//
//	return 0;
//}