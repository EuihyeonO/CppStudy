//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
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
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int Size = 0;
//		std::cin >> Size;
//
//		std::vector<std::vector<int>> Sticker(2, std::vector<int>(Size, 0));
//		
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < Size; j++)
//			{
//				std::cin >> Sticker[i][j];
//			}
//		}
//		
//		Sticker[0][1] = Sticker[1][0] + Sticker[0][1];
//		Sticker[1][1] = Sticker[0][0] + Sticker[1][1];
//
//		for (int i = 2; i < Size; i++)
//		{
//			if (i - 2 >= 0)
//			{
//				Sticker[0][i] = std::max(Sticker[1][i - 1], Sticker[1][i - 2]) + Sticker[0][i];
//				Sticker[1][i] = std::max(Sticker[0][i - 1], Sticker[0][i - 2]) + Sticker[1][i];
//			}
//			else
//			{
//				Sticker[0][i] = Sticker[1][i - 1] + Sticker[0][i];
//				Sticker[1][i] = Sticker[0][i - 1] + Sticker[1][i];
//			}
//		}
//
//		Answers[Case] = std::max(Sticker[0][Size - 1], Sticker[1][Size - 1]);
//	}
//
//	for (int Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}