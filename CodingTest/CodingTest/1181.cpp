//#include <iostream>
//#include <vector>
//#include <set>
//#include <string>
//#include <algorithm>
//#include <iterator>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct CompareStruct
//{
//	bool operator()(const std::string& _Left, const std::string& _Right) const
//	{
//		if (_Left.size() != _Right.size())
//		{
//			return _Left.size() < _Right.size();
//		}
//		else
//		{
//			return _Left < _Right;
//		}
//	}
//};
//
//int main()
//{
//	Init();
//
//	int NumOfStr = 0;
//	std::cin >> NumOfStr;
//
//	std::set<std::string, CompareStruct> Strs;
//	for (int i = 0; i < NumOfStr; i++)
//	{
//		std::string InputStr;
//		std::cin >> InputStr;
//		Strs.insert(InputStr);
//	}
//
//	std::copy(Strs.begin(), Strs.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//
//	return 0;
//}