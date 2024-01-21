//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int brown, int yellow)
//{
//
//    for (int i = 1; i <= yellow; i++)
//    {
//        if (yellow % i != 0)
//        {
//            continue;
//        }
//
//        int V = 0;
//        int H = 0;
//
//        int Shared = yellow / i;
//
//        if (i >= Shared)
//        {
//            V = i;
//            H = Shared;
//        }
//
//        if (((V + 2) * (H + 2) - yellow) == brown)
//        {
//            return { V + 2, H + 2 };
//        }
//    }
//}