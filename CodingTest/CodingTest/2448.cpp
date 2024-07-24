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
//void Draw(std::vector<std::vector<char>>& _Primitive, int _StartY, int _StartX, int _YOffset, int _XOffset)
//{
//	if (_YOffset == 3 && _XOffset == 6)
//	{
//		_Primitive[_StartY][_StartX + 2] = '*';
//
//		_Primitive[_StartY + 1][_StartX + 1] = '*';
//		_Primitive[_StartY + 1][_StartX + 3] = '*';
//
//		_Primitive[_StartY + 2][_StartX] = '*';
//		_Primitive[_StartY + 2][_StartX + 1] = '*';
//		_Primitive[_StartY + 2][_StartX + 2] = '*';
//		_Primitive[_StartY + 2][_StartX + 3] = '*';
//		_Primitive[_StartY + 2][_StartX + 4] = '*';
//
//		return;
//	}
//	else
//	{
//		Draw(_Primitive, _StartY, _StartX + _XOffset / 4, _YOffset / 2, _XOffset / 2);
//		Draw(_Primitive, _StartY + _YOffset / 2, _StartX, _YOffset / 2, _XOffset / 2);
//		Draw(_Primitive, _StartY + _YOffset / 2, _StartX + _XOffset / 2, _YOffset / 2, _XOffset / 2);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int Num = 0;
//	std::cin >> Num;
//
//	int Height = Num;
//	int Width = Height * 2;
//
//	std::vector<std::vector<char>> Primitive(Height, std::vector<char>(Width, ' '));
//
//	Draw(Primitive, 0, 0, Height, Width);
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cout << Primitive[i][j];
//		}
//
//		std::cout << "\n";
//	}
//
//	return 0;
//}