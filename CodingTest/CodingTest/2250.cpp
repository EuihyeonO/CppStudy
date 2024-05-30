//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
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
//	int Level = 0;
//	int Position = 0;
//	
//	int Parent = -1;
//	int LeftChild = 0;
//	int RightChild = 0;
//};
//
////전방선언
//int GetLeftSize(std::vector<Node>& _Nodes, int _Index);
//int GetRightSize(std::vector<Node>& _Nodes, int _Index);
//
//int GetLeftSize(std::vector<Node>& _Nodes, int _Index)
//{
//	if (_Nodes[_Index].LeftChild == -1)
//	{
//		return 0;
//	}
//
//	if (_Nodes[_Index].Position != 0)
//	{
//		return _Nodes[_Index].Position - 1;
//	}
//
//	int LeftLeftSize = GetLeftSize(_Nodes, _Nodes[_Index].LeftChild);
//	int LeftRightSize = GetRightSize(_Nodes, _Nodes[_Index].LeftChild);
//
//	return LeftLeftSize + LeftRightSize + 1;
//}
//
//int GetRightSize(std::vector<Node>& _Nodes, int _Index)
//{
//	if (_Nodes[_Index].RightChild == -1)
//	{
//		return 0;
//	}
//
//	int LeftLeftSize = GetLeftSize(_Nodes, _Nodes[_Index].RightChild);
//	int LeftRightSize = GetRightSize(_Nodes, _Nodes[_Index].RightChild);
//
//	return LeftLeftSize + LeftRightSize + 1;
//}
//
//int GetPosition(std::vector<Node>& _Nodes, int _Index)
//{
//	int Parent = _Nodes[_Index].Parent;
//
//	if(_Nodes[_Index].Position != 0)
//	{
//		return _Nodes[_Index].Position;
//	}
//
//	//내가 오른쪽 자식일 때.
//	if (Parent != -1 && _Nodes[Parent].RightChild == _Index)
//	{
//		_Nodes[_Index].Position = GetPosition(_Nodes, Parent) + GetLeftSize(_Nodes, _Index) + 1;
//		return _Nodes[_Index].Position;
//	}
//
//	//내가 왼쪽 자식일 때
//	if (Parent != -1 && _Nodes[Parent].LeftChild == _Index)
//	{
//		_Nodes[_Index].Position = GetPosition(_Nodes, Parent) - GetRightSize(_Nodes, _Index) - 1;
//		return _Nodes[_Index].Position;
//	}
//
//	//루트노드면?
//	_Nodes[_Index].Position = GetLeftSize(_Nodes, _Index) + 1;
//	return GetLeftSize(_Nodes, _Index) + 1;
//}
//
//int GetRootNode(std::vector<Node>& _Nodes, int _Index)
//{
//	if (_Nodes[_Index].Parent == -1)
//	{
//		return _Index;
//	}
//
//	return GetRootNode(_Nodes, _Nodes[_Index].Parent);
//}
//
//int main()
//{
//	Init();
//
//	int NumNode = 0;
//	std::cin >> NumNode;
//
//	std::vector<Node> Nodes(NumNode + 1);
//	for (int i = 1; i <= NumNode; i++)
//	{
//		int Index = 0;
//		int LeftChild = 0;
//		int RightChild = 0;
//
//		std::cin >> Index >> LeftChild >> RightChild;
//
//
//		Nodes[Index].LeftChild = LeftChild;
//		if (LeftChild != -1)
//		{
//			Nodes[LeftChild].Parent = Index;
//		}
//
//		Nodes[Index].RightChild = RightChild;
//		if (RightChild != -1)
//		{
//			Nodes[RightChild].Parent = Index;
//		}
//	}
//
//	for (int i = 1; i <= NumNode; i++)
//	{
//		Nodes[i].Position = GetPosition(Nodes, i);
//	}
//
//	std::vector<std::pair<int, int>> MinMaxWidth(NumNode + 1, { INT_MAX, INT_MIN });
//	
//	int RootNodeIndex = GetRootNode(Nodes, 1);
//	Nodes[RootNodeIndex].Level = 1;
//
//	std::queue<int> BFS;
//	BFS.push(RootNodeIndex);
//
//	while (BFS.size() > 0)
//	{
//		int CurIndex = BFS.front();
//		BFS.pop();
//
//		int Parent = Nodes[CurIndex].Parent;
//		if (Parent != -1)
//		{
//			Nodes[CurIndex].Level = Nodes[Parent].Level + 1;
//		}
//
//		int CurLevel = Nodes[CurIndex].Level;
//
//		MinMaxWidth[CurLevel].first = std::min(Nodes[CurIndex].Position, MinMaxWidth[CurLevel].first);
//		MinMaxWidth[CurLevel].second = std::max(Nodes[CurIndex].Position, MinMaxWidth[CurLevel].second);
//
//		if (Nodes[CurIndex].LeftChild != -1)
//		{
//			BFS.push(Nodes[CurIndex].LeftChild);
//		}
//
//		if (Nodes[CurIndex].RightChild != -1)
//		{
//			BFS.push(Nodes[CurIndex].RightChild);
//		}
//	}
//
//	//레벨, 길이
//	std::pair<int, int> Answer;
//
//	for (int i = 1; i <= NumNode; i++)
//	{
//		int Width = MinMaxWidth[i].second - MinMaxWidth[i].first + 1;
//
//		if (Width > Answer.second)
//		{
//			Answer.first = i;
//			Answer.second = Width;
//		}
//	}
//
//	std::cout << Answer.first << " " << Answer.second;
//
//	return 0;
//}