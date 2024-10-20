//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//int DFS(const std::vector<std::vector<int>>& _Link, int _CurNode, int _PrevNode)
//{
//    if (_Link[_CurNode].size() == 1 && _Link[_CurNode][0] == _PrevNode)
//    {
//        return 1;
//    }
//
//    int Value = 1;
//
//    for (int i = 0; i < _Link[_CurNode].size(); i++)
//    {
//        if (_Link[_CurNode][i] != _PrevNode)
//        {
//            Value += DFS(_Link, _Link[_CurNode][i], _CurNode);
//        }
//    }
//
//    return Value;
//}
//
//int Function(const std::vector<std::vector<int>>& _Link, int _Node)
//{
//    int Answer = 999999999;
//
//    for (int i = 0; i < _Link[_Node].size(); i++)
//    {
//        int CurValue = DFS(_Link, _Link[_Node][i], _Node);
//        Answer = std::min(Answer, std::abs((int)_Link.size() - 2 * CurValue));
//    }
//
//    return Answer;
//}
//
//int solution(int n, vector<vector<int>> wires)
//{
//    std::vector<std::vector<int>> Link(n);
//
//    for (int i = 0; i < wires.size(); i++)
//    {
//        int Left = wires[i][0];
//        int Right = wires[i][1];
//
//        Link[Left - 1].push_back(Right - 1);
//        Link[Right - 1].push_back(Left - 1);
//    }
//
//    int Answer = 100000000;
//
//    for (int i = 0; i < n; i++)
//    {
//        int Value = Function(Link, 2);
//        Answer = std::min(Answer, Value);
//    }
//
//    return Answer;
//}