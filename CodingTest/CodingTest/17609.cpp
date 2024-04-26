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
//int Solution(const std::string& _Str, int _Left, int _Right, int _DeleteCount)
//{
//	if (_Left > _Right)
//	{
//		return _DeleteCount;
//	}
//
//	if (_DeleteCount >= 2)
//	{
//		return 2;
//	}
//
//	if (_Str[_Left] != _Str[_Right])
//	{
//		if (_Str[_Left + 1] == _Str[_Right] && _Str[_Left] == _Str[_Right - 1])
//		{
//			int Answer_1 = Solution(_Str, _Left + 1, _Right, _DeleteCount + 1);
//			int Answer_2 = Solution(_Str, _Left, _Right - 1, _DeleteCount + 1);
//
//			return std::min(Answer_1, Answer_2);
//		}
//		else if (_Str[_Left + 1] == _Str[_Right] && _Str[_Left] != _Str[_Right - 1])
//		{
//			return Solution(_Str, _Left + 1, _Right, _DeleteCount + 1);
//		}
//		else if (_Str[_Left + 1] != _Str[_Right] && _Str[_Left] == _Str[_Right - 1])
//		{
//			return Solution(_Str, _Left, _Right - 1, _DeleteCount + 1);
//		}
//	}
//	else
//	{
//		return Solution(_Str, _Left + 1, _Right - 1, _DeleteCount);
//	}
//}
//
//int main()
//{
//	Init();
//	int NumOfCase = 0;
//	std::cin >> NumOfCase;
//
//	std::vector<int> Answer(NumOfCase, 0);
//	for (int i = 0; i < NumOfCase; i++)
//	{
//		std::string CurStr;
//		std::cin >> CurStr;
//
//		int Left = 0;
//		int Right = CurStr.size() - 1;
//
//		int DeleteCount = Solution(CurStr, Left, Right, 0);
//
//		Answer[i] = std::min(DeleteCount, 2);
//	}
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}