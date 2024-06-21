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
//struct Info
//{
//	int Number = 0;
//	std::vector<int> Like;
//};
//
//std::vector<int> DirX = { 0, -1, 0, 1 };
//std::vector<int> DirY = { -1, 0, 1, 0 };
//
//void Arrange(std::vector<std::vector<int>>& _Map, const Info& _CurInfo)
//{
//	int Size = _Map.size();
//
//	std::pair<int, int> Seat = { -1, -1 };
//
//	int MaxLike = 0;
//	int MaxEmpty = 0;
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			if (_Map[i][j] != 0)
//			{
//				continue;
//			}
//
//			if (Seat.first == -1 && Seat.second == -1)
//			{
//				Seat = { i, j };
//			}
//
//			int CurEmpty = 0;
//			int CurLike = 0;
//
//			for (int k = 0; k < 4; k++)
//			{
//				int NextY = i + DirY[k];
//				int NextX = j + DirX[k];
//
//				if (NextX < 0 || NextY < 0 || NextX >= Size || NextY >= Size)
//				{
//					continue;
//				}
//
//				if (_Map[NextY][NextX] == 0)
//				{
//					CurEmpty++;
//				}
//				else if(std::find(_CurInfo.Like.begin(), _CurInfo.Like.end(), _Map[NextY][NextX]) != _CurInfo.Like.end())
//				{
//					CurLike++;
//				}
//			}
//
//			if (MaxLike < CurLike)
//			{
//				MaxLike = CurLike;
//				MaxEmpty = CurEmpty;
//
//				Seat = { i, j };
//			}
//			else if (MaxLike == CurLike)
//			{
//				if (MaxEmpty < CurEmpty)
//				{
//					MaxEmpty = CurEmpty;
//
//					Seat = { i, j };
//				}
//			}
//		}
//	}
//
//	_Map[Seat.first][Seat.second] = _CurInfo.Number;
//}
//
//bool Compare(const Info& _Left, const Info& _Right)
//{
//	return _Left.Number < _Right.Number;
//}
//
//int Getsatisfaction(const std::vector<std::vector<int>>& _Map, const std::vector<Info>& _Students)
//{
//	int Satisfaction = 0;
//	int Size = _Map.size();
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			int CurNumber = _Map[i][j];
//			int CurLike = 0;
//
//			for (int k = 0; k < 4; k++)
//			{
//				int NextY = i + DirY[k];
//				int NextX = j + DirX[k];
//
//				if (NextX < 0 || NextY < 0 || NextX >= Size || NextY >= Size)
//				{
//					continue;
//				}
//
//				if (std::find(_Students[CurNumber - 1].Like.begin(), _Students[CurNumber - 1].Like.end(), _Map[NextY][NextX]) != _Students[CurNumber - 1].Like.end())
//				{
//					CurLike++;
//				}
//			}
//
//			if (CurLike >= 1)
//			{
//				Satisfaction += std::pow(10, CurLike - 1);
//			}
//		}
//	}
//
//	return Satisfaction;
//}
//
//int main()
//{
//	Init();
//
//	int Size = 0;
//	std::cin >> Size;
//
//	std::vector<std::vector<int>> Map(Size, std::vector<int>(Size, 0));
//
//	int NumStudent = Size * Size;
//	std::vector<Info> Students(NumStudent);
//
//	for (int i = 0; i < NumStudent; i++)
//	{
//		std::cin >> Students[i].Number;
//		
//		Students[i].Like.resize(4);
//
//		for (int j = 0; j < 4; j++)
//		{
//			std::cin >> Students[i].Like[j];
//		}
//	}
//
//	for (int i = 0; i < NumStudent; i++)
//	{
//		Arrange(Map, Students[i]);
//	}
//
//	std::sort(Students.begin(), Students.end(), Compare);
//
//	int Answer = Getsatisfaction(Map, Students);
//
//	std::cout << Answer;
//
//	return 0;
//}