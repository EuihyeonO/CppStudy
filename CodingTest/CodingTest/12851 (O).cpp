//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int N = 0;
//	int K = 0;
//
//	std::cin >> N >> K;
//
//	//위치, 시간
//	std::queue<std::pair<int, int>> Queue;
//	Queue.push({N, 0});
//	
//	std::vector<int> Times(100001, INT_MAX);
//
//	Times[N] = 0;
//	int MinTime = INT_MAX;
//	int Case = 0;
//
//	while (Queue.size() > 0)
//	{
//		int CurPos = Queue.front().first;
//		int CurTime = Queue.front().second;
//		
//		Queue.pop();
//
//		if (CurPos == K)
//		{
//			if (MinTime == CurTime)
//			{
//				Case++;
//			}
//			else if (CurTime < MinTime)
//			{
//				Case = 1;
//			}
//
//			MinTime = std::min(MinTime, CurTime);
//
//			continue;
//		}
//
//		if (CurPos - 1 >= 0 && Times[CurPos - 1] >= CurTime + 1)
//		{
//			Times[CurPos - 1] = CurTime + 1;
//			Queue.push({ CurPos - 1, CurTime + 1 });
//		}
//
//		if (CurPos + 1 <= 100000 && Times[CurPos + 1] >= CurTime + 1)
//		{
//			Times[CurPos + 1] = CurTime + 1;
//			Queue.push({ CurPos + 1, CurTime + 1 });
//		}
//
//		if (CurPos * 2 <= 100000 && Times[CurPos * 2] >= CurTime + 1)
//		{
//			Times[CurPos * 2] = CurTime + 1;
//			Queue.push({ CurPos * 2, CurTime + 1 });
//		}
//	}
//
//	std::cout << MinTime << "\n" << Case;
//
//	return 0;
//}
