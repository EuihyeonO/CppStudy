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
//struct Link
//{
//	int Start = 0;
//	int End = 0;
//	int Cost = 0;
//};
//
//std::vector<int> Parents;
//
//int NumOfHouse = 0;
//int NumOfRoad = 0;
//
//bool compare(const Link& _Left, const Link& _Right)
//{
//	return _Left.Cost < _Right.Cost;
//}
//
//int GetRootParent(int _Index)
//{
//	if (Parents[_Index] == _Index)
//	{
//		return _Index;
//	}
//	Parents[_Index] = GetRootParent(Parents[_Index]);
//	return Parents[_Index];
//}
//
//void Setparent(int _Left, int _Right)
//{
//	if (_Left < _Right)
//	{
//		Parents[GetRootParent(_Right)] = _Left;
//	}
//	else
//	{
//		Parents[GetRootParent(_Left)] = _Right;
//	}
//}
//
//bool isCycle(int _Left, int _Right)
//{
//	int LeftRootParent = GetRootParent(_Left);
//	int RightRootParent = GetRootParent(_Right);
//
//	return (LeftRootParent == RightRootParent);
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> NumOfHouse >> NumOfRoad;
//
//	Parents.resize(NumOfHouse + 1);
//	for (int i = 1; i <= NumOfHouse; i++)
//	{
//		Parents[i] = i;
//	}
//
//	std::vector<Link> Links(NumOfRoad);
//	for (int i = 0; i < NumOfRoad; i++)
//	{
//		std::cin >> Links[i].Start >> Links[i].End >> Links[i].Cost;
//	}
//
//	std::sort(Links.begin(), Links.end(), compare);
//
//	int SumCost = 0;
//	int LastWeight = 0;
//
//	for (int i = 0; i < NumOfRoad; i++)
//	{
//		if (isCycle(Links[i].Start, Links[i].End) == false)
//		{
//			SumCost += Links[i].Cost;
//			Setparent(Links[i].Start, Links[i].End);
//
//			LastWeight = Links[i].Cost;
//		}
//	}
//
//	SumCost -= LastWeight;
//	std::cout << SumCost;
//
//	return 0;
//}