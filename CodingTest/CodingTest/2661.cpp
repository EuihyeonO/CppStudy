//#include <iostream>
//#include <vector>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::string Answer = "";
//
//bool Check(const std::string& _Str)
//{
//	int Size = _Str.size();
//
//	for (int i = 1; i <= Size / 2; i++)
//	{
//		int Start = Size - i * 2;
//		
//		if (_Str.substr(Start, i) == _Str.substr(Start + i, i))
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void Recursive(std::string _Str, int _MaxLength)
//{
//	if (Answer != "")
//	{
//		return;
//	}
//
//	if (Check(_Str) == false)
//	{
//		return;
//	}
//
//	if (_Str.size() >= _MaxLength)
//	{
//		Answer = _Str;
//		return;
//	}
//	
//	Recursive(_Str + "1", _MaxLength);
//	Recursive(_Str + "2", _MaxLength);
//	Recursive(_Str + "3", _MaxLength);
//}
//
//int main()
//{
//	Init();
//
//	int Length = 0;
//	std::cin >> Length;
//
//	Recursive("", Length);
//
//	std::cout << Answer;
//
//	return 0;
//}