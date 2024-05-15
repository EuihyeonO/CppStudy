//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <set>
//#include <iterator>
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
//	int NoHear = 0;
//	int NoSee = 0;
//
//	std::cin >> NoHear >> NoSee;
//
//	std::vector<std::string> Vec;
//	std::unordered_set<std::string> Set;
//
//	if (NoHear > NoSee)
//	{
//		Vec.resize(NoSee);
//
//		for (int i = 0; i < NoHear; i++)
//		{
//			std::string Input;
//			std::cin >> Input;
//
//			Set.insert(Input);
//		}
//
//		for (int i = 0; i < NoSee; i++)
//		{
//			std::string Input;
//			std::cin >> Input;
//
//			Vec.push_back(Input);
//		}
//	}
//	else
//	{
//		Vec.resize(NoHear);
//
//		for (int i = 0; i < NoHear; i++)
//		{
//			std::string Input;
//			std::cin >> Input;
//
//			Vec.push_back(Input);
//		}
//
//		for (int i = 0; i < NoSee; i++)
//		{
//			std::string Input;
//			std::cin >> Input;
//
//			Set.insert(Input);
//		}
//	}
//
//	int Count = 0;
//	std::set<std::string> Answers;
//
//	for (int i = 0; i < Vec.size(); i++)
//	{
//		const std::string& CurStr = Vec[i];
//
//		if (Set.find(CurStr) != Set.end())
//		{
//			Answers.insert(CurStr);
//			Count++;
//		}
//	}
//
//	std::cout << Count << "\n";
//
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//
//	return 0;
//}