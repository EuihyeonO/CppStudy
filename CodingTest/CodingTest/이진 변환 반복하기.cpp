//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(string s)
//{
//    vector<int> answer;
//
//    string CopyS = s;
//
//    int Count = 0;
//    int ZeroCount = 0;
//
//    while (CopyS != "1")
//    {
//        string Copy;
//
//        for (int i = 0; i < CopyS.size(); i++)
//        {
//            if (CopyS[i] == '1')
//            {
//                Copy.push_back(CopyS[i]);
//            }
//            else
//            {
//                ZeroCount++;
//            }
//        }
//
//        int CopyNum = Copy.size();
//        string CopyBinary;
//
//        while (CopyNum > 0)
//        {
//            CopyBinary.push_back((CopyNum % 2) + '0');
//            CopyNum /= 2;
//        }
//
//        Count++;
//        CopyS = CopyBinary;
//    }
//
//    return { Count, ZeroCount };
//}