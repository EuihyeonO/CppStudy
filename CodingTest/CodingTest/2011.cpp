//#include <iostream>
//#include <vector>
//#include <string>
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
//	std::string Encryption;
//	std::cin >> Encryption;
//
//	if (Encryption[0] == '0')
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	if (Encryption.size() == 1)
//	{
//		std::cout << 1;
//		return 0;
//	}
//
//	std::vector<int> DP(Encryption.size());
//	DP[0] = 1;
//
//	int FrontTwoNum = std::stoi(Encryption.substr(0, 2));
//	if (FrontTwoNum >= 10 && FrontTwoNum <= 26)
//	{
//		DP[1] += 1;
//	}
//	
//	if(Encryption[1] - '0' != 0) 
//	{
//		DP[1] += 1;
//	}
//
//	for (int i = 2; i < Encryption.size(); i++)
//	{
//		int CurNum = Encryption[i] - '0';
//		int PrevNum = Encryption[i - 1] - '0';
//
//		if ((PrevNum == 1 && CurNum <= 9) || (PrevNum == 2 && CurNum <=6))
//		{
//			DP[i] += DP[i - 2];
//		}
//
//		if (CurNum != 0)
//		{
//			DP[i] += DP[i - 1];
//		}
//
//		DP[i] %= 1000000;
//	}
//
//	std::cout << DP[DP.size() - 1];
//
//	return 0;
//}