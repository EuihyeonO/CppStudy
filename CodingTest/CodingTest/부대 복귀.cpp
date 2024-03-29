//#include <string>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination)
//{
//    std::vector<std::vector<int>> Links(n + 1);
//
//    for (int i = 0; i < roads.size(); i++)
//    {
//        Links[roads[i][0]].push_back(roads[i][1]);
//        Links[roads[i][1]].push_back(roads[i][0]);
//    }
//
//    std::vector<int> Costs(n + 1, INT_MAX);
//    std::vector<bool> isVisit(n + 1, false);
//
//    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Dijk;
//    Dijk.push({ 0, destination });
//    Costs[destination] = 0;
//
//    while (Dijk.size() > 0)
//    {
//        int CurCost = Dijk.top().first;
//        int CurPos = Dijk.top().second;
//        Dijk.pop();
//
//        for (int i = 0; i < Links[CurPos].size(); i++)
//        {
//            int NextPos = Links[CurPos][i];
//
//            if (Costs[NextPos] > CurCost + 1)
//            {
//                Costs[NextPos] = CurCost + 1;
//                Dijk.push({ CurCost + 1, NextPos });
//            }
//        }
//    }
//
//    std::vector<int> Answers;
//    Answers.reserve(sources.size());
//
//    for (int i = 0; i < sources.size(); i++)
//    {
//        if (Costs[sources[i]] == INT_MAX)
//        {
//            Costs[sources[i]] = -1;
//        }
//
//        Answers.push_back(Costs[sources[i]]);
//    }
//
//    return Answers;
//}