//#include <string>
//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//long long GetMaxDivisor(const long long& _Num)
//{
//    long long Return = 1;
//
//    for (long long i = 2; i * i <= _Num; i++)
//    {
//        if (_Num % i == 0)
//        {
//            Return = i;
//
//            if (_Num / i <= 10000000)
//            {
//                Return = _Num / i;
//                break;
//            }
//        }
//    }
//
//    return Return;
//}
//
//vector<int> solution(long long begin, long long end)
//{
//    long long Length = end - begin;
//    std::vector<int> Nums(end - begin + 1, 0);
//
//    for (long long i = begin; i <= end; i++)
//    {
//        if (i == 1)
//        {
//            Nums[0] = 0;
//            continue;
//        }
//
//        int Index = Length - (end - i);
//
//        Nums[Index] = GetMaxDivisor(i);
//    }
//
//    return Nums;
//}