//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
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
//	int NumSubject = 0;
//	int NumLink = 0;
//	std::cin >> NumSubject >> NumLink;
//	
//	std::vector<std::vector<int>> Links(NumSubject);
//	std::vector<int> InDegree(NumSubject, 0);
//
//	for (int i = 0; i < NumLink; i++)
//	{
//		int First = 0;
//		int Second = 0;
//		std::cin >> First >> Second;
//
//		Links[First - 1].push_back(Second - 1);
//		InDegree[Second - 1]++;
//	}
//
//	std::queue<std::pair<int, int>> Sort;
//	std::vector<int> Semesters(NumSubject);
//
//	for (int i = 0; i < NumSubject; i++)
//	{
//		if (InDegree[i] == 0)
//		{
//			Sort.push({i, 1});
//			Semesters[i] = 1;
//		}
//	}
//
//	while (Sort.size() > 0)
//	{
//		int Index = Sort.front().first;
//		int CurSemester = Sort.front().second;
//		Sort.pop();
//
//		for (int i = 0; i < Links[Index].size(); i++)
//		{
//			int CurIndex = Links[Index][i];
//			InDegree[CurIndex]--;
//
//			if (InDegree[CurIndex] == 0)
//			{
//				Sort.push({ CurIndex, CurSemester + 1});
//				Semesters[CurIndex] = CurSemester + 1;
//			}
//		}
//	}
//	
//	for (int i = 0; i < NumSubject; i++)
//	{
//		std::cout << Semesters[i] << " ";
//	}
//
//	return 0;
//}