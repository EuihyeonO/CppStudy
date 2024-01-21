//#include <string>
//#include <vector>
//
//using namespace std;
//
//int Pibonacci(int n, vector<int>& isTested)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//
//    if (n <= 2)
//    {
//        return 1;
//    }
//
//    if (n >= 3)
//    {
//        if (isTested[n] != -1)
//        {
//            return isTested[n];
//        }
//        else
//        {
//            isTested[n] = Pibonacci(n - 1, isTested) % 1234567 + Pibonacci(n - 2, isTested) % 1234567;
//            return isTested[n];
//        }
//    }
//}
//
//int solution(int n)
//{
//    vector<int> isTested(n + 1, -1);
//
//    Pibonacci(n, isTested);
//
//    return isTested[n] % 1234567;
//}