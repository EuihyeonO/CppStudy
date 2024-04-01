//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(int k, vector<vector<int>> dungeons)
//{
//    std::vector<int> Nums(dungeons.size());
//    for (int i = 0; i < Nums.size(); i++)
//    {
//        Nums[i] = i;
//    }
//
//    int MaxDungeons = 0;
//
//    while (true)
//    {
//        int NumOfDungeons = 0;
//        int CopyK = k;
//
//        for (int i = 0; i < Nums.size(); i++)
//        {
//            if (CopyK < dungeons[Nums[i]][0])
//            {
//                break;
//            }
//            else
//            {
//                CopyK -= dungeons[Nums[i]][1];
//                NumOfDungeons++;
//            }
//        }
//
//        MaxDungeons = std::max(MaxDungeons, NumOfDungeons);
//
//        if (std::next_permutation(Nums.begin(), Nums.end()) == false)
//        {
//            break;
//        }
//    }
//
//    return MaxDungeons;
//}