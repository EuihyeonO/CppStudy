//#include <vector>
//#include <iostream>
//
//std::vector<int> Parents;
//
//int GetRootParents(const int& _Num)
//{
//	if (Parents[_Num] == _Num)
//	{
//		return _Num;
//	}
//
//	Parents[_Num] = GetRootParents(Parents[_Num]);
//	return Parents[_Num];
//}
//
//void SetParents(const int& _Left, const int& _Right)
//{
//	int LeftParents = GetRootParents(_Left);
//	int RightParents = GetRootParents(_Right);
//
//	if (LeftParents < RightParents)
//	{
//		Parents[RightParents] = LeftParents;
//	}
//	else
//	{
//		Parents[LeftParents] = RightParents;
//	}
//}
//
//int main()
//{
//	int NumOfNode = 0;
//	int NumOfLinkInfo = 0;
//
//	std::cin >> NumOfNode >> NumOfLinkInfo;
//
//	std::vector<std::pair<int, int>> Links(NumOfLinkInfo, { 0, 0 });
//	for (int i = 0; i < NumOfLinkInfo; i++)
//	{
//		std::cin >> Links[i].first >> Links[i].second;
//	}
//
//	Parents.resize(NumOfNode + 1);
//	for (int i = 0; i <= NumOfNode; i++)
//	{
//		Parents[i] = i;
//	}
//
//	for (int i = 0; i < NumOfLinkInfo; i++)
//	{
//		SetParents(Links[i].first, Links[i].second);
//	}
//
//	int a = 0;
////}