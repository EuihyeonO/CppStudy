//#include <string>
//#include <string_view>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//bool Check(const string_view& _Word, vector<string>& _Vector)
//{
//    for (int i = 0; i < _Vector.size(); i++)
//    {
//        if (_Vector[i] == _Word)
//        {
//            return true;
//        }
//    }
//
//    if (_Vector.size() > 0)
//    {
//        string Word = _Vector[_Vector.size() - 1];
//
//        if (Word[Word.size() - 1] != _Word.data()[0])
//        {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//vector<int> solution(int n, vector<string> words)
//{
//    vector<int> answer;
//
//    vector<string> WordCheck;
//    WordCheck.reserve(100);
//
//    for (int i = 0; i < words.size(); i++)
//    {
//        if (Check(words[i], WordCheck) == true)
//        {
//            int Num = (i + 1) % n;
//
//            if (Num == 0)
//            {
//                Num = n;
//            }
//
//            int Order = i / n + 1;
//
//            return { Num, Order };
//        }
//        else
//        {
//            WordCheck.push_back(words[i]);
//        }
//    }
//
//    return { 0, 0 };
//}