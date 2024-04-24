//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_set>
//#include <unordered_map>
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
//	std::unordered_map<std::string, bool> Memos;
//
//	int NumOfMemo = 0;
//	int NumOfPost = 0;
//	std::cin >> NumOfMemo >> NumOfPost;
//
//	std::vector<int> Answer(NumOfPost);
//
//	for (int i = 0; i < NumOfMemo; i++)
//	{
//		std::string InputStr = "";
//		std::cin >> InputStr;
//
//		Memos[InputStr] = false;
//	}
//
//	for (int i = 0; i < NumOfPost; i++)
//	{
//		std::string Input = "";
//		std::cin >> Input;
//
//		std::unordered_set<std::string> Keywords;
//
//		int PrevIndex = 0;
//		for (int i = 0; i < Input.size(); i++)
//		{
//			if (Input[i] == ',')
//			{
//				Keywords.insert(Input.substr(PrevIndex, i - PrevIndex));
//				PrevIndex = i + 1;
//			}
//		}
//
//		Keywords.insert(Input.substr(PrevIndex, Input.size()));
//
//		std::unordered_set<std::string>::iterator CurIter = Keywords.begin();
//		std::unordered_set<std::string>::iterator EndIter = Keywords.end();
//
//		while (CurIter != EndIter)
//		{
//			if (Memos.find(*CurIter) != Memos.end() && Memos[*CurIter] == false)
//			{
//				Memos[*CurIter] = true;
//				NumOfMemo--;
//			}
//
//			CurIter++;
//		}
//
//		Answer[i] = NumOfMemo;
//	}
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}