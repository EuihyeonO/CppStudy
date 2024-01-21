//#include <string>
//#include <string_view>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//bool Test(const string_view& _string)
//{
//    stack<char> TestStack;
//
//    for (int i = 0; i < _string.size(); i++)
//    {
//        if (TestStack.size() > 0 && _string[i] == '}' && TestStack.top() == '{')
//        {
//            TestStack.pop();
//            continue;
//        }
//
//        if (TestStack.size() > 0 && _string[i] == ')' && TestStack.top() == '(')
//        {
//            TestStack.pop();
//            continue;
//        }
//
//        if (TestStack.size() > 0 && _string[i] == ']' && TestStack.top() == '[')
//        {
//            TestStack.pop();
//            continue;
//        }
//
//        TestStack.push(_string[i]);
//    }
//
//    if (TestStack.size() == 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//int solution(string s)
//{
//    string CopyS = s;
//    int Count = 0;
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (Test(CopyS) == true)
//        {
//            Count++;
//        }
//
//        CopyS = CopyS.substr(1, CopyS.size()) + CopyS.substr(0, 1);
//    }
//
//    return Count;
//}