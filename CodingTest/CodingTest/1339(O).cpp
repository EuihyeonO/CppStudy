//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <string>
//#include <queue>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Compare
//{
//	bool operator()(const std::string& _Left, const std::string& _Right)
//	{
//		return _Left.size() < _Right.size();
//	}
//};
//
//int main()
//{
//	Init();
//	
//	int NumWord = 0;
//	std::cin >> NumWord;
//	
//	std::vector<std::string> Words(NumWord);
//	std::priority_queue<std::string, std::vector<std::string>, Compare> PQ;
//
//	for (int i = 0; i < NumWord; i++)
//	{
//		std::cin >> Words[i];
//		PQ.push(Words[i]);
//	}
//
//	std::unordered_map<char, int> AlphabetNum;
//	std::set<int> AbleNumbers;
//
//	for (int i = 0; i <= 9; i++)
//	{
//		AbleNumbers.insert(i);
//	}
//
//	while (PQ.size() > 0)
//	{
//		std::string CurString = PQ.top();
//		PQ.pop();
//
//		if (AlphabetNum[CurString[0]] == 0 && AbleNumbers.size() > 0)
//		{
//			AlphabetNum[CurString[0]] = *(--AbleNumbers.end());
//			AbleNumbers.erase(--AbleNumbers.end());
//		}
//
//		if (CurString.size() > 1)
//		{
//			PQ.push(CurString.substr(1, CurString.size() - 1));
//		}
//	}
//
//	int Answer = 0;
//
//	for (int i = 0; i < NumWord; i++)
//	{
//		for (int j = 0; j < Words[i].size(); j++)
//		{
//			Words[i][j] = '0' + AlphabetNum[Words[i][j]];
//		}
//
//		Answer += std::stoi(Words[i]);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}