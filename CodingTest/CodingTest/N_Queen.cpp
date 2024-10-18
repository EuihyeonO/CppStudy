//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//std::vector<std::vector<char>> Board;
//int Answer = 0;
//
//void DFS(int _X)
//{
//    if (_X >= Board[0].size())
//    {
//        return;
//    }
//
//    for (int i = 0; i < Board.size(); i++)
//    {
//        bool CanMove = true;
//
//        for (int j = 0; j < _X - 1; j++)
//        {
//            if (Board[i][j] == 'Q')
//            {
//                CanMove = false;
//                break;
//            }
//        }
//
//        int YOffset = 1;
//
//        for (int j = _X - 1; j >= 0; j--)
//        {
//            if (i + YOffset < Board.size() && Board[i + YOffset][j] == 'Q')
//            {
//                CanMove = false;
//                break;
//            }
//
//            if (i - YOffset >= 0 && Board[i - YOffset][j] == 'Q')
//            {
//                CanMove = false;
//                break;
//            }
//
//            YOffset++;
//        }
//
//        if (CanMove == true)
//        {
//            Board[i][_X] = 'Q';
//            DFS(_X + 1);
//            Board[i][_X] = 'X';
//        }
//    }
//
//    if (_X == Board.size() - 1)
//    {
//        for (int i = 0; i < Board.size(); i++)
//        {
//            for (int j = 0; j < Board[i].size(); j++)
//            {
//                std::cout << Board[i][j] << " ";
//            }
//
//            std::cout << "\n";
//        }
//
//        Answer++;
//    }
//}
//
//int solution(int n)
//{
//    Board.resize(n, std::vector<char>(n, 'X'));
//    DFS(0);
//
//    return Answer;
//}
//
//int main()
//{
//    solution(4);
//    return 0;
//}