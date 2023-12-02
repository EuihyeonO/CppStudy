//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int NumOfBasket = 0;
//	int ChangeTime = 0;
//
//	std::cin >> NumOfBasket >> ChangeTime;
//
//	std::vector<int> Basket;
//	Basket.resize(NumOfBasket, 0);
//	
//	for (int i = 0; i < NumOfBasket; i++)
//	{
//		Basket[i] = i + 1;
//	}
//	
//	for (int i = 0; i < ChangeTime; i++)
//	{
//		int Basket1 = 0, Basket2 = 0;
//		std::cin >> Basket1 >> Basket2;
//		
//		Basket1--;
//		Basket2--;
//		
//		int CopyNumber = Basket[Basket2];
//		Basket[Basket2] = Basket[Basket1];
//		Basket[Basket1] = CopyNumber;
//	}
//
//	for (int i = 0; i < NumOfBasket; i++)
//	{
//		std::cout << Basket[i] << " ";
//	}
//
//	return 0;
//}