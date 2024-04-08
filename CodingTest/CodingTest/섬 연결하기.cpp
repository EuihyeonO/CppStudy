//#include <string>
//#include <vector>
//#include <climits>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//std::vector<int> Parents;
//
//int GetParents(const int& _Index)
//{
//    int CurParentIndex = Parents[_Index];
//    if (_Index != CurParentIndex)
//    {
//        return GetParents(CurParentIndex);
//    }
//    else
//    {
//        return _Index;
//    }
//}
//
//void SetParents(const int& _Left, const int& _Right)
//{
//    int LeftParents = GetParents(_Left);
//    int RightParents = GetParents(_Right);
//
//    if (LeftParents < RightParents)
//    {
//        Parents[RightParents] = LeftParents;
//        Parents[_Right] = LeftParents;
//    }
//    else
//    {
//        Parents[LeftParents] = RightParents;
//        Parents[_Left] = RightParents;
//    }
//}
//
//bool isCycle(const int& _Left, const int& _Right)
//{
//    int LeftParents = GetParents(_Left);
//    int RightParents = GetParents(_Right);
//
//    if (LeftParents == RightParents)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
//struct Node
//{
//    int Start = 0;
//    int End = 0;
//    int Distance = 0;
//
//    bool operator<(const Node& _Other)
//    {
//        return Distance < _Other.Distance;
//    }
//};
//
//int solution(int n, vector<vector<int>> costs)
//{
//    std::vector<Node> Nodes(costs.size());
//    for (int i = 0; i < costs.size(); i++)
//    {
//        Nodes[i].Start = costs[i][0];
//        Nodes[i].End = costs[i][1];
//        Nodes[i].Distance = costs[i][2];
//    }
//
//    std::sort(Nodes.begin(), Nodes.end());
//
//    Parents.resize(n);
//    for (int i = 0; i < n; i++)
//    {
//        Parents[i] = i;
//    }
//
//    int RealCost = 0;
//    for (int i = 0; i < Nodes.size(); i++)
//    {
//        if (isCycle(Nodes[i].Start, Nodes[i].End) == false)
//        {
//            RealCost += Nodes[i].Distance;
//            SetParents(Nodes[i].Start, Nodes[i].End);
//        }
//    }
//
//    return RealCost;
//}