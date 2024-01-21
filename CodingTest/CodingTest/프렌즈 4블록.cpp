//#include <string>
//#include <vector>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//int solution(int m, int n, vector<string> board)
//{
//    int BoardX = n;
//    int BoardY = m;
//
//    vector<string> Copy = board;
//    set<pair<int, int>> ClearPos;
//
//    int ClearCount = 0;
//
//    while (true)
//    {
//        for (int i = 0; i < BoardY - 1; i++)
//        {
//            for (int j = 0; j < BoardX - 1; j++)
//            {
//                if (Copy[i][j] != '*' && Copy[i][j] == Copy[i + 1][j] &&
//                    Copy[i][j] == Copy[i + 1][j + 1] && Copy[i][j] == Copy[i][j + 1])
//                {
//                    ClearPos.insert({ i, j });
//                    ClearPos.insert({ i + 1, j });
//                    ClearPos.insert({ i, j + 1 });
//                    ClearPos.insert({ i + 1, j + 1 });
//                }
//            }
//        }
//
//        ClearCount += ClearPos.size();
//
//        if (ClearPos.size() == 0)
//        {
//            break;
//        }
//
//        set<pair<int, int>>::iterator Start = ClearPos.begin();
//        set<pair<int, int>>::iterator End = ClearPos.end();
//
//        while (Start != End)
//        {
//            Copy[Start->first][Start->second] = '*';
//            Start++;
//        }
//
//        ClearPos.clear();
//
//        for (int i = BoardY - 2; i >= 0; i--)
//        {
//            for (int j = 0; j < BoardX; j++)
//            {
//                if (Copy[i][j] != '*' && Copy[i + 1][j] == '*')
//                {
//                    int Index = i;
//
//                    while (Index < BoardY - 1 && Copy[Index + 1][j] == '*')
//                    {
//                        Index++;
//                    }
//
//                    char CopyChar = Copy[Index][j];
//                    Copy[Index][j] = Copy[i][j];
//                    Copy[i][j] = CopyChar;
//                }
//            }
//        }
//    }
//
//    return ClearCount;
//}