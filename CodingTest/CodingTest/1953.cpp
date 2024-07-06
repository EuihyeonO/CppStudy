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
//std::vector<std::vector<int>> Hates;
//
//std::vector<bool> isDevided;
//
////-1이면 청, 1이면 백
//std::vector<int> DevidedTeam;
//
//std::vector<int> BlueTeam;
//std::vector<int> WhiteTeam;
//
//void Recursive(int _CurIndex)
//{
//	if (isDevided[_CurIndex] == true)
//	{
//		return;
//	}
//
//	isDevided[_CurIndex] = true;
//
//	if (DevidedTeam[_CurIndex] == 0)
//	{
//		DevidedTeam[_CurIndex] = -1;
//	}
//
//	for (int i = 0; i < Hates[_CurIndex].size(); i++)
//	{
//		int CurHateIndex = Hates[_CurIndex][i];
//
//		if (DevidedTeam[CurHateIndex] != 0)
//		{
//			continue;
//		}
//
//		DevidedTeam[CurHateIndex] = -DevidedTeam[_CurIndex];
//
//		Recursive(CurHateIndex);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumMan = 0;
//	std::cin >> NumMan;
//
//	Hates.resize(NumMan);
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		int NumHate = 0;
//		std::cin >> NumHate;
//
//		Hates[i].reserve(NumHate);
//
//		for (int j = 0; j < NumHate; j++)
//		{
//			int HateMan = 0;
//			std::cin >> HateMan;
//
//			Hates[i].push_back(HateMan - 1);
//		}
//	}
//
//	isDevided.resize(NumMan, false);
//	DevidedTeam.resize(NumMan, 0);
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		Recursive(i);
//	}
//
//	BlueTeam.reserve(NumMan);
//	WhiteTeam.reserve(NumMan);
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		if (DevidedTeam[i] == -1)
//		{
//			BlueTeam.push_back(i + 1);
//		}
//		else if (DevidedTeam[i] == 1)
//		{
//			WhiteTeam.push_back(i + 1);
//		}
//	}
//
//	std::cout << BlueTeam.size() << "\n";
//
//	for (int i = 0; i < BlueTeam.size(); i++)
//	{
//		std::cout << BlueTeam[i] << " ";
//	}
//
//	std::cout << "\n";
//	std::cout << WhiteTeam.size() << "\n";
//
//	for (int i = 0; i < WhiteTeam.size(); i++)
//	{
//		std::cout << WhiteTeam[i] << " ";
//	}
//
//	return 0;
//}