//#include <iostream>
//#include <vector>
//#include <string>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int main()
//{
//	Init();
//
//	int Target = 0;
//	std::cin >> Target;
//	std::string Answer;
//
//	int Digit = 1;
//
//	while (Target > 0)
//	{
//		Target--;
//
//		if (Target % 2 == 0)
//		{
//			Answer.push_back('4');
//		}
//		else
//		{
//			Answer.push_back('7');
//		}
//
//		Target /= 2;
//	}
//	
//	for (int i = 0; i < Answer.size() / 2; i++)
//	{
//		std::swap(Answer[i], Answer[Answer.size() - i - 1]);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}