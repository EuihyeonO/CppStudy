//#include <iostream>
//#include <map>
//#include <string>
//#include <queue>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void BFS(const std::map<std::string, std::vector<std::string>>& _Childs, const std::map<std::string, std::pair<std::string, std::string>>& _Parent, std::map<std::string, long long>& _Dist, const std::string& _Creater)
//{
//	std::queue<std::pair<std::string, long long>> Queue;
//	_Dist[_Creater] = 2251799813685248;
//	Queue.push({_Creater, _Dist[_Creater] });
//
//	while (Queue.size() > 0)
//	{
//		std::pair<std::string, long long> Pair = Queue.front();
//		Queue.pop();
//		
//		_Dist[Pair.first] = Pair.second;
//
//		std::map<std::string, std::vector<std::string>>::const_iterator FindIter = _Childs.find(Pair.first);
//
//		if (FindIter == _Childs.end())
//		{
//			continue;
//		}
//
//		const std::vector<std::string>& Childs = FindIter->second;
//
//		for (int i = 0; i < Childs.size(); i++)
//		{
//			const std::string& CurChild = Childs[i];
//			const std::pair<std::string, std::string>& ChildParent = _Parent.find(CurChild)->second;
//
//			long long ChildDist = (_Dist[ChildParent.first] + _Dist[ChildParent.second]) / 2;
//			Queue.push({ CurChild, ChildDist });
//		}
//	}
//}
//
//int main()
//{
//	Init();
//	
//	int NumInfo = 0, NumCandidate = 0;
//	std::cin >> NumInfo >> NumCandidate;
//
//	std::string Creater = "";
//	std::cin >> Creater;
//	
//	std::map<std::string, std::vector<std::string>> Childs;
//	std::map<std::string, std::pair<std::string, std::string>> Parents;
//	for (int i = 0; i < NumInfo; i++)
//	{
//		std::string MyName;
//		std::string LeftParent;
//		std::string RightParent;
//
//		std::cin >> MyName >> LeftParent >> RightParent;
//
//		Childs[LeftParent].push_back(MyName);
//		Childs[RightParent].push_back(MyName);
//
//		Parents[MyName] = { LeftParent, RightParent };
//	}
//
//	std::vector<std::string> Candidates(NumCandidate);
//	for (int i = 0; i < NumCandidate; i++)
//	{
//		std::cin >> Candidates[i];
//	}
//
//	std::map<std::string, long long> Dist;
//	BFS(Childs, Parents, Dist, Creater);
//
//	long long Max = -1;
//	std::string Answer = "";
//
//	for (int i = 0; i < NumCandidate; i++)
//	{
//		long long CurDist = Dist[Candidates[i]];
//		if (Max < CurDist)
//		{
//			Max = CurDist;
//			Answer = Candidates[i];
//		}
//	}
//
//	std::cout << Answer;
//	return 0;
//}