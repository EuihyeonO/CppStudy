//#include <string>
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<string> solution(vector<string> s)
//{
//    std::vector<std::string> Answer;
//    Answer.reserve(s.size());
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        std::string& CurStr = s[i];
//        std::string StackStr;
//
//        int Count110 = 0;
//
//        for (int j = 0; j < CurStr.size(); j++)
//        {
//            StackStr += CurStr[j];
//
//            if (StackStr.size() >= 3 && StackStr.substr(StackStr.size() - 3, 3) == "110")
//            {      
//                Count110++;
//                StackStr.erase(StackStr.size() - 3, StackStr.size());
//            }
//        }
//
//        std::string AnswerStr;
//        AnswerStr.reserve(CurStr.size());
//
//        int InsertIndex = -1;
//        for (int j = StackStr.size() - 1; j >= 0; j--)
//        {
//            if (StackStr[j] == '0')
//            {
//                InsertIndex = j;
//                break;
//            }
//        }
//
//        if (InsertIndex == -1)
//        {
//            while (Count110 > 0)
//            {
//                AnswerStr += "110";
//                Count110--;
//            }
//        }
//
//        for (int j = 0; j < StackStr.size(); j++)
//        {
//            AnswerStr.push_back(StackStr[j]);
//
//            if (j == InsertIndex)
//            {
//                while (Count110 > 0)
//                {
//                    AnswerStr += "110";
//                    Count110--;
//                }
//            }
//        }
//
//
//        Answer.push_back(AnswerStr);
//    }
//
//    return Answer;
//}