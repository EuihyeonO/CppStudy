//#include <iostream>
//#include <vector>
//#include <string>
//#include <string_view>
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
//	int SequenceIndex = 0;
//	int StringSize = 0;
//	
//	std::cin >> SequenceIndex >> StringSize;
//	
//	std::string Targetstr;
//	Targetstr.resize(StringSize);
//	
//	for (int i = 0; i < StringSize; i++)
//	{
//		std::cin >> Targetstr[i];
//	}
//	
//	int Count = 0;
//	int StrSIze = 2 * SequenceIndex + 1;
//	
//	int CurIndex = 0;
//	int EndIndex = StringSize;
//
//	while (CurIndex < EndIndex)
//	{
//		if (Targetstr[CurIndex] == 'O')
//		{
//			CurIndex++;
//			continue;
//		}
//
//		int StartIndex = CurIndex;
//
//		while (CurIndex < EndIndex)
//		{
//			if (Targetstr[CurIndex] == Targetstr[CurIndex + 1])
//			{
//				CurIndex++;
//				break;
//			}
//			
//			CurIndex++;
//		}
//
//		int TestStrSize = CurIndex - StartIndex;
//		int Result = TestStrSize - StrSIze;
//
//		if (Result < 0)
//		{
//			continue;
//		}
//
//		Result = 1 + Result / 2;
//
//		if (Result >= 0)
//		{
//			Count += Result;
//		}
//	}
//
//	std::cout << Count;
//
//	return 0;
//}