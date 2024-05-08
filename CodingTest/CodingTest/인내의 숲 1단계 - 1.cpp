//#include <iostream>
//#include <vector>
//
//int main()
//{
//    //N층에 도달하는 경우의 수 = N - 2층에 도달하는 경우의 수  + N - 1 층에 도달하는 경우의 수 
//
//    int TargetFloor = 0;
//    std::cin >> TargetFloor;
//
//    std::vector<int> DP(TargetFloor + 1, 0);
//
//    DP[1] = 1;
//    DP[2] = 2;
//
//    for (int i = 3; i <= TargetFloor; i++)
//    {
//        DP[i] = DP[i - 1] + DP[i - 2];
//    }
//
//    std::cout << DP[TargetFloor] << std::endl;
//    return 0;
//}