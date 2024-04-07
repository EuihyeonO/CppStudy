//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Point
//{
//	long long X = 0;
//	long long Y = 0;
//};
//
//struct Line
//{
//	Point Start;
//	Point End;
//};
//
//bool isClockWise(Point _First, Point _Second, Point _Third)
//{
//	Point Vector_1 = { _Second.X - _First.X, _Second.Y - _First.Y };
//	Point Vector_2 = { _Third.X - _Second.X, _Third.Y - _Second.Y };
//
//	long long CrossZ = { Vector_1.X * Vector_2.Y - Vector_1.Y * Vector_2.X };
//
//	return CrossZ < 0;
//}
//
//int main()
//{
//	Init();
//
//	Line Line_1;
//	Line Line_2;
//
//	{
//		std::cin >> Line_1.Start.X >> Line_1.Start.Y;
//		std::cin >> Line_1.End.X >> Line_1.End .Y;
//
//		std::cin >> Line_2.Start.X >> Line_2.Start.Y;
//		std::cin >> Line_2.End.X >> Line_2.End.Y;
//	}
//	
//	bool isClockWise_1 = isClockWise(Line_1.Start, Line_1.End, Line_2.Start);
//	bool isClockWise_2 = isClockWise(Line_1.Start, Line_1.End, Line_2.End);
//
//	if (isClockWise_1 == isClockWise_2)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	bool isClockWise_3 = isClockWise(Line_2.Start, Line_2.End, Line_1.Start);
//	bool isClockWise_4 = isClockWise(Line_2.Start, Line_2.End, Line_1.End);
//
//	if (isClockWise_3 == isClockWise_4)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	std::cout << 1;
//
//	return 0;
//}