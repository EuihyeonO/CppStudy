//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//int TimeStringToint(const std::string& _Str)
//{
//    std::string HourStr = _Str.substr(0, 2);
//    std::string MinuteStr = _Str.substr(3, 2);
//    int Hour = std::stoi(HourStr);
//    int Minute = std::stoi(MinuteStr);
//
//    int StrToMin = Hour * 60 + Minute;
//
//    return StrToMin;
//}
//
//
//std::string TimeIntToString(int _Time)
//{
//    int Hour = _Time / 60;
//    int Minute = _Time % 60;
//
//    std::string TimeStr = std::to_string(Hour);
//    std::string MinuteStr = std::to_string(Minute);
//
//    if (TimeStr.size() == 1)
//    {
//        TimeStr.insert(0, "0");
//    }
//
//    if (MinuteStr.size() == 1)
//    {
//        MinuteStr.insert(0, "0");
//    }
//
//    std::string ReturnStr = TimeStr + ":" + MinuteStr;
//    return ReturnStr;
//}
//
//
//int main()
//{
//    int NumLog = 0;
//    std::cin >> NumLog;
//
//    std::vector<int> TimeTable(1440, 0);
//
//    for (int i = 0; i < NumLog; i++)
//    {
//        std::string LogIn = "";
//        std::string LogOut = "";
//        std::cin >> LogIn >> LogOut;
//
//        int LogInMinute = TimeStringToint(LogIn);
//        int LogOutMinute = TimeStringToint(LogOut);
//
//        TimeTable[LogInMinute]++;
//        TimeTable[LogOutMinute]--;
//    }
//
//    int MaxUser = 0;
//    int CurUser = 0;
//    int StartTime = 0;
//    int EndTime = 0;
//
//    bool isStart = false;
//
//    for (int i = 0; i < 1440; i++)
//    {
//        CurUser += TimeTable[i];
//
//        if (CurUser > MaxUser)
//        {
//            MaxUser = CurUser;
//            StartTime = i;
//            isStart = true;
//        }
//
//        if (isStart == true && CurUser < MaxUser)
//        {
//            EndTime = i;
//            isStart = false;
//        }
//    }
//
//    std::cout << MaxUser << "\n" << TimeIntToString(StartTime) << " " << TimeIntToString(EndTime);
//
//    return 0;
//}