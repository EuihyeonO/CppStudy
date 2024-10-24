//#include <iostream>
//#include <vector>
//#include <set>
//#include <string>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool isNumber(char _Char)
//{
//	if (_Char == '-' ||( _Char >= '0' && _Char <= '9'))
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int FindFrontIndex(const std::string& _Str, int _SignIndex)
//{
//	for (int i = _SignIndex - 1; i >= 0; i--)
//	{
//		bool bIsNumber = isNumber(_Str[i]);
//
//		if (bIsNumber == false)
//		{
//			return i + 1;
//		}
//
//		if (bIsNumber == true && i == 0)
//		{
//			return 0;
//		}
//	}
//}
//
//int FindNextIndex(const std::string& _Str, int _SignIndex)
//{
//	for (int i = _SignIndex + 1; i < _Str.size(); i++)
//	{
//		bool bIsNumber = isNumber(_Str[i]);
//
//		if (bIsNumber == false)
//		{
//			return i - 1;
//		}
//
//		if (bIsNumber == true && i == _Str.size() - 1)
//		{
//			return _Str.size() - 1;
//		}
//	}
//}
//
//void CalString(std::string& _Str, int _CurIndex)
//{
//	int PrevIndex = FindFrontIndex(_Str, _CurIndex);
//	int PrevNumber = std::stoi(_Str.substr(PrevIndex, _CurIndex - PrevIndex));
//
//	int NextIndex = FindNextIndex(_Str, _CurIndex);
//	int NextNumber = std::stoi(_Str.substr(_CurIndex + 1, NextIndex - _CurIndex + 1));
//
//	int ResultNumber = 0;
//
//	if (_Str[_CurIndex] == '*')
//	{
//		ResultNumber = PrevNumber * NextNumber;
//	}
//	else if (_Str[_CurIndex] == '!')
//	{
//		ResultNumber = PrevNumber - NextNumber;
//	}
//	else if (_Str[_CurIndex] == '+')
//	{
//		ResultNumber = PrevNumber + NextNumber;
//	}
//
//	_Str.replace(PrevIndex, (NextIndex - PrevIndex + 1), std::to_string(ResultNumber));
//}
//
//void AllCalString(std::string& _Str)
//{
//	for (int i = 0; i < _Str.size(); i++)
//	{
//		if (isNumber(_Str[i]) == false)
//		{
//			CalString(_Str, i);
//			i = 0;
//		}
//	}
//}
//
//bool CanParentheses(std::string& _Str, int _SignIndex)
//{
//	for (int i = _SignIndex - 1; i >= 0; i--)
//	{
//		if (_Str[i] == ')')
//		{
//			return true;
//		}
//		
//		if (_Str[i] == '(')
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void AddParentheses(std::string& _Str, int _SignIndex)
//{
//	int FrontIndex = FindFrontIndex(_Str, _SignIndex);
//	_Str.insert(FrontIndex, "(");
//
//	int NextIndex = FindNextIndex(_Str, _SignIndex + 1);
//	_Str.insert(NextIndex + 1, ")");
//
//}
//
//std::set<std::string> Set;
//
//int DFS(std::string& _Str)
//{
//	if (Set.find(_Str) != Set.end())
//	{
//		return 0;
//	}
//
//	Set.insert(_Str);
//
//	std::vector<int> SignIndex;
//
//	for (int i = 0; i < _Str.size(); i++)
//	{
//		if (isNumber(_Str[i]) == false)
//		{
//			SignIndex.push_back(i);
//		}
//	}
//
//	if (SignIndex.size() == 0)
//	{
//		return std::stoi(_Str);
//	}
//
//	int Answer = 0;
//
//	bool isAdd = false;
//	for (int i = 0; i < SignIndex.size(); i++)
//	{
//		int CurIndex = SignIndex[i];
//
//		std::string CopyStr = _Str;
//		if (CanParentheses(CopyStr, i) == true)
//		{
//			AddParentheses(CopyStr, CurIndex);
//			isAdd = true;
//		}
//
//		Answer = std::max(Answer, DFS(CopyStr));
//	}
//
//	return Answer;
//}
//
//int main()
//{
//	Init();
//
//	int StrSize = 0;
//	std::cin >> StrSize;
//
//	std::string Str;
//	Str.resize(StrSize);
//	std::cin >> Str;
//	
//	for (int i = 0; i < Str.size(); i++)
//	{
//		if (Str[i] == '-')
//		{
//			Str[i] = '!';
//		}
//	}
//
//	AddParentheses(Str, 1);
//	//int Answer = DFS(Str);
//
//	return 0;
//}