//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> a)
//{
//    std::vector<int> Answer;
//    Answer.reserve(a.size());
//
//    std::vector<std::pair<int, int>> Mins(a.size());
//    Mins[0].first = a[0];
//
//    for (int i = 1; i < a.size(); i++)
//    {
//        Mins[i].first = std::min(Mins[i - 1].first, a[i - 1]);
//    }
//
//    Mins[a.size() - 1].second = a[a.size() - 1];
//
//    for (int i = a.size() - 2; i >= 0; i--)
//    {
//        Mins[i].second = std::min(Mins[i + 1].second, a[i + 1]);
//    }
//
//    for (int i = 0; i < a.size(); i++)
//    {
//        bool LeftMin = Mins[i].first < a[i];
//        bool RightMin = Mins[i].second < a[i];
//
//        if (!(LeftMin == true && RightMin == true))
//        {
//            Answer.push_back(a[i]);
//        }
//    }
//
//    return Answer.size();
//}