//#include <iostream>
//#include <algorithm>
//#include <string>
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
//std::vector<bool> isUse(51);
//std::vector<int> Answer;
//
//int MaxNum = 0;
//bool isFindAnswer = false;
//
//void FindMaxNum(const std::string& _Str)
//{
//	for (int i = 1; i <= 50; i++)
//	{
//		if (i < 10)
//		{
//			MaxNum += 1;
//		}
//		else
//		{
//			MaxNum += 2;
//		}
//
//		if (MaxNum == _Str.size())
//		{
//			MaxNum = i;
//			break;
//		}
//	}
//}
//
//void PrintAnswer()
//{
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << " ";
//	}
//}
//
//void Recursive(const std::string& _Input, int _Index)
//{
//	if (_Input.size() == _Index)
//	{
//		isFindAnswer = true;
//		PrintAnswer();
//		return;
//	}
//
//	if (isFindAnswer == true)
//	{
//		return;
//	}
//	
//	//한 자리 수
//	{
//		int Num = std::stoi(_Input.substr(_Index, 1));
//		
//		if (isUse[Num] == false)
//		{
//			isUse[Num] = true;
//			Answer.push_back(Num);
//
//			Recursive(_Input, _Index + 1);
//
//			Answer.pop_back();
//			isUse[Num] = false;
//		}
//	}
//
//	//두 자리 수
//	if(_Index + 1 < _Input.size())
//	{
//		int Num = std::stoi(_Input.substr(_Index, 2));
//
//		if (Num <= MaxNum && isUse[Num] == false)
//		{
//			isUse[Num] = true;
//			Answer.push_back(Num);
//
//			Recursive(_Input, _Index + 2);
//
//			Answer.pop_back();
//			isUse[Num] = false;
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::string Input;
//	std::cin >> Input;
//
//	FindMaxNum(Input);
//	Recursive(Input, 0);
//	
//	return 0;
//}
