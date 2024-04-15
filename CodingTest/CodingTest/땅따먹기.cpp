//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<vector<int> > land)
//{
//    int Height = land.size();
//    std::vector<std::vector<int>> DP(Height, std::vector<int>(4, 0));
//
//    DP[0][0] = land[0][0];
//    DP[0][1] = land[0][1];
//    DP[0][2] = land[0][2];
//    DP[0][3] = land[0][3];
//
//    for (int i = 1; i < Height; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            int Max = 0;
//
//            for (int k = 0; k < 4; k++)
//            {
//                if (j == k)
//                {
//                    continue;
//                }
//
//                if (Max < DP[i - 1][k])
//                {
//                    Max = DP[i - 1][k];
//                }
//            }
//
//            DP[i][j] = Max + land[i][j];
//        }
//    }
//
//    return *std::max_element(DP[Height - 1].begin(), DP[Height - 1].end());
//}