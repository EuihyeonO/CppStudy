//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//long long GetFactorial(int _Num)
//{
//    long long Factorial = 1;
//    int Mul = 1;
//
//    while (Mul <= _Num)
//    {
//        Factorial *= Mul;
//        Mul++;
//    }
//
//    return Factorial;
//}
//
//vector<int> solution(int n, long long k)
//{
//    std::set<int> Nums;
//    for (int i = 1; i <= n; i++)
//    {
//        Nums.insert(i);
//    }
//
//    std::vector<int> Sequence(n, -1);
//
//    for (int i = 1; i < n; i++)
//    {
//        long long CurFactorial = GetFactorial(n - i);
//        long long Share = (k - 1) / CurFactorial;
//
//        int Count = 0;
//
//        std::set<int>::iterator CurIter = Nums.begin();
//        std::set<int>::iterator EndIter = Nums.end();
//
//        while (CurIter != EndIter)
//        {
//            if (Count == Share)
//            {
//                Sequence[i - 1] = *CurIter;
//                CurIter = Nums.erase(CurIter);
//                break;
//            }
//
//            Count++;
//            CurIter++;
//        }
//
//        k -= Share * CurFactorial;
//    }
//
//    std::cout << Nums.size();
//
//    Sequence[n - 1] = *Nums.begin();
//
//    return Sequence;
//}