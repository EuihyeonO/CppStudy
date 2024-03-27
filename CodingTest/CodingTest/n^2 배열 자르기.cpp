//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(int n, long long left, long long right)
//{
//    vector<int> answer;
//    answer.reserve(right - left + 1);
//    for (long long i = left; i <= right; i++)
//    {
//        long long X = i / n;
//        long long Y = i % n;
//
//        long long CurValue = std::max(X, Y);
//
//        answer.push_back(CurValue + 1);
//    }
//
//    return answer;
//}