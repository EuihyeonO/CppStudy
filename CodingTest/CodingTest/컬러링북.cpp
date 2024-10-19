//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//std::vector<int> DirX;
//std::vector<int> DirY;
//
//int BFS(const vector<vector<int>>& _Map, std::vector<std::vector<bool>>& _isVisit, int _X, int _Y, int _Color)
//{
//    _isVisit[_Y][_X] = true;
//
//    std::queue<std::pair<int, int>> BFS;
//    BFS.push({ _Y, _X });
//
//    int Count = 1;
//
//    while (BFS.size() > 0)
//    {
//        std::pair<int, int> CurPos = BFS.front();
//        BFS.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            std::pair<int, int> NextPos = { CurPos.first + DirY[i], CurPos.second + DirX[i] };
//
//            if (NextPos.first < 0 || NextPos.second < 0 || NextPos.first >= _Map.size() || NextPos.second >= _Map[0].size())
//            {
//                continue;
//            }
//
//            if (_isVisit[NextPos.first][NextPos.second] == true)
//            {
//                continue;
//            }
//
//            if (_Map[NextPos.first][NextPos.second] == _Color)
//            {
//                Count++;
//                _isVisit[NextPos.first][NextPos.second] = true;
//                BFS.push(NextPos);
//            }
//        }
//    }
//
//    return Count;
//}
//
//vector<int> solution(int m, int n, vector<vector<int>> picture)
//{
//    std::vector<std::vector<bool>> isVisit(m, std::vector<bool>(n, false));
//
//    DirX = { 1, 0, -1, 0 };
//    DirY = { 0, 1, 0, -1 };
//
//    int MaxArea = 0;
//    int AreaCount = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            int CurColor = picture[i][j];
//
//            if (isVisit[i][j] == false && CurColor != 0)
//            {
//                AreaCount++;
//                MaxArea = std::max(MaxArea, BFS(picture, isVisit, j, i, CurColor));
//            }
//        }
//    }
//
//    return { AreaCount, MaxArea };
//}