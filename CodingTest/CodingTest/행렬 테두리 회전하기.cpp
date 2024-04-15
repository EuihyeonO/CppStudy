//#include <string>
//#include <vector>
//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//vector<int> solution(int rows, int columns, vector<vector<int>> queries)
//{
//    std::vector<std::vector<int>> Board(rows, std::vector<int>(columns, 0));
//
//    int Count = 1;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < columns; j++)
//        {
//            Board[i][j] = Count;
//            Count++;
//        }
//    }
//
//    vector<int> Answer(queries.size());
//
//    for (int i = 0; i < queries.size(); i++)
//    {
//        int Min = INT_MAX;
//
//        int Top = queries[i][0] - 1;
//        int Left = queries[i][1] - 1;
//        int Down = queries[i][2] - 1;
//        int Right = queries[i][3] - 1;
//
//        int Copy = Board[Top][Left];
//
//        for (int j = Left; j < Right; j++)
//        {
//            int Temp = Board[Top][j + 1];
//            Board[Top][j + 1] = Copy;
//            Copy = Temp;
//
//            Min = std::min(Min, Copy);
//        }
//
//        for (int j = Top; j < Down; j++)
//        {
//            int Temp = Board[j + 1][Right];
//            Board[j + 1][Right] = Copy;
//            Copy = Temp;
//
//            Min = std::min(Min, Copy);
//        }
//
//        for (int j = Right; j > Left; j--)
//        {
//            int Temp = Board[Down][j - 1];
//            Board[Down][j - 1] = Copy;
//            Copy = Temp;
//
//            Min = std::min(Min, Copy);
//        }
//
//        for (int j = Down; j > Top; j--)
//        {
//            int Temp = Board[j - 1][Left];
//            Board[j - 1][Left] = Copy;
//            Copy = Temp;
//
//            Min = std::min(Min, Copy);
//        }
//
//        Answer[i] = Min;
//    }
//
//    return Answer;
//}