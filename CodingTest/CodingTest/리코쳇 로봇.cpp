//#include <string>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//struct Data
//{
//    int X = 0;
//    int Y = 0;
//    int Count = 0;
//};
//
//int solution(vector<string> board)
//{
//    std::pair<int, int> StartPos = { 0, 0 };
//
//    for (int i = 0; i < board.size(); i++)
//    {
//        for (int j = 0; j < board[i].size(); j++)
//        {
//            if (board[i][j] == 'R')
//            {
//                StartPos = { i, j };
//                break;
//            }
//        }
//    }
//
//    std::queue<Data> BFS;
//    BFS.push({ StartPos.second, StartPos.first, 0 });
//
//    std::vector<std::vector<std::vector<bool>>> IsVisit;
//    IsVisit.resize(board.size());
//
//    for (int i = 0; i < IsVisit.size(); i++)
//    {
//        IsVisit[i].resize(board[0].size(), std::vector<bool>(4, false));
//    }
//
//    std::vector<int> DirX = { 0, 1, 0, -1 };
//    std::vector<int> DirY = { 1, 0, -1, 0 };
//
//    int Answer = INT_MAX;
//
//    while (BFS.size() > 0)
//    {
//        Data CurData = BFS.front();
//        BFS.pop();
//
//        if (board[CurData.Y][CurData.X] == 'G')
//        {
//            Answer = std::min(Answer, CurData.Count);
//            continue;
//        }
//
//        for (int i = 0; i < 4; i++)
//        {
//            if (IsVisit[CurData.Y][CurData.X][i] == true)
//            {
//                continue;
//            }
//
//            int NextX = CurData.X + DirX[i];
//            int NextY = CurData.Y + DirY[i];
//
//            bool CanGo = false;
//
//            while (true)
//            {
//                if (NextX < 0 || NextY < 0 || NextX >= board[0].size() || NextY >= board.size())
//                {
//                    NextX -= DirX[i];
//                    NextY -= DirY[i];
//                    break;
//                }
//
//                if (board[NextY][NextX] == 'D')
//                {
//                    NextX -= DirX[i];
//                    NextY -= DirY[i];
//                    break;
//                }
//
//                NextX += DirX[i];
//                NextY += DirY[i];
//            }
//
//            IsVisit[CurData.Y][CurData.X][i] = true;
//            BFS.push({ NextX, NextY, CurData.Count + 1 });
//        }
//    }
//
//    if (Answer == INT_MAX)
//    {
//        Answer = -1;
//    }
//
//    return Answer;
//}