//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct Data
//{
//    int Y = 0;
//    int X = 0;
//    int Time = 0;
//};
//
//int solution(vector<string> maps)
//{
//    int Height = maps.size();
//    int Width = maps[0].size();
//
//    std::queue<Data> BFS;
//    std::vector<std::vector<bool>> isVisit(Height, std::vector<bool>(Width, false));
//
//    for (int i = 0; i < Height; i++)
//    {
//        for (int j = 0; j < Width; j++)
//        {
//            if (maps[i][j] == 'S')
//            {
//                BFS.push({ i, j, 0 });
//                break;
//            }
//        }
//
//        if (BFS.size() > 0)
//        {
//            break;
//        }
//    }
//
//    std::vector<int> DirX = { 0, 1, 0, -1 };
//    std::vector<int> DirY = { 1, 0, -1, 0 };
//
//    int Answer = 0;
//    bool isPull = false;
//
//    while (BFS.size() > 0)
//    {
//        Data CurPos = BFS.front();
//        BFS.pop();
//
//        if (maps[CurPos.Y][CurPos.X] == 'L')
//        {
//            while (BFS.size() > 0)
//            {
//                BFS.pop();
//            }
//
//            for (int i = 0; i < isVisit.size(); i++)
//            {
//                for (int j = 0; j < isVisit[i].size(); j++)
//                {
//                    isVisit[i][j] = false;
//                }
//            }
//
//            isVisit[CurPos.Y][CurPos.X] = true;
//            BFS.push(CurPos);
//
//            isPull = true;
//        }
//
//        if (isPull == true && maps[CurPos.Y][CurPos.X] == 'E')
//        {
//            Answer = CurPos.Time;
//            break;
//        }
//
//        for (int i = 0; i < 4; i++)
//        {
//            std::pair<int, int> NextPos = { CurPos.Y + DirY[i], CurPos.X + DirX[i] };
//
//            if (NextPos.first < 0 || NextPos.first >= Height || NextPos.second < 0 || NextPos.second >= Width)
//            {
//                continue;
//            }
//
//            if (maps[NextPos.first][NextPos.second] == 'X')
//            {
//                continue;
//            }
//
//            if (isVisit[NextPos.first][NextPos.second] == true)
//            {
//                continue;
//            }
//
//            isVisit[NextPos.first][NextPos.second] = true;
//            BFS.push({ NextPos.first, NextPos.second, CurPos.Time + 1 });
//        }
//    }
//
//    return Answer;
//}
//
//int main()
//{
//    solution({"SOOOL", "XXXXO", "OOOOO", "OXXXX", "OOOOE"});
//}