//#include <iostream>
//#include <vector>
//#include <set>
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
//	int NumOfMans = 0;
//	int NumOfRelationship = 0;
//
//	std::cin >> NumOfMans >> NumOfRelationship;
//
//	std::vector<std::vector<int>> Relationships(NumOfMans + 1);
//	for (int i = 1; i <= NumOfRelationship; i++)
//	{
//		int First = 0;
//		int Second = 0;
//		std::cin >> First >> Second;
//
//		Relationships[First].push_back(Second);
//		Relationships[Second].push_back(First);
//	}
//
//	std::set<int> Invites;
//	std::set<int> MyFriends;
//
//	for (int i = 0; i < Relationships[1].size(); i++)
//	{
//		Invites.insert(Relationships[1][i]);
//		MyFriends.insert(Relationships[1][i]);
//	}
//
//	std::set<int>::iterator CurIter = MyFriends.begin();
//	std::set<int>::iterator EndIter = MyFriends.end();
//
//	while (CurIter != EndIter)
//	{
//		int CurIndex = *CurIter;
//
//		for (int i = 0; i < Relationships[CurIndex].size(); i++)
//		{
//			Invites.insert(Relationships[CurIndex][i]);
//		}
//
//		CurIter++;
//	}
//
//	if (Invites.find(1) != Invites.end())
//	{
//		Invites.erase(1);
//	}
//
//	std::cout << Invites.size();
//
//	return 0;
//}