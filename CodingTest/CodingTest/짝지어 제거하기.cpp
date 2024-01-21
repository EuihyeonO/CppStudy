//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int solution(string s)
//{
//    std::stack<char> Stack;
//
//    int Index = 0;
//    Stack.push(s[Index]);
//
//    Index++;
//    while (Index < s.size())
//    {
//        if (Stack.size() == 0)
//        {
//            Stack.push(s[Index]);
//            Index++;
//            continue;
//        }
//
//        char Alphabet = Stack.top();
//        if (Alphabet == s[Index])
//        {
//            Stack.pop();
//        }
//        else
//        {
//            Stack.push(s[Index]);
//        }
//
//        Index++;
//    }
//
//    int Answer = 1;
//
//    if (Stack.size() > 0)
//    {
//        Answer = 0;
//    }
//
//    return Answer;
//}