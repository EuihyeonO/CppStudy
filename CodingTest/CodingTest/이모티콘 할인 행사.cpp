//#include <string>
//#include <vector>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//struct UserInfo
//{
//    int MinSale = 0;
//    int MaxPrice = 0;
//};
//
//std::vector<UserInfo> Users;
//std::vector<int> EmoPrices;
//std::vector<std::vector<bool>> isVisit;
//std::set<std::pair<int, int>> Answers;
//
//int GetRevenue(int _UserIndex)
//{
//    int Cost = 0;
//
//    for (int i = 0; i < isVisit.size(); i++)
//    {
//        for (int j = 0; j < isVisit[i].size(); j++)
//        {
//            if (isVisit[i][j] == false)
//            {
//                continue;
//            }
//
//            int Sale = (j + 1) * 10;
//
//            if (Sale >= Users[_UserIndex].MinSale)
//            {
//                int CurEmoPrice = EmoPrices[i];
//                CurEmoPrice *= (1.0f - (float)Sale / 100.0f);
//
//                Cost += CurEmoPrice;
//                break;
//            }
//
//        }
//    }
//
//    if (Cost >= Users[_UserIndex].MaxPrice)
//    {
//        //Cost가 -1이면, 이모티콘 플러스 가입.
//        Cost = -1;
//    }
//
//    return Cost;
//}
//
//void DFS(int _CurEmoIndex, int _CurSaleIndex)
//{
//    if (_CurEmoIndex == EmoPrices.size())
//    {
//        int SubScriber = 0;
//        int Revenue = 0;
//
//        for (int i = 0; i < Users.size(); i++)
//        {
//            int Result = GetRevenue(i);
//
//            if (Result == -1)
//            {
//                SubScriber++;
//            }
//            else
//            {
//                Revenue += Result;
//            }
//        }
//
//        Answers.insert({ SubScriber, Revenue });
//        return;
//    }
//
//    isVisit[_CurEmoIndex][_CurSaleIndex] = true;
//
//    for (int i = 0; i < 4; i++)
//    {
//        DFS(_CurEmoIndex + 1, i);
//    }
//
//    isVisit[_CurEmoIndex][_CurSaleIndex] = false;
//}
//
//vector<int> solution(vector<vector<int>> users, vector<int> emoticons)
//{
//    Users.resize(users.size());
//    EmoPrices.resize(emoticons.size());
//    isVisit.resize(emoticons.size(), std::vector<bool>(4, false));
//
//    for (int i = 0; i < users.size(); i++)
//    {
//        UserInfo NewUser;
//        NewUser.MinSale = users[i][0];
//        NewUser.MaxPrice = users[i][1];
//
//        Users[i] = NewUser;
//    }
//
//    for (int i = 0; i < emoticons.size(); i++)
//    {
//        EmoPrices[i] = emoticons[i];
//    }
//
//    for (int i = 0; i < 4; i++)
//    {
//        DFS(0, i);
//    }
//
//    std::set<std::pair<int, int>>::iterator Iter = Answers.end();
//    Iter--;
//
//    return { Iter->first, Iter->second };
//}