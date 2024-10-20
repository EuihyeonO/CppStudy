//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int GlobalCol = 0;
//
//bool Compare(const vector<int>& _Left, vector<int>& _Right)
//{
//    if (_Left[GlobalCol - 1] == _Right[GlobalCol - 1])
//    {
//        return _Left[0] > _Right[0];
//    }
//
//    return _Left[GlobalCol - 1] < _Right[GlobalCol - 1];
//}
//
//int solution(vector<vector<int>> data, int col, int row_begin, int row_end)
//{
//    GlobalCol = col;
//    std::sort(data.begin(), data.end(), Compare);
//
//    std::vector<int> AllSi;
//
//    for (int i = row_begin - 1; i <= row_end - 1; i++)
//    {
//        int Si = 0;
//
//        for (int j = 0; j < data[i].size(); j++)
//        {
//            Si += data[i][j] % (i + 1);
//        }
//
//        AllSi.push_back(Si);
//    }
//
//    int ReturnValue = AllSi[0];
//
//    for (int i = 1; i < AllSi.size(); i++)
//    {
//        ReturnValue ^= AllSi[i];
//    }
//
//    return ReturnValue;
//}