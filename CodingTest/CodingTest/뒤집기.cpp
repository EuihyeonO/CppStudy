//#include <iostream>
//#include <vector>
//#include <climits>
//
//int main()
//{
//    int NumSize = 0;
//    std::cin >> NumSize;
//
//    std::vector<int> Nums(NumSize, 0);
//    for (int i = 0; i < NumSize; i++)
//    {
//        std::cin >> Nums[i];
//    }
//
//    std::vector<int> DP(NumSize);
//    int Sum = Nums[0];
//    DP[0] = Nums[0];
//
//    for (int i = 1; i < NumSize; i++)
//    {
//        Sum += Nums[i];
//        DP[i] = std::min(Nums[i], DP[i - 1] + Nums[i]);
//    }
//
//    int MinDP = INT_MAX;
//    for (int i = 0; i < NumSize; i++)
//    {
//        MinDP = std::min(MinDP, DP[i]);
//    }
//
//    if (MinDP > 0)
//    {
//        MinDP = 0;
//    }
//
//    std::cout << Sum - 2 * MinDP;
//
//    return 0;
//}