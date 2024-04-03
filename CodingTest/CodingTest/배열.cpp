//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//int solution(int N, vector<vector<int> > road, int K)
//{
//    std::vector<std::vector<int>> Cost(N, std::vector<int>(N, 100000000));
//    std::vector<std::vector<int>> Links(N);
//
//    for (int i = 0; i < road.size(); i++)
//    {
//        int Start = road[i][0];
//        int End = road[i][1];
//        int CurCost = road[i][2];
//
//        if (Cost[Start - 1][End - 1] == 100000000)
//        {
//            Links[Start - 1].push_back(End - 1);
//            Links[End - 1].push_back(Start - 1);
//        }
//
//        Cost[Start - 1][End - 1] = std::min(Cost[Start - 1][End - 1], CurCost);
//        Cost[End - 1][Start - 1] = std::min(Cost[End - 1][Start - 1], CurCost);
//    }
//
//    std::vector<bool> IsVisit(N, false);
//
//    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Dijk;
//    Dijk.push({ 0, 0 });
//
//    std::vector<int> CostToStart(N, 100000000);
//    CostToStart[0] = 0;
//
//    while (Dijk.size() > 0)
//    {
//        int CurCost = Dijk.top().first;
//        int CurNode = Dijk.top().second;
//        Dijk.pop();
//
//        for (int i = 0; i < Links[CurNode].size(); i++)
//        {
//            int NextNode = Links[CurNode][i];
//
//            if (Cost[CurNode][NextNode] + CurCost < CostToStart[NextNode])
//            {
//                CostToStart[NextNode] = Cost[CurNode][NextNode] + CurCost;
//                Dijk.push({ CostToStart[NextNode], NextNode });
//            }
//        }
//    }
//
//    int Answer = 0;
//    for (int i = 0; i < CostToStart.size(); i++)
//    {
//        if (CostToStart[i] <= K)
//        {
//            Answer++;
//        }
//    }
//
//    return Answer;
//}