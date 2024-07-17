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
//int main()
//{
//	Init();
//
//	int Size = 0;
//	int L = 0;
//
//	std::cin >> Size >> L;
//
//	std::vector<std::vector<int>> Map(Size, std::vector<int>(Size, 0));
//	std::vector<std::vector<bool>> isCline(Size, std::vector<bool>(Size, false));
//	
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	int Count = 0;
//
//	for (int i = 0; i < Size; i++)
//	{
//		bool isRoad = true;
//
//		for (int j = 1; j < Size; j++)
//		{
//			if (Map[i][j - 1] - Map[i][j] == 1)
//			{
//				if ((j - 1 + L) >= Size)
//				{
//					isRoad = false;
//				}
//				else
//				{
//					for (int k = j; k <= j - 1 + L; k++)
//					{
//						if (isCline[i][k] != false || Map[i][k] != Map[i][j])
//						{
//							isRoad = false;
//							break;
//						}
//					}
//				}
//
//				if (isRoad == true)
//				{
//					for (int k = j; k <= j - 1 + L; k++)
//					{
//						isCline[i][k] = true;
//					}
//				}
//
//				j = j - 1 + L;
//			}
//			else if (Map[i][j - 1] - Map[i][j] == -1)
//			{
//				if ((j - L) < 0)
//				{
//					isRoad = false;
//				}
//				else
//				{
//					for (int k = j - 1; k > j - 1 - L; k--)
//					{
//						if (isCline[i][k] != false || Map[i][k] != Map[i][j - 1])
//						{
//							isRoad = false;
//							break;
//						}
//					}
//				}
//
//				if (isRoad == true)
//				{
//					for (int k = j - 1; k > j - 1 - L; k--)
//					{
//						isCline[i][k] = true;
//					}
//				}
//			}
//			else if(Map[i][j - 1] - Map[i][j] != 0)
//			{
//				isRoad = false;
//			}
//
//			if (isRoad == false)
//			{
//				break;
//			}
//		}
//
//		if (isRoad == true)
//		{
//			Count++;
//		}
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		std::fill(isCline[i].begin(), isCline[i].end(), false);
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		bool isRoad = true;
//
//		for (int j = 1; j < Size; j++)
//		{
//			if (Map[j - 1][i] - Map[j][i] == 1)
//			{
//				if ((j - 1 + L) >= Size)
//				{
//					isRoad = false;
//				}
//				else
//				{
//					for (int k = j; k <= j - 1 + L; k++)
//					{
//						if (isCline[k][i] != false || Map[k][i] != Map[j][i])
//						{
//							isRoad = false;
//							break;
//						}
//					}
//				}
//
//				if (isRoad == true)
//				{
//					for (int k = j; k <= j - 1 + L; k++)
//					{
//						isCline[k][i] = true;
//					}
//				}
//
//				j = j - 1 + L;
//			}
//			else if (Map[j - 1][i] - Map[j][i] == -1)
//			{
//				if ((j - L) < 0)
//				{
//					isRoad = false;
//				}
//				else
//				{
//					for (int k = j - 1; k > j - 1 - L; k--)
//					{
//						if (isCline[k][i] != false || Map[k][i] != Map[j - 1][i])
//						{
//							isRoad = false;
//							break;
//						}
//					}
//				}
//
//				if (isRoad == true)
//				{
//					for (int k = j - 1; k > j - 1 - L; k--)
//					{
//						isCline[k][i] = true;
//					}
//				}
//			}
//			else if (Map[j - 1][i] - Map[j][i] != 0)
//			{
//				isRoad = false;
//			}
//
//			if (isRoad == false)
//			{
//				break;
//			}
//		}
//
//		if (isRoad == true)
//		{
//			Count++;
//		}
//	}
//
//	std::cout << Count;
//	return 0;
//}