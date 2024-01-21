//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s)
//{
//    string CopyS = s;
//    int Index = 0;
//
//    while (Index < CopyS.size())
//    {
//        if (CopyS[Index] == ' ')
//        {
//            while (CopyS[Index] == ' ' && Index < CopyS.size())
//            {
//                Index++;
//            }
//        }
//        else
//        {
//            if (CopyS[Index] >= 97 && CopyS[Index] <= 122)
//            {
//                CopyS[Index] -= 32;
//            }
//
//            Index++;
//
//            while (CopyS[Index] != ' ' && Index < CopyS.size())
//            {
//                if (CopyS[Index] >= 65 && CopyS[Index] <= 90)
//                {
//                    CopyS[Index] += 32;
//                }
//
//                Index++;
//            }
//        }
//    }
//
//    return CopyS;
//}