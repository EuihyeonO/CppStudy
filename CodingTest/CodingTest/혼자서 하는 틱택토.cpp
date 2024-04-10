//#include <string>
//#include <vector>
//
//using namespace std;
//bool isComplete(const vector<string>& _Board, char _OX)
//{
//    //가로체크
//    for (int i = 0; i < 3; i++)
//    {
//        if (_Board[i][0] == _Board[i][1] && _Board[i][1] == _Board[i][2] && _Board[i][0] == _OX)
//        {
//            return true;
//        }
//    }
//
//    //세로체크
//    for (int i = 0; i < 3; i++)
//    {
//        if (_Board[0][i] == _Board[1][i] && _Board[1][i] == _Board[2][i] && _Board[0][i] == _OX)
//        {
//            return true;
//        }
//    }
//
//    //대각선 체크
//    if (_Board[0][0] == _Board[1][1] && _Board[1][1] == _Board[2][2] && _Board[0][0] == _OX)
//    {
//        return true;
//    }
//
//    if (_Board[0][2] == _Board[1][1] && _Board[1][1] == _Board[2][0] && _Board[0][2] == _OX)
//    {
//        return true;
//    }
//
//    return false;
//}
//
//int solution(vector<string> board)
//{
//    //경우의수 1
//    //O의 개수 < X의 개수
//
//    //경우의수 2
//    //O와 X가 둘 다 3개를 완성한 경우
//
//    //경우의 수 3
//    //O가 완성했는데, X의 개수가 O보다 같거나 많은 경우
//
//    //경우의 수 4
//    //X가 완성했는데, O가 X보다 수가 많은 경우
//
//    int OCount = 0;
//    int XCount = 0;
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (board[i][j] == 'O')
//            {
//                OCount++;
//            }
//            else if (board[i][j] == 'X')
//            {
//                XCount++;
//            }
//            else
//            {
//                continue;
//            }
//        }
//    }
//
//    bool isCompleteO = isComplete(board, 'O');
//    bool isCompleteX = isComplete(board, 'X');
//
//    if (XCount > OCount)
//    {
//        return 0;
//    }
//    else if (OCount - XCount > 1)
//    {
//        return 0;
//    }
//    else if (isCompleteO == true && isCompleteX == true)
//    {
//        return 0;
//    }
//    else if (isCompleteO == true && isCompleteX != true && XCount >= OCount)
//    {
//        return 0;
//    }
//    else if (isCompleteO != true && isCompleteX == true && OCount > XCount)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//}