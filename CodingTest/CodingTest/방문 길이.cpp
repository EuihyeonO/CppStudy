//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string dirs)
//{
//    pair<int, int> Pos = { 0, 0 };
//    vector<pair<pair<int, int>, pair<int, int>>> Vec;
//    Vec.reserve(110);
//
//    for (int i = 0; i < dirs.size(); i++)
//    {
//        pair<int, int> StartPos = Pos;
//        pair<int, int> DestPos = { 0, 0 };
//
//        if (dirs[i] == 'L')
//        {
//            if (Pos.first <= -5)
//            {
//                continue;
//            }
//
//            Pos = { Pos.first - 1, Pos.second };
//            DestPos = Pos;
//        }
//
//        else if (dirs[i] == 'R')
//        {
//            if (Pos.first >= 5)
//            {
//                continue;
//            }
//
//            Pos = { Pos.first + 1, Pos.second };
//            DestPos = Pos;
//        }
//
//        else if (dirs[i] == 'U')
//        {
//            if (Pos.second >= 5)
//            {
//                continue;
//            }
//
//            Pos = { Pos.first, Pos.second + 1 };
//            DestPos = Pos;
//        }
//
//        else if (dirs[i] == 'D')
//        {
//            if (Pos.second <= -5)
//            {
//                continue;
//            }
//
//            Pos = { Pos.first, Pos.second - 1 };
//            DestPos = Pos;
//        }
//
//        int index = 0;
//
//        for (index = 0; index < Vec.size(); index++)
//        {
//            if (Vec[index].first == StartPos && Vec[index].second == DestPos)
//            {
//                break;
//            }
//            else if (Vec[index].first == DestPos && Vec[index].second == StartPos)
//            {
//                break;
//            }
//        }
//
//        if (index == Vec.size())
//        {
//            Vec.push_back({ StartPos, DestPos });
//        }
//    }
//
//    return Vec.size();
//}