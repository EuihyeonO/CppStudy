//#include <iostream>
//#include <vector>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int Recursive(long long x)
//{
//    if (x == 0)
//    {
//        return 0;
//    }
//    else if (x == 1)
//    {
//        return 1;
//    }
//    else if (x % 2 == 0)
//    {
//        return Recursive(x / 2);
//    }
//    else
//    {
//        return 1 - Recursive(x / 2);
//    }
//}
//
//int main()
//{
//    Init();
//
//    long long K;
//    std::cin >> K;
//
//    // k는 0부터 시작
//    std::cout << Recursive(K - 1);
//
//    return 0;
//}
