//#include <string>
//#include <vector>
//#include <iostream>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
//struct Homework
//{
//    std::string Name = "";
//
//    int StartTime = 0;
//    int LeftTime = 0;
//};
//
//bool Compare(const Homework& _Left, const Homework& _Right)
//{
//    return _Left.StartTime < _Right.StartTime;
//}
//
//vector<string> solution(vector<vector<string>> plans)
//{
//    std::vector<Homework> Homeworks(plans.size());
//
//    for (int i = 0; i < plans.size(); i++)
//    {
//        Homeworks[i].Name = plans[i][0];
//
//        int StartHour = std::stoi(plans[i][1].substr(0, 2));
//        int StartMinute = std::stoi(plans[i][1].substr(3, 2));
//
//        Homeworks[i].StartTime = StartHour * 60 + StartMinute;
//        Homeworks[i].LeftTime = std::stoi(plans[i][2]);
//    }
//
//    std::sort(Homeworks.begin(), Homeworks.end(), Compare);
//    std::stack<Homework> WorkJob;
//
//    std::vector<std::string> Answer;
//
//    for (int i = 0; i < Homeworks.size(); i++)
//    {
//        if (WorkJob.size() == 0)
//        {
//            WorkJob.push(Homeworks[i]);
//        }
//        else
//        {
//            int TimeCost = Homeworks[i].StartTime - WorkJob.top().StartTime;
//
//            while (WorkJob.size() > 0)
//            {
//                if (WorkJob.top().LeftTime - TimeCost <= 0)
//                {
//                    TimeCost -= WorkJob.top().LeftTime;
//
//                    Answer.push_back(WorkJob.top().Name);
//                    WorkJob.pop();
//                }
//                else
//                {
//                    Homework CurWork = WorkJob.top();
//                    WorkJob.pop();
//
//                    CurWork.LeftTime -= TimeCost;
//                    WorkJob.push(CurWork);
//
//                    break;
//                }
//            }
//
//            WorkJob.push(Homeworks[i]);
//        }
//    }
//
//    while (WorkJob.size() > 0)
//    {
//        std::cout << WorkJob.top().Name << " ";
//        Answer.push_back(WorkJob.top().Name);
//        WorkJob.pop();
//    }
//
//    return Answer;
//}