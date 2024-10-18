//#include <string>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//bool isAlphabet(char _Character)
//{
//    return (_Character >= 'a' && _Character <= 'z') || (_Character >= 'A' && _Character <= 'Z');
//}
//
//int solution(string str1, string str2)
//{
//    std::multiset<std::string> Left;
//    std::multiset<std::string> Right;
//    std::multiset<std::string> Add;
//    std::multiset<std::string> Common;
//
//    for (int i = 0; i < str1.size() - 1; i++)
//    {
//        std::string CurStr = str1.substr(i, 2);
//
//        if (isAlphabet(CurStr[0]) == false || isAlphabet(CurStr[1]) == false)
//        {
//            continue;
//        }
//
//        if (CurStr[0] >= 'a' && CurStr[0] <= 'z')
//        {
//            CurStr[0] += 'A' - 'a';
//        }
//
//        if (CurStr[1] >= 'a' && CurStr[1] <= 'z')
//        {
//            CurStr[1] += 'A' - 'a';
//        }
//
//        Left.insert(CurStr);
//    }
//
//    for (int i = 0; i < str2.size() - 1; i++)
//    {
//        std::string CurStr = str2.substr(i, 2);
//
//        if (isAlphabet(CurStr[0]) == false || isAlphabet(CurStr[1]) == false)
//        {
//            continue;
//        }
//
//        if (CurStr[0] >= 'a' && CurStr[0] <= 'z')
//        {
//            CurStr[0] += 'A' - 'a';
//        }
//
//        if (CurStr[1] >= 'a' && CurStr[1] <= 'z')
//        {
//            CurStr[1] += 'A' - 'a';
//        }
//
//        Right.insert(CurStr);
//    }
//
//    for (const std::string& _Str : Left)
//    {
//        std::multiset<std::string>::iterator FindIter = Right.find(_Str);
//
//        if (FindIter != Right.end())
//        {
//            Common.insert(*FindIter);
//            Right.erase(FindIter);
//        }
//    }
//
//    for (const std::string& _Str : Left)
//    {
//        Add.insert(_Str);
//    }
//
//    for (const std::string& _Str : Right)
//    {
//        Add.insert(_Str);
//    }
//
//    int Answer = 0;
//
//    if (Add.size() == 0)
//    {
//        Answer = 65536;
//    }
//    else
//    {
//        Answer = ((float)Common.size() / Add.size()) * 65536;
//    }
//
//    return Answer;
//
//}