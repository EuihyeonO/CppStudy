//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//class TRIE
//{
//public:
//	TRIE()
//	{
//		isFinished = false;
//		Node.resize(10, nullptr);
//	}
//
//	bool Insert(const std::string& _Str, int _Index)
//	{
//		if (_Index >= _Str.size())
//		{
//			isFinished = true;
//			return true;
//		}
//
//		int CurIndex = _Str[_Index] - '0';
//		if (Node[CurIndex] == nullptr)
//		{
//			Node[CurIndex] = new TRIE();
//		}
//		else
//		{
//			if (Node[CurIndex]->isFinished == true)
//			{
//				return false;
//			}
//		}
//
//		return Node[CurIndex]->Insert(_Str, _Index + 1);
//	}
//
//private:
//	bool isFinished = false;
//	std::vector<TRIE*> Node;
//};
//
//int main()
//{
//	Init();
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//	std::vector<std::string> Answers;
//
//	for (int i = 0; i < NumOfTestCase; i++) 
//	{
//		int NumOfPH = 0;
//		std::cin >> NumOfPH;
//
//		std::vector<std::string> PHs(NumOfPH);
//		for (int i = 0; i < NumOfPH; i++)
//		{
//			std::cin >> PHs[i];
//		}
//
//		std::sort(PHs.begin(), PHs.end());
//
//		TRIE MyTrie;
//		bool isBreak = false;
//		for (int i = 0; i < NumOfPH; i++)
//		{
//			bool isFind = MyTrie.Insert(PHs[i], 0);
//			
//			if (isFind == false)
//			{
//				Answers.push_back("NO");
//				isBreak = true;
//				break;
//			}
//		}
//		
//		if (isBreak == false)
//		{
//			Answers.push_back("YES");
//		}
//	}
//
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//
//	return 0;
//}