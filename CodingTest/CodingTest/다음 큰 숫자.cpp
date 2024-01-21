//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n)
//{
//    int CopyN = n;
//    int nCount = 0;
//
//    while (CopyN > 0)
//    {
//        if (CopyN % 2 == 1)
//        {
//            nCount++;
//        }
//
//        CopyN /= 2;
//    }
//
//    n++;
//    int Count1 = 0;
//
//    while (true)
//    {
//        CopyN = n;
//
//        while (CopyN > 0)
//        {
//            if (CopyN % 2 == 1)
//            {
//                Count1++;
//            }
//
//            CopyN /= 2;
//        }
//
//        if (nCount == Count1)
//        {
//            break;
//        }
//
//        Count1 = 0;
//        n++;
//    }
//
//    return n;
//}