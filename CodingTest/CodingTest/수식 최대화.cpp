//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//void Function(std::string& _Str, char _Sign)
//{
//    int Index = 0;
//
//    while (Index < _Str.size())
//    {
//        if (_Str[Index] == _Sign)
//        {
//            int PrevIndex = 0;
//            int CurIndex = Index;
//            int NextIndex = _Str.size() - 1;
//
//            for (int j = Index - 1; j >= 0; j--)
//            {
//                if ((_Str[j] < '0' || _Str[j] > '9') && _Str[j] != '-')
//                {
//                    PrevIndex = j + 1;
//                    break;
//                }
//            }
//
//            for (int j = Index + 1; j < _Str.size(); j++)
//            {
//                if ((_Str[j] < '0' || _Str[j] > '9') && _Str[j] != '-')
//                {
//                    NextIndex = j - 1;
//                    break;
//                }
//            }
//
//            long long FrontNumber = std::stoll(_Str.substr(PrevIndex, CurIndex - PrevIndex));
//            long long NextNumber = std::stoll(_Str.substr(CurIndex + 1, NextIndex - CurIndex));
//
//            long long ResultNumber = 0;
//
//            if (_Sign == '!')
//            {
//                ResultNumber = FrontNumber - NextNumber;
//            }
//            else if (_Sign == '*')
//            {
//                ResultNumber = FrontNumber * NextNumber;
//            }
//            else
//            {
//                ResultNumber = FrontNumber + NextNumber;
//            }
//
//            _Str.replace(PrevIndex, NextIndex - PrevIndex + 1, std::to_string(ResultNumber));
//
//            Index = 0;
//        }
//
//        Index++;
//    }
//}
//
//long long solution(string expression)
//{
//    std::vector<char> Operator = { '+', '!', '*' };
//    std::sort(Operator.begin(), Operator.end());
//
//    for (int i = 0; i < expression.size(); i++)
//    {
//        if (expression[i] == '-')
//        {
//            expression[i] = '!';
//        }
//    }
//
//    long long Answer = 0;
//
//    do
//    {
//        std::string CurStr = expression;
//
//        Function(CurStr, Operator[0]);
//        Function(CurStr, Operator[1]);
//        Function(CurStr, Operator[2]);
//
//        Answer = std::max(Answer, std::abs(std::stoll(CurStr)));
//    } while (std::next_permutation(Operator.begin(), Operator.end()));
//
//    return Answer;
//}