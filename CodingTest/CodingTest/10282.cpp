//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int NumCom = 0;
//		int NumDep = 0;
//		int HackedCom = 0;
//
//		std::cin >> NumCom >> NumDep >> HackedCom;
//
//		std::vector<std::vector<std::pair<int, int>>> Deps(NumCom + 1);
//
//		for (int i = 1; i <= NumDep; i++)
//		{
//			int Start = 0;
//			int End = 0;
//			int Time = 0;
//
//			std::cin >> End >> Start >> Time;
//
//			Deps[Start].push_back({ End, Time });
//		}
//
//		std::vector<int> HackTimes(NumCom + 1, INT_MAX / 2);
//		std::queue<std::pair<int, int>> Queue;
//		
//		//감염된 컴퓨터, 누적 시간
//		Queue.push({ HackedCom, 0 });
//		HackTimes[HackedCom] = 0;
//
//		while (Queue.size() > 0)
//		{
//			std::pair<int, int> CurPair = Queue.front();
//			Queue.pop();
//
//			for (int i = 0; i < Deps[CurPair.first].size(); i++)
//			{
//				int CurHackedCom = Deps[CurPair.first][i].first;
//				int CumulTimes = CurPair.second + Deps[CurPair.first][i].second;
//
//				if (CumulTimes < HackTimes[CurHackedCom])
//				{
//					HackTimes[CurHackedCom] = CumulTimes;
//					Queue.push({ CurHackedCom, CumulTimes });
//				}
//			}
//		}
//
//		int HackedComCount = 0;
//		int HackedTimeCount = 0;
//
//		for (int i = 1; i <= NumCom; i++)
//		{
//			if (HackTimes[i] != INT_MAX / 2)
//			{
//				HackedComCount++;
//
//				if (HackedTimeCount < HackTimes[i])
//				{
//					HackedTimeCount = HackTimes[i];
//				}
//			}
//		}
//
//		std::cout << HackedComCount << " " << HackedTimeCount << "\n";
//	}
//
//	return 0;
//}