//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> board)
//{
//    std::vector<std::vector<int>> DP(board.size(), std::vector<int>(board[0].size()));
//
//    int MaxSize = 0;
//
//    for (int i = 0; i < board.size(); i++)
//    {
//        for (int j = 0; j < board[i].size(); j++)
//        {
//            if (i == 0 || j == 0)
//            {
//                MaxSize = std::max(MaxSize, board[i][j]);
//                continue;
//            }
//
//            if (board[i][j] == 0)
//            {
//                continue;
//            }
//
//            int MinSize = std::min(board[i - 1][j], board[i][j - 1]);
//            MinSize = std::min(MinSize, board[i - 1][j - 1]);
//
//            board[i][j] = MinSize + 1;
//
//            MaxSize = std::max(MaxSize, board[i][j]);
//        }
//    }
//
//
//    return MaxSize * MaxSize;
//}