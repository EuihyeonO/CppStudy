//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int solution(string s)
//{
//    int answer = 0;
//    int MaxLength = 0;
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        int LengthCount = 1;
//
//        for (int j = 1; j < s.size(); j++)
//        {
//            int PrevIndex = i - j;
//            int NextIndex = i + j;
//
//            if (i - j < 0 || i + j >= s.size())
//            {
//                break;
//            }
//
//            if (s[PrevIndex] == s[NextIndex])
//            {
//                LengthCount += 2;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        MaxLength = std::max(MaxLength, LengthCount);
//    }
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        int LengthCount = 0;
//
//        for (int j = 1; j < s.size(); j++)
//        {
//            int PrevIndex = i - j + 1;
//            int NextIndex = i + j;
//
//            if (i - j + 1 < 0 || i + j >= s.size())
//            {
//                break;
//            }
//
//            if (s[PrevIndex] == s[NextIndex])
//            {
//                LengthCount += 2;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        MaxLength = std::max(MaxLength, LengthCount);
//    }
//
//    return MaxLength;
//}