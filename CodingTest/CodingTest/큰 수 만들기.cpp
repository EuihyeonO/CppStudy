//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//string solution(string number, int k)
//{
//    int DeleteCount = k;
//    int StartIndex = 0;
//
//    std::string Answer;
//
//    while (StartIndex < number.size())
//    {
//        int MaxNum = -1;
//        int MaxIndex = StartIndex;
//
//        if (number.size() - StartIndex <= DeleteCount)
//        {
//            break;
//        }
//
//        for (int j = 0; j <= DeleteCount; j++)
//        {
//            if (number[StartIndex + j] - '0' > MaxNum)
//            {
//                MaxNum = number[StartIndex + j] - '0';
//                MaxIndex = StartIndex + j;
//            }
//        }
//
//        DeleteCount -= MaxIndex - StartIndex;
//        Answer.push_back(number[MaxIndex]);
//        StartIndex = MaxIndex + 1;
//    }
//
//    return Answer;
//}