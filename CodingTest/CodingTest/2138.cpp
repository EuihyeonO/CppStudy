//#include <iostream>
//#include <vector>
//#include <string>
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
//	int Size = 0;
//	std::cin >> Size;
//
//	std::string Cur1;
//	Cur1.resize(Size);
//	
//	std::string Cur2;
//	Cur2.resize(Size);
//
//	std::string Target;
//	Target.resize(Size);
//
//	for (int i = 0; i < Size; i++ )
//	{
//		std::cin >> Cur1[i];
//		Cur2[i] = Cur1[i];
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		std::cin >> Target[i];
//	}
//
//	int CurIndex = 0;
//
//	int Cur1Count = 1;
//	int Cur2Count = 0;
//
//	Cur1[0] = 1 - (Cur1[0] - '0') + '0';
//	Cur1[1] = 1 - (Cur1[1] - '0') + '0';
//
//	while (CurIndex < Size - 1)
//	{
//		if (Cur1[CurIndex] != Target[CurIndex])
//		{
//			Cur1[CurIndex + 1] = 1 - (Cur1[CurIndex + 1] - '0') + '0';
//			Cur1[CurIndex] = 1 - (Cur1[CurIndex] - '0') + '0';
//
//			if (CurIndex < Size - 2)
//			{
//				Cur1[CurIndex + 2] = 1 - (Cur1[CurIndex + 2] - '0') + '0';
//			}
//
//			Cur1Count++;
//		}
//
//		CurIndex++;
//	}
//
//	CurIndex = 0;
//
//	while (CurIndex < Size - 1)
//	{
//		if (Cur2[CurIndex] != Target[CurIndex])
//		{
//			Cur2[CurIndex + 1] = 1 - (Cur2[CurIndex + 1] - '0') + '0';
//			Cur2[CurIndex] = 1 - (Cur2[CurIndex] - '0') + '0';
//
//			if (CurIndex < Size - 2)
//			{
//				Cur2[CurIndex + 2] = 1 - (Cur2[CurIndex + 2] - '0') + '0';
//			}
//
//			Cur2Count++;
//		}
//
//		CurIndex++;
//	}
//
//	bool isCur1Same = (Cur1 == Target);
//	bool isCur2Same = (Cur2 == Target);
//
//	if (isCur1Same == true && isCur2Same == true)
//	{
//		std::cout << std::min(Cur1Count, Cur2Count);
//	}
//	else if(isCur1Same == true && isCur2Same == false)
//	{
//		std::cout << Cur1Count;
//	}
//	else if (isCur1Same == false && isCur2Same == true)
//	{
//		std::cout << Cur2Count;
//	}
//	else
//	{
//		std::cout << -1;
//	}
//
//	return 0;
//}