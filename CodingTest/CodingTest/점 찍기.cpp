//#include <string>
//#include <cmath>
//
//using namespace std;
//
//long long solution(int k, int d)
//{
//    int Interval = k;
//    int Distance = d;
//
//    long long DotCount = 0;
//    for (int i = 0; i <= Distance; i += Interval)
//    {
//        long long SqrtValue = sqrt(pow(Distance, 2) - pow(i, 2)) / k;
//        SqrtValue++;
//
//        DotCount += SqrtValue;
//    }
//
//    return DotCount;
//}