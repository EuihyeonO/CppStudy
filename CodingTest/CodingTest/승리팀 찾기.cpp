//#include <iostream>
//#include <string>
//#include <set>
//#include <vector>
//
//int main()
//{
//    int NumCase = 0;
//    std::cin >> NumCase;
//
//    for (int Case = 0; Case < NumCase; Case++)
//    {
//        std::string Mode = "";
//        std::cin >> Mode;
//
//        std::set<std::pair<int, std::string>> Goals;
//
//        for (int i = 0; i < 8; i++)
//        {
//            std::string Team = "";
//            std::string Time = "";
//
//            std::cin >> Team >> Time;
//
//            std::string Minute = Time.substr(0, 1);
//            std::string Second = Time.substr(2, 2);
//            std::string MiliSecond = Time.substr(5, 2);
//
//            int TimeToMS = std::stoi(Minute) * 6000 + std::stoi(Second) * 100 + std::stoi(MiliSecond);
//
//            Goals.insert({ TimeToMS, Team });
//        }
//
//        if (Mode == "item")
//        {
//            std::pair<int, std::string> First = *Goals.begin();
//            std::cout << First.second << "\n";
//        }
//        else
//        {
//            int BlueScore = 0;
//            int RedScore = 0;
//
//            std::vector<int> Scores = { 10, 8, 6, 5, 4, 3, 2, 1 };
//            int ScoreIndex = 0;
//
//            std::set<std::pair<int, std::string>>::iterator CurIter = Goals.begin();
//            std::set<std::pair<int, std::string>>::iterator EndIter = Goals.end();
//
//            std::pair<int, std::string> First = *Goals.begin();
//
//            while (CurIter != EndIter)
//            {
//                std::pair<int, std::string> CurGoal = *CurIter;
//
//                if (CurGoal.first - First.first < 1000)
//                {
//                    if (CurGoal.second == "red")
//                    {
//                        RedScore += Scores[ScoreIndex];
//                        ScoreIndex++;
//                    }
//                    else
//                    {
//                        BlueScore += Scores[ScoreIndex];
//                        ScoreIndex++;
//                    }
//                }
//
//                CurIter++;
//            }
//
//            if (RedScore > BlueScore)
//            {
//                std::cout << "red" << "\n";
//            }
//            else if (RedScore < BlueScore)
//            {
//                std::cout << "blue" << "\n";
//            }
//            else
//            {
//                std::cout << First.second << "\n";
//            }
//        }
//    }
//
//    return 0;
//}