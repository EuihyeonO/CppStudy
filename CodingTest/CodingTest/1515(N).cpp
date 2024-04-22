//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool FindNum(const int& _Num, const int& _FindNum)
//{
//	int Num = _Num;
//	while (Num > 0)
//	{
//		int Remain = Num % 10;
//		
//		if (Remain == _FindNum)
//		{
//			return true;
//		}
//
//		Num /= 10;
//	}
//
//	return false;
//}
//
//int main()
//{
//	Init();
//	std::string Nums;
//	std::cin >> Nums;
//
//	int First = 0;
//	for (int i = 1; i < Nums.size(); i++)
//	{
//		if (Nums[i] - '0' <= Nums[i - 1] - '0' && FindNum(First, Nums[i] - '0') == false)
//		{
//			First++;
//		}
//	}
//
//	int LastNum = (Nums.back() - '0');
//	int Answer = 0;
//
//	if (First == LastNum)
//	{
//		Answer = LastNum * 10;
//	}
//	else
//	{
//		Answer = 10 * First + LastNum;
//	}
//
//	std::cout << First << " ";
//	std::cout << LastNum << " ";
//	std::cout << Answer;
//
//	return 0;
//}