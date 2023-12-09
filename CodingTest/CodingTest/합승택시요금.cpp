#include <string>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

int solution(int n, int s, int a, int b, vector<vector<int>> fares)
{
    std::vector<std::vector<int>> LinkNodes(n);
    std::vector<std::vector<int>> Fares(n, std::vector<int>(n, 0));

    for (int i = 0; i < fares.size(); i++)
    {
        int First = fares[i][0];
        int Second = fares[i][1];
        int Fare = fares[i][2];

        First--;
        Second--;

        Fares[First][Second] = Fare;
        Fares[Second][First] = Fare;

        LinkNodes[First].push_back(Second);
        LinkNodes[Second].push_back(First);
    }

    //모든 노드에서 모든 노드로, Distance[2][4]는 시작점2(3), 도착점4(5). 

    std::vector<std::vector<int>> Distance(n, std::vector<int>(n, INT_MAX));

    for (int i = 0; i < n; i++)
    {
        std::priority_queue<std::pair<int, int>> Queue;

        Distance[i][i] = 0;
        Queue.push({ 0, i });

        while (Queue.size() > 0)
        {
            int Fare = -Queue.top().first;
            int Index = Queue.top().second;
            Queue.pop();

            if (Distance[i][Index] < Fare)
            {
                continue;
            }

            for (int j = 0; j < LinkNodes[Index].size(); j++)
            {
                int LinkIndex = LinkNodes[Index][j];
                int SumFare = Fares[Index][LinkIndex] + Fare;

                if (SumFare < Distance[i][LinkIndex])
                {
                    Distance[i][LinkIndex] = SumFare;
                    Queue.push({ -SumFare, LinkIndex });
                }
            }
        }
    }

    //비용의 최소값 구하기. 어디서 갈라지는 것이 가장 저렴한가?
    //(Start ~ Node) + (Node ~A) + (Node - B)

    int MinFare = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int Fare = Distance[s - 1][i] + Distance[i][a - 1] + Distance[i][b - 1];

        if (Fare < MinFare)
        {
            MinFare = Fare;
        }
    }

    return MinFare;
}

//int main()
//{
//    return 0;
//}