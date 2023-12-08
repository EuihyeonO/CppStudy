#include <string>
#include <vector>
#include <queue>
#include <climits>

struct Node
{
    int Index = 0;
    std::vector<int> LinkedNodes;
};

int solution(int n, int s, int a, int b, std::vector<std::vector<int>> fares)
{
    std::vector<Node> Nodes(n);
    std::vector<std::vector<int>> LinkedFare(n, std::vector<int>(n));
    std::vector<bool> isVisit(n, false);

    for (int i = 0; i < n; i++)
    {
        Nodes[i].Index = i;
    }

    for (int i = 0; i < fares.size(); i++)
    {
        int First = fares[i][0] - 1;
        int Second = fares[i][1] - 1;
        int Fare = fares[i][2];

        Nodes[First].LinkedNodes.push_back(Second - 1);
        Nodes[Second].LinkedNodes.push_back(First - 1);

        LinkedFare[First - 1][Second - 1] = Fare;
        LinkedFare[Second - 1][First - 1] = Fare;
    }

    int StartIndex = s - 1;
    Node StartNode = Nodes[StartIndex];

    std::queue<Node> BFS;
    BFS.push(StartNode);

    int SumFare = 0;
    std::vector<int> FareToStart(n, INT_MAX);
    FareToStart[StartIndex] = 0;
    isVisit[StartIndex] = true;

    while (BFS.size() > 0)
    {
        Node CurNode = BFS.front();
        BFS.pop();

        SumFare += FareToStart[CurNode.Index];

        for (int i = 0; i < CurNode.LinkedNodes.size(); i++)
        {
            int CurIndex = CurNode.LinkedNodes[i];
            int Fare = LinkedFare[CurNode.Index][CurIndex];

            int TotalFare = SumFare + Fare;
            FareToStart[CurIndex] = std::min(FareToStart[CurIndex], TotalFare);

            if (isVisit[CurIndex] == false)
            {
                isVisit[CurIndex] = true;

                Node NextNode = Nodes[CurIndex];
                BFS.push(NextNode);
            }
        }
    }

    int StoA = FareToStart[a - 1];
    int StoB = FareToStart[b - 1];

    isVisit.clear();
    isVisit.resize(n, false);
    FareToStart.clear();
    FareToStart.resize(n, INT_MAX);


    ///
    SumFare = 0;
    StartIndex = a - 1;
    StartNode = Nodes[StartIndex];
    BFS.push(StartNode);
    FareToStart[StartIndex] = 0;
    isVisit[StartIndex] = true;

    while (BFS.size() > 0)
    {
        Node CurNode = BFS.front();
        BFS.pop();

        SumFare += FareToStart[CurNode.Index];

        for (int i = 0; i < CurNode.LinkedNodes.size(); i++)
        {
            int CurIndex = CurNode.LinkedNodes[i];
            int Fare = LinkedFare[CurNode.Index][CurIndex];

            int TotalFare = SumFare + Fare;
            FareToStart[CurIndex] = std::min(FareToStart[CurIndex], TotalFare);

            if (isVisit[CurIndex] == false)
            {
                isVisit[CurIndex] = true;

                Node NextNode = Nodes[CurIndex];
                BFS.push(NextNode);
            }
        }
    }

    int AtoB = FareToStart[b - 1];
    int AtoS = FareToStart[s - 1];

    return AtoS;
}

int main()
{
    std::vector<std::vector<int>> aa = { {4, 1, 10}, {3, 5, 24}, {5, 6, 2}, {3, 1, 41}, {5, 1, 24}, {4, 6, 50}, {2, 4, 66}, {2, 3, 22}, {1, 6, 25} };
    solution(6, 4, 6, 2, aa);
}