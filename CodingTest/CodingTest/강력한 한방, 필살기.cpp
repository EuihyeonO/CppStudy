//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//struct Knight
//{
//    bool isMine = false;
//    int Att = -1;
//    int Hp = -1;
//};
//
//int BingoTest(std::vector<std::vector<Knight>>& _Board, int _Y, int _X)
//{
//    int Score = 0;
//    //가로
//    if (_X == 0)
//    {
//        if (_Board[_Y][_X].isMine == _Board[_Y][_X + 1].isMine && _Board[_Y][_X + 1].isMine == _Board[_Y][_X + 2].isMine)
//        {
//            Score += _Board[_Y][_X].Att;
//            Score += _Board[_Y][_X + 1].Att;
//            Score += _Board[_Y][_X + 2].Att;
//        }
//    }
//
//    //세로
//    if (_Y <= 1)
//    {
//        if (_Board[_Y][_X].isMine == _Board[_Y + 1][_X].isMine && _Board[_Y + 1][_X].isMine == _Board[_Y + 2][_X].isMine)
//        {
//            Score += _Board[_Y][_X].Att;
//            Score += _Board[_Y + 1][_X].Att;
//            Score += _Board[_Y + 2][_X].Att;
//        }
//    }
//
//    //우측 아래 대각선
//    if (_Y <= 1 && _X == 0)
//    {
//        if (_Board[_Y][_X].isMine == _Board[_Y + 1][_X + 1].isMine && _Board[_Y + 1][_X + 1].isMine == _Board[_Y + 2][_X + 2].isMine)
//        {
//            Score += _Board[_Y][_X].Att;
//            Score += _Board[_Y + 1][_X + 1].Att;
//            Score += _Board[_Y + 2][_X + 2].Att;
//        }
//    }
//
//    //좌측 아래 대각선
//    if (_Y <= 1 && _X == 2)
//    {
//        if (_Board[_Y][_X].isMine == _Board[_Y + 1][_X - 1].isMine && _Board[_Y + 1][_X - 1].isMine == _Board[_Y + 2][_X - 2].isMine)
//        {
//            Score += _Board[_Y][_X].Att;
//            Score += _Board[_Y + 1][_X - 1].Att;
//            Score += _Board[_Y + 2][_X - 2].Att;
//        }
//    }
//
//    return Score;
//}
//
//int GetScore(std::vector<std::vector<Knight>>& _Board)
//{
//    int Score = 0;
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (_Board[i][j].Att == -1 || _Board[i][j].isMine == false)
//            {
//                continue;
//            }
//
//            Score += BingoTest(_Board, i, j);
//        }
//    }
//
//    return Score;
//}
//
//int main()
//{
//    std::vector<std::vector<Knight>> Board(4, std::vector<Knight>(3));
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            std::string Input;
//            std::cin >> Input;
//
//            if (Input == "X")
//            {
//                Board[i][j] = Knight();
//            }
//            else
//            {
//                Knight NewKnight;
//
//                if (Input[0] == 'O')
//                {
//                    NewKnight.isMine = false;
//                }
//                else
//                {
//                    NewKnight.isMine = true;
//                }
//
//                int Index = Input.find("/");
//                std::string Att = Input.substr(1, Index - 1);
//                std::string Hp = Input.substr(Index + 1, Input.size() - Index - 1);
//
//                NewKnight.Att = std::stoi(Att);
//                NewKnight.Hp = std::stoi(Hp);
//
//                Board[i][j] = NewKnight;
//            }
//        }
//    }
//
//    int NumWaitKnight = 0;
//    std::cin >> NumWaitKnight;
//
//    std::vector<Knight> WaitKnight(NumWaitKnight);
//    for (int i = 0; i < NumWaitKnight; i++)
//    {
//        std::string Input;
//        std::cin >> Input;
//
//        Knight NewKnight;
//        NewKnight.isMine = true;
//
//        int Index = Input.find("/");
//        std::string Att = Input.substr(1, Index - 1);
//        std::string Hp = Input.substr(Index + 1, Input.size() - Index - 1);
//
//        NewKnight.Att = std::stoi(Att);
//        NewKnight.Hp = std::stoi(Hp);
//
//        WaitKnight[i] = NewKnight;
//    }
//
//    Knight Empty;
//
//    int NormalScore = 0;
//    int AddScore = 0;
//    int MoveScore = 0;
//
//    NormalScore = GetScore(Board);
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (Board[i][j].Att == -1)
//            {
//                for (int k = 0; k < NumWaitKnight; k++)
//                {
//                    Knight Save = Board[i][j];
//
//                    Board[i][j] = WaitKnight[k];
//
//                    AddScore = std::max(AddScore, GetScore(Board));
//
//                    Board[i][j] = Save;
//                }
//            }
//        }
//    }
//
//    std::vector<int> DirX = { -1, -1, -1, 0, 1, 1, 1, 0 };
//    std::vector<int> DirY = { 1, 0, -1, -1, -1, 0, 1, 1 };
//
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (Board[i][j].isMine == false || Board[i][j].Att == -1)
//            {
//                continue;
//            }
//
//            for (int k = 0; k < 8; k++)
//            {
//                int NextX = j + DirX[k];
//                int NextY = i + DirY[k];
//
//                if (NextX < 0 || NextY < 0 || NextX >= 3 || NextY >= 4)
//                {
//                    continue;
//                }
//
//                Knight Save = Board[NextY][NextX];
//
//                if (Board[NextY][NextX].Att == -1)
//                {
//                    Board[NextY][NextX] = Board[i][j];
//                    Board[i][j] = Empty;
//
//                    MoveScore = std::max(MoveScore, GetScore(Board));
//
//                    Board[i][j] = Board[NextY][NextX];
//                    Board[NextY][NextX] = Save;
//                }
//                else if (Board[NextY][NextX].isMine == false && Board[NextY][NextX].Att >= 0)
//                {
//                    if (Board[NextY][NextX].Hp >= Board[i][j].Att || Board[NextY][NextX].Att >= Board[i][j].Hp)
//                    {
//                        continue;
//                    }
//
//                    Board[NextY][NextX] = Board[i][j];
//                    Board[i][j] = Empty;
//
//                    MoveScore = std::max(MoveScore, GetScore(Board));
//
//                    Board[i][j] = Board[NextY][NextX];
//                    Board[NextY][NextX] = Save;
//                }
//            }
//        }
//    }
//
//    int Answer = std::max(NormalScore, AddScore);
//    Answer = std::max(Answer, MoveScore);
//
//    std::cout << Answer;
//
//    return 0;
//}