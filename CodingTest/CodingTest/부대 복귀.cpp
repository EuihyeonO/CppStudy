//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination)
//{
//    std::vector<std::vector<int>> Links(n + 1);
//
//    for (int i = 0; i < roads.size(); i++)
//    {
//        int Left = roads[i][0];
//        int Right = roads[i][1];
//
//        Links[Left].push_back(Right);
//        Links[Right].push_back(Left);
//    }
//
//    std::vector<int> Answers;
//
//    for (int i = 0; i < sources.size(); i++)
//    {
//        std::vector<bool> isVisit(n, false);
//        std::queue<std::pair<int, int>> BFS;
//        BFS.push({ sources[i],0 });
//
//        isVisit[sources[i]] = true;
//
//        bool isFind = false;
//
//        while (BFS.size() > 0)
//        {
//            int CurPos = BFS.front().first;
//            int CurDist = BFS.front().second;
//
//            BFS.pop();
//
//            if (CurPos == destination)
//            {
//                Answers.push_back(CurDist);
//                isFind = true;
//                break;
//            }
//
//            for (int i = 0; i < Links[CurPos].size(); i++)
//            {
//                int NextPos = Links[CurPos][i];
//                if (isVisit[NextPos] == false)
//                {
//                    isVisit[NextPos] = true;
//                    BFS.push({ NextPos, CurDist + 1 });
//                }
//            }
//        }
//
//        if (isFind == false)
//        {
//            Answers.push_back(-1);
//        }
//    }
//
//    return Answers;
//}