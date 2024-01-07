//#include <string>
//#include <vector>
//#include <memory>
//#include <queue>
//#include <map>
//#include <set>
//
//using namespace std;
//
//int solution(vector<vector<int>> land)
//{
//    int Floor = land.size();
//    int Length = land[0].size();
//
//    std::vector<std::vector<bool>> isVisit(Floor, std::vector<bool>(Length, false));
//    std::vector<std::vector<int>> CopyLand = std::move(land);
//
//    std::vector<int> Oil(Length);
//
//    std::map<int, int> Answer;
//
//    for (int i = 0; i < Length; i++)
//    {
//        int Sum = 0;
//
//        for (int j = 0; j < Floor; j++)
//        {
//            if (isVisit[j][i] == true)
//            {
//                continue;
//            }
//
//            if (CopyLand[j][i] == 0)
//            {
//                continue;
//            }
//
//            int Count = 1;
//            std::queue<std::pair<int, int>> BFS;
//            BFS.push({ j, i });
//
//            std::vector<std::pair<int, int>> EWSN(4);
//            EWSN[0] = { -1, 0 };
//            EWSN[1] = { 1, 0 };
//            EWSN[2] = { 0, 1 };
//            EWSN[3] = { 0, -1 };
//
//            isVisit[j][i] = true;
//            std::set<int> Indexs;
//
//            while (BFS.size() > 0)
//            {
//                std::pair<int, int> CurIndex = BFS.front();
//                Indexs.insert(CurIndex.second);
//                BFS.pop();
//
//                for (int k = 0; k < 4; k++)
//                {
//                    int NextY = CurIndex.first + EWSN[k].first;
//                    int NextX = CurIndex.second + EWSN[k].second;
//
//                    if (NextX >= Length || NextX < 0 || NextY >= Floor || NextY < 0)
//                    {
//                        continue;
//                    }
//
//                    if (CopyLand[NextY][NextX] == 0)
//                    {
//                        continue;
//                    }
//
//                    if (isVisit[NextY][NextX] == true)
//                    {
//                        continue;
//                    }
//
//                    BFS.push({ NextY, NextX });
//                    isVisit[NextY][NextX] = true;
//                    Count++;
//                }
//            }
//
//            for (int Index : Indexs)
//            {
//                Oil[Index] += Count;
//            }
//        }
//    }
//
//    return  *std::max_element(Oil.begin(), Oil.end());
//}
//
////int main()
////{
////    vector<vector<int>> land = {{0, 0, 0, 1, 1, 1, 0, 0}, {0, 0, 0, 0, 1, 1, 0, 0}, {1, 1, 0, 0, 0, 1, 1, 0}, {1, 1, 1, 0, 0, 0, 0, 0}, {1, 1, 1, 0, 0, 0, 1, 1}};
////    int a = solution(land);
////    return 0;
////}