//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s)
//{
//    int MaxNum = 0;
//    int MinNum = 0;
//
//    int Index = 0;
//
//    if (s[Index] == '-')
//    {
//        string NumStr = "";
//        int Num = 0;
//
//        Index++;
//
//        while (s[Index] != ' ' && Index < s.size())
//        {
//            NumStr.push_back(s[Index]);
//            Index++;
//        }
//
//        MaxNum = -(stoi(NumStr));
//        MinNum = -(stoi(NumStr));
//    }
//    else
//    {
//        string NumStr = "";
//        int Num = 0;
//
//        while (s[Index] != ' ' && Index < s.size())
//        {
//            NumStr.push_back(s[Index]);
//            Index++;
//        }
//
//        MaxNum = stoi(NumStr);
//        MinNum = stoi(NumStr);
//    }
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == ' ')
//        {
//            continue;
//        }
//
//        int Num = 0;
//
//        if (s[i] == '-')
//        {
//            string NumStr = "";
//            int Num = 0;
//
//            i++;
//
//            while (s[i] != ' ' && i < s.size())
//            {
//                NumStr.push_back(s[i]);
//                i++;
//            }
//
//            Num = -(stoi(NumStr));
//
//            if (Num > MaxNum)
//            {
//                MaxNum = Num;
//            }
//
//            if (Num < MinNum)
//            {
//                MinNum = Num;
//            }
//        }
//        else
//        {
//            string NumStr = "";
//            int Num = 0;
//
//            while (s[i] != ' ' && i < s.size())
//            {
//                NumStr.push_back(s[i]);
//                i++;
//            }
//
//            Num = stoi(NumStr);
//
//            if (Num > MaxNum)
//            {
//                MaxNum = Num;
//            }
//
//            if (Num < MinNum)
//            {
//                MinNum = Num;
//            }
//        }
//    }
//
//    string answer = "";
//    answer = to_string(MinNum) + " " + to_string(MaxNum);
//    return answer;
//}