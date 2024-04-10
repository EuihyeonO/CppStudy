//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K)
//{
//    std::priority_queue<int, std::vector<int>, std::greater<int>> PQ;
//
//    for (int i = 0; i < scoville.size(); i++)
//    {
//        PQ.push(scoville[i]);
//    }
//
//    int Count = 0;
//
//    while (PQ.size() > 1)
//    {
//        if (PQ.top() >= K)
//        {
//            break;
//        }
//
//        int MinSpicy = PQ.top();
//        PQ.pop();
//
//        int Min2Spicy = PQ.top();
//        PQ.pop();
//
//        int NewSpicy = MinSpicy + 2 * Min2Spicy;
//        PQ.push(NewSpicy);
//
//        Count++;
//    }
//
//    if (PQ.top() < K)
//    {
//        Count = -1;
//    }
//
//    return Count;
//}