//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int TestCase = 0;
//	std::cin >> TestCase;
//
//	std::vector<std::string> Answers;
//	Answers.reserve(TestCase);
//
//	for (int i = 0; i < TestCase; i++)
//	{
//		std::string Func = "";
//		std::cin >> Func;
//
//		int SequenceSize = 0;
//		std::cin >> SequenceSize;
//
//		std::string Input = "";
//		std::cin >> Input;
//
//		std::vector<int> Nums;
//
//		std::string IntStr;
//		for (int i = 0; i < Input.size(); i++)
//		{
//			if (Input[i] >= '0' && Input[i] <= '9')
//			{
//				IntStr.push_back(Input[i]);
//			}
//			else
//			{
//				if (IntStr.size() != 0)
//				{
//					Nums.push_back(std::stoi(IntStr));
//					IntStr.clear();
//				}
//			}
//		}
//
//		std::vector<bool> isLeft(Nums.size(), true);
//
//		int FrontIndex = 0;
//		int BackIndex = Nums.size() - 1;
//		bool isFront = true;
//		bool isError = false;
//
//		for (int i = 0; i < Func.size(); i++)
//		{
//			if (Func[i] == 'R')
//			{
//				isFront = !isFront;
//			}
//			else if (Func[i] == 'D')
//			{
//				if (isFront == true)
//				{
//					if (FrontIndex >= Nums.size() || isLeft[FrontIndex] == false)
//					{
//						isError = true;
//						break;
//					}
//
//					isLeft[FrontIndex] = false;
//					FrontIndex++;
//				}
//				else
//				{
//					if (BackIndex < 0 || isLeft[BackIndex] == false)
//					{
//						isError = true;
//						break;
//					}
//
//					isLeft[BackIndex] = false;
//					BackIndex--;
//				}
//			}
//		}
//
//		if (isError == true)
//		{
//			Answers.push_back("error");
//			continue;
//		}
//
//		std::string Answer;
//		Answer.push_back('[');
//
//		for (int i = 0; i < Nums.size(); i++)
//		{
//			if (isFront == true)
//			{
//				if (isLeft[i] == true)
//				{
//					Answer += std::to_string(Nums[i]);
//					Answer.push_back(',');
//				}
//			}
//			else
//			{
//				if (isLeft[Nums.size() - i - 1] == true)
//				{
//					Answer += std::to_string(Nums[Nums.size() - i - 1]);
//					Answer.push_back(',');
//				}
//			}
//		}
//
//		if (Answer.size() > 1)
//		{
//			Answer.pop_back();
//		}
//		
//		Answer.push_back(']');
//
//		Answers.push_back(Answer);
//	} 
//
//	for (int i = 0; i < TestCase; i++)
//	{
//		std::cout << Answers[i] << '\n';
//	}
//
//	return 0;
//}