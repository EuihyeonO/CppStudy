//#include <iostream>
//#include <vector>
//
//void RotateFunc(std::vector<std::vector<int>>& _Board)
//{
//    int Width = _Board.size();
//
//    for (int i = 0; i < Width; i++)
//    {
//        for (int j = 1; j < Width; j++)
//        {
//            if (_Board[i][j - 1] > _Board[i][j])
//            {
//                std::swap(_Board[i][j - 1], _Board[i][j]);
//            }
//        }
//    }
//
//    std::vector<std::vector<int>> RotateBoard(Width, std::vector<int>(Width));
//
//    for (int i = 0; i < Width; i++)
//    {
//        for (int j = 0; j < Width; j++)
//        {
//            RotateBoard[Width - i - 1][j] = _Board[j][i];
//        }
//    }
//
//    std::swap(_Board, RotateBoard);
//}
//
//int main()
//{
//    int NumWidth = 0;
//    int NumRotate = 0;
//    std::cin >> NumWidth >> NumRotate;
//
//    std::vector<std::vector<int>> Board(NumWidth, std::vector<int>(NumWidth));
//
//    for (int i = 0; i < NumWidth; i++)
//    {
//        for (int j = 0; j < NumWidth; j++)
//        {
//            std::cin >> Board[i][j];
//        }
//    }
//
//    if (NumRotate == 1)
//    {
//        RotateFunc(Board);
//
//        for (int i = 0; i < NumWidth; i++)
//        {
//            for (int j = 0; j < NumWidth; j++)
//            {
//                std::cout << Board[i][j] << " ";
//            }
//
//            std::cout << "\n";
//        }
//    }
//    else
//    {
//        RotateFunc(Board);
//        NumRotate--;
//
//        NumRotate %= 4;
//
//        if (NumRotate == 0)
//        {
//            NumRotate = 4;
//        }
//
//        for (int i = 0; i < NumRotate; i++)
//        {
//            RotateFunc(Board);
//        }
//
//        for (int i = 0; i < NumWidth; i++)
//        {
//            for (int j = 0; j < NumWidth; j++)
//            {
//                std::cout << Board[i][j] << " ";
//            }
//
//            std::cout << "\n";
//        }
//    }
//
//    return 0;
//}