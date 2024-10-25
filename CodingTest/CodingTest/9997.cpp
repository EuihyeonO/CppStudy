//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<int> Words;
//std::vector<int> isUseAlphabet;
//
//std::set<int> Check;
//
//int Answer = 0;
//
//void DFS(int _Depth, int _CheckInt)
//{
//	if (_Depth == Words.size() - 1)
//	{
//		if (_CheckInt == (1 << 26) - 1)
//		{
//			Answer++;
//		}
//
//		return;
//	}
//
//	DFS(_Depth + 1, _CheckInt | Words[_Depth + 1]);
//	DFS(_Depth + 1, _CheckInt);
//}
//
//int main()
//{
//	Init();
//	
//	int NumWord = 0;
//	std::cin >> NumWord;
//
//	Words.resize(NumWord);
//	isUseAlphabet.resize(26);
//
//	for (int i = 0; i < NumWord; i++)
//	{
//		std::string Str;
//		std::cin >> Str;
//
//		for (int j = 0; j < Str.size(); j++)
//		{
//			Words[i] = Words[i] | (1 << (Str[j] - 'a'));
//		}
//	}
//
//	DFS(-1, 0);
//
//	std::cout << Answer;
//
//	return 0;
//}