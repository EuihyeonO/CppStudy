//#include <string>
//#include <vector>
//#include <sstream>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//int StringToTime(const std::string& _TimeStr)
//{
//    int Hour = std::stoi(_TimeStr.substr(0, 2));
//    int Minute = std::stoi(_TimeStr.substr(3, 2));
//
//    return 60 * Hour + Minute;
//}
//
//vector<int> solution(vector<int> fees, vector<string> records)
//{
//    std::map<std::string, int> InTime;
//    std::map<std::string, int> TotalTime;
//    std::vector<int> Answer;
//
//    for (int i = 0; i < records.size(); i++)
//    {
//        std::string Time, Number, InOut;
//        std::stringstream SStream(records[i]);
//
//        SStream >> Time >> Number >> InOut;
//
//        if (InOut == "IN")
//        {
//            InTime[Number] = StringToTime(Time);
//        }
//        else
//        {
//            int ParkingTime = StringToTime(Time) - InTime[Number];
//            TotalTime[Number] += ParkingTime;
//
//            InTime.erase(Number);
//        }
//    }
//
//    int MaxTime = StringToTime("23:59");
//
//    for (const std::pair<std::string, int>& _Pair : InTime)
//    {
//        TotalTime[_Pair.first] += MaxTime - _Pair.second;
//    }
//
//    for (const std::pair<std::string, int>& _Pair : TotalTime)
//    {
//        int OverTime = _Pair.second - fees[0];
//
//        if (OverTime <= 0)
//        {
//            Answer.push_back(fees[1]);
//        }
//        else
//        {
//            if (OverTime % fees[2] != 0)
//            {
//                OverTime -= OverTime % fees[2];
//                OverTime += fees[2];
//            }
//
//            OverTime /= fees[2];
//
//            Answer.push_back(fees[3] * OverTime + fees[1]);
//        }
//    }
//
//    return Answer;
//}