//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> priorities, int location)
//{
//    std::map<int, int> NumOfPriority;
//    std::queue<std::pair<int, int>> Processes;
//
//    for (int i = 0; i < priorities.size(); i++)
//    {
//        int Index = i;
//        int Priority = priorities[i];
//
//        NumOfPriority[Priority]++;
//        Processes.push({ Priority, Index });
//    }
//
//    int ProcessCount = 0;
//    while (Processes.size() > 0)
//    {
//        std::pair<int, int> CurProcess = Processes.front();
//        Processes.pop();
//
//        std::map<int, int>::iterator MaxPriority = NumOfPriority.end();
//        MaxPriority--;
//
//        if (MaxPriority->first > CurProcess.first)
//        {
//            Processes.push(CurProcess);
//        }
//        else
//        {
//            //프로세스 실행
//            MaxPriority->second--;
//            ProcessCount++;
//
//            if (MaxPriority->second <= 0)
//            {
//                NumOfPriority.erase(MaxPriority);
//            }
//
//            if (CurProcess.second == location)
//            {
//                break;
//            }
//        }
//    }
//
//    return ProcessCount;
//}