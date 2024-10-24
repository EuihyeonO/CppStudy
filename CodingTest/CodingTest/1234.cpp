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
//int TreeLevel = 0;
//int NumRed = 0, NumGreen = 0, NumBlue = 0;
//
//long long Recursive(int _Level)
//{
//	if (_Level > TreeLevel)
//	{
//		return 1;
//	}
//
//	long long Case = 0;
//
//	if (NumRed >= _Level)
//	{
//		NumRed -= _Level;
//		Case += Recursive(_Level + 1);
//		NumRed += _Level;
//	}
//
//	if (NumGreen >= _Level)
//	{
//		NumGreen -= _Level;
//		Case += Recursive(_Level + 1);
//		NumGreen += _Level;
//	}
//
//	if (NumBlue >= _Level)
//	{
//		NumBlue -= _Level;
//		Case += Recursive(_Level + 1);
//		NumBlue += _Level;
//	}
//
//	if (_Level % 2 == 0)
//	{
//		long long CombinationCase = 1;
//
//		for (int i = _Level; i > _Level / 2; i--)
//		{
//			CombinationCase *= i;
//		}
//
//		for (int i = 1; i <= _Level / 2; i++)
//		{
//			CombinationCase /= i;
//		}
//
//		if (NumRed >= _Level / 2 && NumGreen >= _Level / 2)
//		{
//			NumRed -= _Level / 2;
//			NumGreen -= _Level / 2;
//			Case += CombinationCase * Recursive(_Level + 1);
//			NumRed += _Level / 2;
//			NumGreen += _Level / 2;
//		}
//
//		if (NumRed >= _Level / 2 && NumBlue >= _Level / 2)
//		{
//			NumRed -= _Level / 2;
//			NumBlue -= _Level / 2;
//			Case += CombinationCase * Recursive(_Level + 1);
//			NumRed += _Level / 2;
//			NumBlue += _Level / 2;
//		}
//
//		if (NumGreen >= _Level / 2 && NumBlue >= _Level / 2)
//		{
//			NumGreen -= _Level / 2;
//			NumBlue -= _Level / 2;
//			Case += CombinationCase * Recursive(_Level + 1);
//			NumGreen += _Level / 2;
//			NumBlue += _Level / 2;
//		}
//	}
//
//	if (_Level % 3 == 0)
//	{
//		long long CombinationCase = 1;
//		int Nums = _Level;
//
//		for (int i = 1; i <= _Level / 3; i++)
//		{
//			CombinationCase *= (Nums - i + 1);
//		}
//
//		for (int i = 1; i <= _Level / 3; i++)
//		{
//			CombinationCase *= (Nums - i + 1);
//		}
//
//		for (int i = 1; i <= _Level / 3; i++)
//		{
//			CombinationCase *= (Nums - i + 1);
//		}
//
//		if (NumRed >= _Level / 3 && NumGreen >= _Level / 3 && NumBlue >= _Level / 3)
//		{
//			NumRed -= _Level / 3;
//			NumGreen -= _Level / 3;
//			NumBlue -= _Level / 3;
//			Case += CombinationCase * Recursive(_Level + 1);
//			NumRed += _Level / 3;
//			NumGreen += _Level / 3;
//			NumBlue += _Level / 3;
//		}
//	}
//
//	return Case;
//}
//
//int main()
//{
//	Init();
//	std::cin >> TreeLevel >> NumRed >> NumGreen >> NumBlue;
//
//	int C = Recursive(1);
//	return 0;
//}