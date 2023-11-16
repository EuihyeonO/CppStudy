//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	int NumOfCase = 0;
//	std::cin >> NumOfCase;
//
//	std::vector<int> Cases;
//	Cases.resize(NumOfCase);
//	for (int i = 0; i < NumOfCase; i++)
//	{
//		std::cin >> Cases[i];
//	}
//
//	std::vector<int> Answer;
//
//	for(int i = 0; i < NumOfCase; i++)
//	{
//		int Num = Cases[i];
//
//		std::vector<int> DP;
//		DP.resize(Num + 1, 0);
//
//		DP[1] = 1;
//		DP[2] = 2;
//		DP[3] = 4;
//
//		int Index = 4;
//
//		while (Index <= Num)
//		{
//			int StartIndex = 1;
//			int EndIndex = 4;
//
//			while (StartIndex != EndIndex)
//			{
//				DP[Index] += DP[Index - StartIndex];
//				StartIndex++;
//			}
//
//			Index++;
//		}
//
//		Answer.push_back(DP[Num]);
//	}
//
//	for(int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}