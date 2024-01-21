//#include <string>
//#include <vector>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//vector<string> solution(vector<vector<int>> line)
//{
//    int VecSize = line.size();
//
//    set<pair<long long, long long>> CrossList;
//
//    for (int i = 0; i < VecSize; i++)
//    {
//        for (int j = i; j < VecSize; j++)
//        {
//            long long Inc = (long long)line[i][0] * line[j][1] - (long long)line[j][0] * line[i][1];
//
//            if (Inc == 0)
//            {
//                continue;
//            }
//
//            long long CrossX = (long long)line[i][1] * line[j][2] - (long long)line[i][2] * line[j][1];
//            long long CrossY = (long long)line[i][2] * line[j][0] - (long long)line[i][0] * line[j][2];
//
//            if (CrossX % Inc != 0 || CrossY % Inc != 0)
//            {
//                continue;
//            }
//
//            CrossX /= Inc;
//            CrossY /= Inc;
//
//            CrossList.insert({ CrossX, CrossY });
//        }
//    }
//
//    //Test 
//    set<pair<long long, long long>>::iterator Begin = CrossList.begin();
//    set<pair<long long, long long>>::iterator End = CrossList.end();
//
//    long long MaxX = Begin->first;
//    long long MinX = Begin->first;
//
//    long long MaxY = Begin->second;
//    long long MinY = Begin->second;
//
//    while (Begin != End)
//    {
//        long long CurX = Begin->first;
//        long long CurY = Begin->second;
//
//        MaxX = max(CurX, MaxX);
//        MinX = min(CurX, MinX);
//        MaxY = max(CurY, MaxY);
//        MinY = min(CurY, MinY);
//
//        Begin++;
//    }
//
//    Begin = CrossList.begin();
//
//    long long XSize = MaxX - MinX + 1;
//    long long YSize = MaxY - MinY + 1;
//
//    vector<string> answer(YSize, string(XSize, '.'));
//
//    while (Begin != End)
//    {
//        long long PosX = Begin->first;
//        long long PosY = Begin->second;
//
//        PosX = abs(PosX - MinX);
//        PosY = abs(PosY - MaxY);
//
//        answer[PosY][PosX] = '*';
//
//        Begin++;
//    }
//
//    return answer;
//}