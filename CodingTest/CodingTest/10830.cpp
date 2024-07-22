//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Matrix
//{
//	std::vector<std::vector<int>> Element;
//
//	void SetSize(int _Size)
//	{
//		Element.resize(_Size, std::vector<int>(_Size));
//		Size = _Size;
//	}
//
//	void operator*=(const Matrix& _Other)
//	{
//		std::vector<std::vector<int>> NewElement(Size, std::vector<int>(Size));
//
//		for (int i = 0; i < Size; i++)
//		{
//			for (int j = 0; j < Size; j++)
//			{
//				int CurValue = 0;
//
//				for (int k = 0; k < Size; k++)
//				{
//					CurValue += Element[i][k] * _Other.Element[k][j];
//				}
//
//				NewElement[i][j] = CurValue % 1000;
//			}
//		}
//
//		Element = NewElement;
//	}
//
//	int Size = 0;
//};
//
//int main()
//{
//	Init();
//
//	int MatrixSize = 0;
//	long long Power = 0;
//	std::cin >> MatrixSize >> Power;
//
//	Matrix CurMatrix;
//	CurMatrix.SetSize(MatrixSize);
//
//	for (int i = 0; i < MatrixSize; i++)
//	{
//		for (int j = 0; j < MatrixSize; j++)
//		{
//			std::cin >> CurMatrix.Element[i][j];
//		}
//	}
//
//	std::vector<Matrix> MatrixDP(50);
//	
//	if (Power == 1)
//	{
//		//¿¹¿Ü
//		return 0;
//	}
//
//	long long  CurPower = 1;
//	MatrixDP[CurPower] = CurMatrix;
//
//	while (true)
//	{
//		if (std::pow(2, CurPower * 2) > Power)
//		{
//			break;
//		}
//
//		CurPower *= 2;
//		CurMatrix *= CurMatrix;
//
//		MatrixDP[CurPower] = CurMatrix;
//	}
//
//	CurMatrix = MatrixDP[CurPower];
//	Power -= std::pow(2, CurPower);
//	int MaxPower = CurPower;
//
//	while (Power > 0)
//	{
//		while (Power < std::pow(2, MaxPower))
//		{
//			MaxPower /= 2;
//		}
//
//		CurMatrix *= MatrixDP[MaxPower];
//		Power -= std::pow(2, MaxPower);
//	}
//
//	for (int i = 0; i < CurMatrix.Size; i++)
//	{
//		for (int j = 0; j < CurMatrix.Size; j++)
//		{
//			std::cout << CurMatrix.Element[i][j] << " ";
//		}
//
//		std::cout << "\n";
//	}
//
//	return 0;
//}