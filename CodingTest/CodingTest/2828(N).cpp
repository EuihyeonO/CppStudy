//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//
//struct Basket
//{
//	int Count = 0;
//	int Position = 0;
//	int Index = 0;
//};
//
//int main()
//{
//	int ScreenLength = 0;
//	int BasketLength = 0;
//	int NumOfApple = 0;
//
//	std::cin >> ScreenLength;
//	std::cin >> BasketLength;
//	std::cin >> NumOfApple;
//	
//	std::vector<int> ApplePos;
//	ApplePos.resize(NumOfApple, 0);
//
//	for (int i = 0; i < NumOfApple; i++)
//	{
//		std::cin >> ApplePos[i];
//	}
//
//	for (int i = 0; i < NumOfApple; i++)
//	{
//		ApplePos[i]--;
//	}
//
//	std::queue<Basket> BFS;
//	Basket NewBasket;
//	BFS.push(NewBasket);
//
//	while (BFS.size() > 0)
//	{
//		Basket CurBasket = BFS.front();
//		BFS.pop();
//
//		int CurApplePos = ApplePos[CurBasket.Index];
//
//		// 이미 바스켓 범위 내에 있을 때,
//		if (CurApplePos >= CurBasket.Position && CurApplePos <= CurBasket.Position + BasketLength - 1)
//		{
//			Basket NewBasket;
//			NewBasket.Position = CurBasket.Position;
//			NewBasket.Index = CurBasket.Index + 1;
//			NewBasket.Count = CurBasket.Count;
//
//			BFS.push(NewBasket);
//		}
//	}
//
//
//	return 0;
//}
