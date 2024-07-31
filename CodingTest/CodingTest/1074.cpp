//#include <iostream>
//#include <vector>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int N = 0;
//int R = 0;
//int C = 0;
//
//int Count = -1;
//int Answer = 0;
//bool isFind = false;
//
//void Recursive(int _X, int _Y, int _Length)
//{
//	if (isFind == true)
//	{
//		return;
//	}
//
//	if (_Length == 1)
//	{
//		if (_X == C && _Y == R)
//		{
//			Answer = Count + 1;
//			isFind = true;
//		}
//		else
//		{
//			Count += 1;
//		}
//
//		return;
//	}
//
//	Recursive(_X , _Y, _Length / 2);
//	Recursive(_X + _Length / 2, _Y, _Length / 2);
//	Recursive(_X, _Y + _Length / 2, _Length / 2);
//	Recursive(_X + _Length / 2, _Y + _Length / 2, _Length / 2);
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> N >> R >> C;
//	int Length = std::pow(2, N);
//
//	Recursive(0, 0, Length);
//	std::cout << Answer;
//
//	return 0;
//}