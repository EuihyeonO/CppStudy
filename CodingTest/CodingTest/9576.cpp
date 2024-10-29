//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool Match(const std::vector<std::vector<int>>& _Link, std::vector<int>& _MatchedMan, std::vector<bool>& _IsVisit, int _CurIndex)
//{
//	_IsVisit[_CurIndex] = true;
//
//	for (int i = 0; i < _Link[_CurIndex].size(); i++)
//	{
//		int LinkNode = _Link[_CurIndex][i];
//
//		if (_MatchedMan[LinkNode] == -1 || (_IsVisit[_MatchedMan[LinkNode]] == false && Match(_Link, _MatchedMan, _IsVisit, _MatchedMan[LinkNode])))
//		{
//			_MatchedMan[LinkNode] = _CurIndex;
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int main()
//{
//	Init();
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int NumBook = 0, NumMan = 0;
//		std::cin >> NumBook >> NumMan;
//
//		std::vector<std::vector<int>> Link(NumMan);
//		
//		for (int i = 0; i < NumMan; i++)
//		{
//			int Start = 0, End = 0;
//			std::cin >> Start >> End;
//
//
//			for (int j = Start; j <= End; j++)
//			{
//				Link[i].push_back(j - 1);
//			}
//		}
//
//		std::vector<int> MatchedMan(NumBook, -1);
//		std::vector<bool> isVisit(NumMan, false);
//
//		int Answer = 0; 
//
//		for (int i = 0; i < NumMan; i++)
//		{
//			std::fill(isVisit.begin(), isVisit.end(), false);
//
//			if (Match(Link, MatchedMan, isVisit, i) == true)
//			{
//				Answer++;
//			}
//		}
//
//		std::cout << Answer << "\n";
//	} 
//
//	return 0;
//}