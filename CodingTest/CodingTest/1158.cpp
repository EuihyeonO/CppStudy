//#include <iostream>
//#include <vector>
//#include <list>
//#include <queue>
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
//	int N = 0;
//	int K = 0;
//
//	std::cin >> N >> K;
//
//	std::list<int> Person(N);
//	std::list<int>::iterator Iter = Person.begin();
//	
//	int PersonIndex = 1;
//	while (Iter != Person.end())
//	{
//		*Iter = PersonIndex;
//		
//		Iter++;
//		PersonIndex++;
//	}
//
//	std::queue<int> Delete;
//	
//	int Count = 1;
//	Iter = Person.begin();
//
//	while (Delete.size() < N)
//	{
//		if (Iter == Person.end())
//		{
//			Iter = Person.begin();
//		}
//
//		if (Count == K)
//		{
//			Count = 0;
//			Delete.push(*Iter);
//			Iter = Person.erase(Iter);
//			Count++;
//
//			continue;
//		}
//
//		Iter++;
//		Count++;
//	}
//
//	std::cout << "<";
//	while (Delete.size() > 0)
//	{
//		int CurIndex = Delete.front();
//		Delete.pop();
//
//		std::cout << CurIndex;
//
//		if (Delete.size() > 0)
//		{
//			std::cout << ", ";
//		}
//	}
//
//	std::cout << ">";
//
//	return 0;
//}