//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long Count = 0;
//
//void DFS(std::vector<long long>& _Weight, const std::vector<std::vector<int>>& _Link, std::vector<bool>& _isVisit, int _CurIndex, int _PrevIndex)
//{
//    _isVisit[_CurIndex] = true;
//
//    for (int i = 0; i < _Link[_CurIndex].size(); i++)
//    {
//        int NextIndex = _Link[_CurIndex][i];
//
//        if (_isVisit[NextIndex] == false)
//        {
//            DFS(_Weight, _Link, _isVisit, NextIndex, _CurIndex);
//        }
//    }
//
//    if (_PrevIndex != -1)
//    {
//        Count += abs(_Weight[_CurIndex]);
//
//        _Weight[_PrevIndex] += _Weight[_CurIndex];
//        _Weight[_CurIndex] = 0;
//    }
//}
//
//long long solution(vector<int> a, vector<vector<int>> edges)
//{
//    std::vector<long long> CastA(a.size());
//    for (int i = 0; i < a.size(); i++)
//    {
//        CastA[i] = a[i];
//    }
//
//    std::vector<std::vector<int>> Link(a.size());
//
//    for (int i = 0; i < edges.size(); i++)
//    {
//        int Node_1 = edges[i][0];
//        int Node_2 = edges[i][1];
//
//        Link[Node_1].push_back(Node_2);
//        Link[Node_2].push_back(Node_1);
//    }
//
//    std::vector<bool> isVisit(a.size(), false);
//
//    DFS(CastA, Link, isVisit, 0, -1);
//
//    for (int i = 0; i < CastA.size(); i++)
//    {
//        if (CastA[i] != 0)
//        {
//            Count = -1;
//            break;
//        }
//    }
//
//    return Count;
//}