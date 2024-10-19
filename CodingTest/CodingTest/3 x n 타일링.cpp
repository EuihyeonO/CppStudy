//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(int n)
//{
//    std::vector<long long > DP(n + 1, 0);
//
//    DP[0] = 1;
//    DP[2] = 3;
//
//    for (int i = 4; i <= n; i += 2)
//    {
//        DP[i] = 3 * DP[i - 2];
//
//        for (int j = 0; j <= i - 4; j += 2)
//        {
//            DP[i] += 2 * DP[j];
//        }
//
//        DP[i] %= 1000000007;
//    }
//
//    return DP[n];
//}