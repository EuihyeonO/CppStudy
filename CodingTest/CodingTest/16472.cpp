//#include <iostream>
//#include <vector>
//#include <map>
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
//	int NumOfAlphabet = 0;
//	std::cin >> NumOfAlphabet;
//
//	std::string Str;
//	std::cin >> Str;
//
//	int Answer = -1;
//
//	int Left = 0;
//	int Right = 0;
//
//	std::vector<int> Alphabets(26, 0);
//
//	int Count = 0;
//	while (Left <= Right && Left < Str.size())
//	{
//		if(Right < Str.size())
//		{
//			int StrInt = Str[Right] - 'a';
//			
//			if (Alphabets[StrInt] > 0)
//			{
//				Alphabets[StrInt]++;
//			}
//			else
//			{
//				Alphabets[StrInt]++;
//				Count++;
//			}
//
//			if(Count > NumOfAlphabet)
//			{
//				int IndexCount = 0;
//				while (true)
//				{
//					int StrInt = Str[Left + IndexCount] - 'a';
//					Alphabets[StrInt]--;
//
//					if (Alphabets[StrInt] <= 0)
//					{
//						Answer = std::max(Answer, Right - Left);
//						
//						Left = Left + IndexCount + 1;
//						Count--;
//						
//						break;
//					}
//
//					IndexCount++;
//				}
//			}
//
//			Right++;
//		}
//		else
//		{
//			int IndexCount = 0;
//			while (true)
//			{
//				int StrInt = Str[Left + IndexCount] - 'a';
//				Alphabets[StrInt]--;
//
//				IndexCount++;
//
//				if (Alphabets[StrInt] <= 0 || Left + IndexCount >= Str.size())
//				{
//					Answer = std::max(Answer, Right - Left);
//
//					Left = Left + IndexCount;
//					Count--;
//
//					break;
//				}
//
//			}
//		}
//	}
//	
//	std::cout << Answer;
//
//	return 0;
//}