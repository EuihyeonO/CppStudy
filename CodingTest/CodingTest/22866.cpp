//#include <iostream>
//#include <vector>
//#include <stack>
//#include <cmath>
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
//	int NumBuilding = 0;
//	std::cin >> NumBuilding;
//
//	std::vector<int> Heights(NumBuilding + 1, 0);
//
//	for (int i = 1; i <= NumBuilding; i++)
//	{
//		std::cin >> Heights[i];
//	}
//
//	std::stack<std::pair<int, int>> Monotonic;
//
//	std::vector<int> NGE(NumBuilding + 1, 0);
//	std::vector<int> PGE(NumBuilding + 1, 0);
//
//	for (int i = NumBuilding; i >= 1; i--)
//	{
//		while(Monotonic.size() > 0 && Monotonic.top().first <= Heights[i])
//		{
//			Monotonic.pop();
//		}
//
//		if (Monotonic.size() == 0)
//		{
//			NGE[i] = -1;
//		}
//		else
//		{
//			NGE[i] = Monotonic.top().second;
//		}
//
//		Monotonic.push({ Heights[i], i });
//	}
//
//	while (Monotonic.size() > 0)
//	{
//		Monotonic.pop();
//	}
//
//	for (int i = 1; i <= NumBuilding; i++)
//	{
//		while (Monotonic.size() > 0 && Monotonic.top().first <= Heights[i])
//		{
//			Monotonic.pop();
//		}
//
//		if (Monotonic.size() == 0)
//		{
//			PGE[i] = -1;
//		}
//		else
//		{
//			PGE[i] = Monotonic.top().second;
//		}
//
//		Monotonic.push({ Heights[i], i });
//	}
//
//	std::vector<std::pair<int, int>> Answer(NumBuilding + 1);
//
//	for (int i = 1; i <= NumBuilding; i++)
//	{
//		int PrevIndex = PGE[i];
//
//		if (PrevIndex != -1)
//		{
//			Answer[i].first = Answer[PrevIndex].first + 1;
//		}
//	}
//
//	for (int i = NumBuilding; i >= 1; i--)
//	{
//		int NextIndex = NGE[i];
//
//		if (NextIndex != -1)
//		{
//			Answer[i].second = Answer[NextIndex].second + 1;
//		}
//	}
//
//	for (int i = 1; i <= NumBuilding; i++)
//	{
//		Answer[i].first = Answer[i].first + Answer[i].second;
//
//		if (NGE[i] != -1 && PGE[i] != -1)
//		{
//			if (std::abs(i - NGE[i]) >= std::abs(PGE[i] - i))
//			{
//				Answer[i].second = PGE[i];
//			}
//			else
//			{
//				Answer[i].second = NGE[i];
//			}
//		}
//		else if (NGE[i] == -1 && PGE[i] != -1)
//		{
//			Answer[i].second = PGE[i];
//		}
//		else
//		{
//			Answer[i].second = NGE[i];
//		}
//	}
//
//	for (int i = 1; i <= NumBuilding; i++)
//	{
//		if (Answer[i].first == 0)
//		{
//			std::cout << 0 << "\n";
//		}
//		else
//		{
//			std::cout << Answer[i].first << " " << Answer[i].second << "\n";
//		}
//	}
//
//	return 0;
//}