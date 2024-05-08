//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int BombX(const std::vector<std::vector<int>>& _Map, int _PosX, int _PosY, int _BombSize)
//{
//    int Return = 0;
//    Return += _Map[_PosY][_PosX];
//
//    for (int i = 1; i <= _BombSize; i++)
//    {
//        if (_PosY - i >= 0 && _PosX - i >= 0)
//        {
//            Return += _Map[_PosY - i][_PosX - i];
//        }
//
//        if (_PosY + i < _Map.size() && _PosX - i >= 0)
//        {
//            Return += _Map[_PosY + i][_PosX - i];
//        }
//
//        if (_PosY - i >= 0 && _PosX + i < _Map.size())
//        {
//            Return += _Map[_PosY - i][_PosX + i];
//        }
//
//        if (_PosY + i < _Map.size() && _PosX + i < _Map.size())
//        {
//            Return += _Map[_PosY + i][_PosX + i];
//        }
//    }
//
//    return Return;
//}
//
//int BombCross(const std::vector<std::vector<int>>& _Map, int _PosX, int _PosY, int _BombSize)
//{
//    int Return = 0;
//    Return += _Map[_PosY][_PosX];
//
//    for (int i = 1; i <= _BombSize; i++)
//    {
//        if (_PosY - i >= 0)
//        {
//            Return += _Map[_PosY - i][_PosX];
//        }
//
//        if (_PosY + i < _Map.size())
//        {
//            Return += _Map[_PosY + i][_PosX];
//        }
//
//        if (_PosX - i >= 0)
//        {
//            Return += _Map[_PosY][_PosX - i];
//        }
//
//        if (_PosX + i < _Map.size())
//        {
//            Return += _Map[_PosY][_PosX + i];
//        }
//    }
//
//    return Return;
//}
//
//int main()
//{
//    int MapSize = 0;
//    std::cin >> MapSize;
//
//    int BombRange = 0;
//    std::cin >> BombRange;
//
//    std::vector<std::vector<int>> Map(MapSize, std::vector<int>(MapSize, 0));
//    for (int i = 0; i < MapSize; i++)
//    {
//        for (int j = 0; j < MapSize; j++)
//        {
//            std::cin >> Map[i][j];
//        }
//    }
//
//    int MaxValue = 0;
//
//    for (int i = 0; i < MapSize; i++)
//    {
//        for (int j = 0; j < MapSize; j++)
//        {
//            int XValue = BombX(Map, j, i, BombRange);
//            int CrossValue = BombCross(Map, j, i, BombRange);
//
//            int BiggerValue = std::max(XValue, CrossValue);
//            MaxValue = std::max(MaxValue, BiggerValue);
//        }
//    }
//
//    std::cout << MaxValue;
//
//    return 0;
//}