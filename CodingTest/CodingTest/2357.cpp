//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Node
//{
//	int Left = 0;
//	int Right = 0;
//	int Min = 0;
//	int Max = 0;
//};
//
//void InitTree(std::vector<Node>& _Tree, std::vector<int>& _Sequence, int _Start, int _End, int _CurIndex)
//{
//	if (_Start == _End)
//	{
//		_Tree[_CurIndex] = { _Start, _End,  _Sequence[_Start], _Sequence[_End]};
//		return;
//	}
//
//	_Tree[_CurIndex] = { _Start, _End };
//
//	int Mid = (_Start + _End) / 2;
//
//	InitTree(_Tree, _Sequence, _Start, Mid, (_CurIndex * 2));
//	InitTree(_Tree, _Sequence, Mid + 1, _End, (_CurIndex * 2) + 1);
//
//	_Tree[_CurIndex].Min = std::min(_Tree[_CurIndex * 2].Min, _Tree[_CurIndex * 2 + 1].Min);
//	_Tree[_CurIndex].Max = std::max(_Tree[_CurIndex * 2].Max, _Tree[_CurIndex * 2 + 1].Max);
//}
//
//std::pair<int, int> Function(std::vector<Node>& _Tree, std::vector<int>& _Sequence, int _Left, int _Right, int _CurIndex)
//{
//	if (_Left == _Right)
//	{
//		return { _Sequence[_Left], _Sequence[_Right]};
//	}
//
//	if (_Left == _Tree[_CurIndex].Left && _Right == _Tree[_CurIndex].Right)
//	{
//		return { _Tree[_CurIndex].Min,_Tree[_CurIndex].Max };
//	}
//	
//	int Mid = (_Tree[_CurIndex].Left + _Tree[_CurIndex].Right) / 2;
//
//	if (_Left <= Mid && _Right > Mid)
//	{
//		std::pair<int, int> Left = Function(_Tree, _Sequence, _Left, Mid, _CurIndex * 2);
//		std::pair<int, int> Right = Function(_Tree, _Sequence, Mid + 1, _Right, _CurIndex * 2 + 1);
//
//		return { std::min(Left.first, Right.first), std::max(Left.second, Right.second) };
//	}
//	else if(_Right <= Mid)
//	{
//		return Function(_Tree, _Sequence, _Left, _Right, _CurIndex * 2);
//	}
//	else if (_Left > Mid)
//	{
//		return Function(_Tree, _Sequence, _Left, _Right, _CurIndex * 2 + 1);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumSize = 0;
//	int CaseSize = 0;
//
//	std::cin >> NumSize >> CaseSize;
//
//	std::vector<int> Sequence(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	int TreeSize = NumSize * 4;
//	
//	std::vector<Node> Tree(TreeSize);
//	InitTree(Tree, Sequence, 0, NumSize - 1, 1);
//
//	std::vector<std::pair<int, int>> Answers;
//
//	for (int i = 0; i < CaseSize; i++)
//	{
//		int LeftIndex = 0;
//		int RightIndex = 0;
//
//		std::cin >> LeftIndex >> RightIndex;
//
//		std::pair<int, int> Answer = Function(Tree, Sequence, LeftIndex - 1, RightIndex - 1, 1);
//		Answers.push_back(Answer);
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i].first << " " << Answers[i].second;
//		std::cout << "\n";
//	}
//
//	return 0;
//}