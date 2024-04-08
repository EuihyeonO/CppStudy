//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int GetGCD(int _A, int _B)
//{
//    int Remain = 0;
//    while (_B > 0)
//    {
//        Remain = _A % _B;
//        _A = _B;
//        _B = Remain;
//    }
//
//    return _A;
//}
//
//int solution(vector<int> arrayA, vector<int> arrayB)
//{
//    int Answer_1 = 0;
//    int Answer_2 = 0;
//
//    {
//        int GCD_A = arrayA[0];
//        for (int i = 1; i < arrayA.size(); i++)
//        {
//            GCD_A = GetGCD(GCD_A, arrayA[i]);
//        }
//
//        Answer_1 = GCD_A;
//        for (int i = 0; i < arrayB.size(); i++)
//        {
//            int Remain = arrayB[i] % GCD_A;
//
//            if (Remain == 0)
//            {
//                Answer_1 = 0;
//                break;
//            }
//        }
//    }
//
//    {
//        int GCD_B = arrayB[0];
//        for (int i = 1; i < arrayB.size(); i++)
//        {
//            GCD_B = GetGCD(GCD_B, arrayB[i]);
//        }
//
//        Answer_2 = GCD_B;
//        for (int i = 0; i < arrayA.size(); i++)
//        {
//            int Remain = arrayA[i] % GCD_B;
//
//            if (Remain == 0)
//            {
//                Answer_2 = 0;
//                break;
//            }
//        }
//    }
//
//    return std::max(Answer_1, Answer_2);
//}