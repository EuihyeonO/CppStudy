//#include <string>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//vector<string> solution(vector<string> record)
//{
//    std::vector<std::string> Log;
//    Log.reserve(record.size());
//
//    //아이디, 닉네임
//    std::map<std::string, std::string> Nickname;
//
//    for (int i = 0; i < record.size(); i++)
//    {
//        std::stringstream SStream(record[i]);
//        std::string Behavior, ID, NickName;
//
//        SStream >> Behavior >> ID >> NickName;
//
//        if (Behavior == "Enter")
//        {
//            Log.push_back(ID + "*님이 들어왔습니다.");
//            Nickname[ID] = NickName;
//        }
//        else if (Behavior == "Leave")
//        {
//            Log.push_back(ID + "*님이 나갔습니다.");
//        }
//        else
//        {
//            Nickname[ID] = NickName;
//        }
//    }
//
//    for (int i = 0; i < Log.size(); i++)
//    {
//        int Index = Log[i].find("*");
//        std::string ID = Log[i].substr(0, Index);
//
//        Log[i].replace(0, Index + 1, Nickname[ID]);
//    }
//
//    return Log;
//}
