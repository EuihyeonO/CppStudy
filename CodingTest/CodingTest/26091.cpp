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
//int main()
//{
//	Init();
//
//	int NumStudent = 0;
//	int MinAbility = 0;
//
//	std::cin >> NumStudent >> MinAbility;
//
//	std::vector<int> Abilities(NumStudent, 0);
//	for (int i = 0; i < NumStudent; i++)
//	{
//		std::cin >> Abilities[i];
//	}
//
//	std::sort(Abilities.begin(), Abilities.end());
//
//	int Left = 0;
//	int Right = NumStudent - 1;
//
//	int AnswerCount = 0;
//	while (Left < Right)
//	{
//		int Sum = Abilities[Left] + Abilities[Right];
//
//		if (Sum >= MinAbility)
//		{
//			AnswerCount++;
//
//			Left++;
//			Right--;
//		}
//		else
//		{
//			Left++;
//		}
//	}
//
//	return 0;
//}