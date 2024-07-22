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
//void PreOrder(std::vector<std::pair<int, int>>& _Tree, int _Index)
//{
//	std::cout << (char)(_Index + 'A');
//
//	if (_Tree[_Index].first != -1)
//	{
//		PreOrder(_Tree, _Tree[_Index].first);
//	}
//
//	if (_Tree[_Index].second != -1)
//	{
//		PreOrder(_Tree, _Tree[_Index].second);
//	}
//}
//
//void InOrder(std::vector<std::pair<int, int>>& _Tree, int _Index)
//{
//
//	if (_Tree[_Index].first != -1)
//	{
//		InOrder(_Tree, _Tree[_Index].first);
//	}
//
//	std::cout << (char)(_Index + 'A');
//
//	if (_Tree[_Index].second != -1)
//	{
//		InOrder(_Tree, _Tree[_Index].second);
//	}
//}
//
//void PostOrder(std::vector<std::pair<int, int>>& _Tree, int _Index)
//{
//
//	if (_Tree[_Index].first != -1)
//	{
//		PostOrder(_Tree, _Tree[_Index].first);
//	}
//
//	if (_Tree[_Index].second != -1)
//	{
//		PostOrder(_Tree, _Tree[_Index].second);
//	}
//
//	std::cout << (char)(_Index + 'A');
//}
//
//
//int main()
//{
//	Init();
//
//	int NumNode = 0;
//	std::cin >> NumNode;
//
//	std::vector<std::pair<int, int>> Tree(26, {-1, -1});
//	
//	for (int i = 0; i < NumNode; i++)
//	{
//		char CurNode = 0;
//		char LeftChild = 0;
//		char RightChild = 0;
//
//		std::cin >> CurNode >> LeftChild >> RightChild;
//
//		if (LeftChild != '.')
//		{
//			Tree[CurNode - 'A'].first = LeftChild - 'A';
//		}
//
//		if (RightChild != '.')
//		{
//			Tree[CurNode - 'A'].second = RightChild - 'A';
//		}
//	}
//
//	PreOrder(Tree, 0);
//	std::cout << "\n";
//	InOrder(Tree, 0);
//	std::cout << "\n";
//	PostOrder(Tree, 0);
//
//	return 0;
//}