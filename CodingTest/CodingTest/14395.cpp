//#include <iostream>
//#include <vector>
//#include <queue>
//#include <unordered_set>
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
//	int StartNumber = 0, TargetNumber = 0;
//	std::cin >> StartNumber >> TargetNumber;
//
//	std::queue<std::pair<long long, std::string>> Queue;
//	Queue.push({ StartNumber, "" });
//
//	std::unordered_set<long long> Check;
//
//	while (Queue.size() > 0)
//	{
//		auto [CurNumber, CurSigns] = Queue.front();
//		Queue.pop();
//
//		if (CurNumber == TargetNumber)
//		{
//			if (CurSigns == "")
//			{
//				std::cout << 0;
//				return 0;
//			}
//
//			std::cout << CurSigns;
//			return 0;
//		}
//
//		long long MulValue = CurNumber * CurNumber;
//		if (Check.find(MulValue) == Check.end())
//		{
//			Check.insert(MulValue);
//			Queue.push({ MulValue, CurSigns + "*" });
//		}
//
//		long long AddValue = CurNumber + CurNumber;
//		if (Check.find(AddValue) == Check.end())
//		{
//			Check.insert(AddValue);
//			Queue.push({ AddValue, CurSigns + "+" });
//		}
//
//		long long SubValue = CurNumber - CurNumber;
//		if (Check.find(SubValue) == Check.end())
//		{
//			Check.insert(SubValue);
//			Queue.push({ SubValue, CurSigns + "-" });
//		}
//		
//		if (CurNumber != 0)
//		{
//			long long DivValue = CurNumber / CurNumber;
//
//			if (Check.find(DivValue) == Check.end())
//			{
//				Check.insert(DivValue);
//				Queue.push({ DivValue, CurSigns + "/" });
//			}
//		}
//	}
//
//	std::cout << -1;
//
//	return 0;
//}