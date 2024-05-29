//#include <iostream>
//#include <string>
//#include <vector>
//
//int main()
//{
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::wstring Input;
//	std::getline(std::wcin, Input);
//
//	std::vector<std::wstring> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		std::getline(std::wcin, Input);
//
//		std::wstring Initial;
//		if ((1 <= Input.size()) && ((Input[0] >= 'a' && Input[0] <= 'z') || (Input[0] >= 'A' && Input[0] <= 'Z')))
//		{
//			Initial += Input[0];
//		}
//		else if ((2 <= Input.size()) && !((Input[0] >= 'a' && Input[0] <= 'z') || (Input[0] >= 'A' && Input[0] <= 'Z')))
//		{
//			Initial += Input[0];
//			Initial += Input[1];
//		}
//
//		for (int i = 1; i < Input.size(); i++)
//		{
//			if (Input[i] == ' ')
//			{
//				if ((i < Input.size() - 2) && ((Input[i + 1] >= 'a' && Input[i + 1] <= 'z') || (Input[i + 1] >= 'A' && Input[i + 1] <= 'Z')))
//				{
//					Initial += Input[i + 1];
//				}
//				else if ((i < Input.size() - 3) && !((Input[i + 1] >= 'a' && Input[i + 1] <= 'z') || (Input[i + 1] >= 'A' && Input[i + 1] <= 'Z')))
//				{
//					Initial += Input[i + 1];
//					Initial += Input[i + 2];
//				}
//			}
//		}
//
//		Answers[Case] = Initial;
//	}
//
//	std::cout << "\n";
//	
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::wcout << Answers[i] << "\n";
//	}
//
//	return 0;
//}