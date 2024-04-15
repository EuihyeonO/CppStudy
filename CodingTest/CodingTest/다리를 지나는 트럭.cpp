//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights)
//{
//    int Time = 1;
//    int WeightSum = truck_weights[0];
//    int Index = 1;
//
//    //무게, 입장시간
//    std::queue<std::pair<int, int>> Queue;
//    Queue.push({ truck_weights[0], Time });
//
//    while (Queue.size() > 0)
//    {
//        Time++;
//
//        std::pair<int, int> QueueFront = Queue.front();
//        if (QueueFront.second + bridge_length <= Time)
//        {
//            Queue.pop();
//            WeightSum -= QueueFront.first;
//        }
//
//        if (Queue.size() < bridge_length && WeightSum + truck_weights[Index] <= weight && Index < truck_weights.size())
//        {
//            Queue.push({ truck_weights[Index], Time });
//            WeightSum += truck_weights[Index];
//            Index++;
//        }
//    }
//
//    return Time;
//}