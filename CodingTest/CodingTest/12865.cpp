//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}

//int main()
//{
//	Init();

	//int NumObject = 0;
	//int MaxWeight = 0;
	//std::cin >> NumObject >> MaxWeight;
	//
	////무게, 가치
	//std::vector<std::pair<int, int>> Objects(NumObject + 1);
	//for (int i = 1; i <= NumObject; i++)
	//{
	//	std::cin >> Objects[i].first;
	//	std::cin >> Objects[i].second;
	//}
	//
	//std::vector<std::vector<int>> DP(NumObject + 1, std::vector<int>(MaxWeight + 1, 0));
	//
	//for (int i = 1; i <= NumObject; i++)
	//{
	//	for (int j = 1; j <= MaxWeight; j++)
	//	{
	//		if (Objects[i].first > j)
	//		{
	//			DP[i][j] = DP[i - 1][j];
	//		}
	//		else
	//		{
	//			DP[i][j] = std::max(DP[i - 1][j], DP[i - 1][j - Objects[i].first] + Objects[i].second);
	//		}
	//	}
	//}
	//
	//std::cout << DP[NumObject][MaxWeight];

	//return 0;
//}

/*-------------------------2번째풀이 ------------------------------*/
//int main()
//{
//	Init();
//
//	int NumObject = 0;
//	int MaxWeight = 0;
//
//	std::cin >> NumObject >> MaxWeight;
//
//	std::vector<int> DP(MaxWeight + 1);
//
//	for (int i = 0; i < NumObject; i++)
//	{
//		int CurWeight = 0;
//		int CurValue = 0;
//		std::cin >> CurWeight >> CurValue;
//
//		for (int j = MaxWeight; j >= CurWeight; j--)
//		{
//			DP[j] = std::max(DP[j], DP[j - CurWeight] + CurValue);
//		}
//	}
//
//	std::cout << DP[MaxWeight];
//
//	return 0;
//}