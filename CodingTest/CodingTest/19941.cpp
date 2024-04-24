//#include <iostream>
//#include <climits>
//#include <vector>
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
//	int StringSize = 0;
//	int MaxDistance = 0;
//	std::cin >> StringSize >> MaxDistance;
//	
//	std::string Input;
//	Input.resize(StringSize);
//	std::cin >> Input;
//
//	int EatManCount = 0;
//
//	for (int i = 0; i < StringSize; i++)
//	{
//		if (Input[i] != 'P')
//		{
//			continue;
//		}
//
//		int Left = std::max(0, i - MaxDistance);
//		int Right = std::min(StringSize - 1, i + MaxDistance);
//
//		for (int j = Left; j <= Right; j++)
//		{
//			if (Input[j] == 'H')
//			{
//				Input[j] = 'E';
//				EatManCount++;
//
//				break;
//			}
//		}
//	}
//
//	std::cout << EatManCount;
//
//	return 0;
//}