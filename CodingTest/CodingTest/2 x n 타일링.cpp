//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n)
//{
//    std::vector<int> DP(n + 1, 0);
//
//    DP[1] = 1;
//    DP[2] = 2;
//    DP[3] = 3;
//
//    int CurIndex = 4;
//    int EndINdex = n;
//
//    while (CurIndex <= n)
//    {
//        DP[CurIndex] = (DP[CurIndex - 1] + DP[CurIndex - 2]) % 1000000007;
//        CurIndex++;
//    }
//
//    return DP[n];
//}