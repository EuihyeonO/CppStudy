//#include <string>
//#include <vector>
//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//vector<int> solution(vector<int> sequence, int k)
//{
//
//    int Left = 0;
//    int Right = 0;
//
//    int Sum = sequence[0];
//    int Answer = 0;
//
//    std::vector<std::pair<int, int>> Answers;
//
//    while (true)
//    {
//        if (Sum == k)
//        {
//            Answers.push_back({ Left, Right });
//
//            Sum -= sequence[Left];
//            Left++;
//
//            Right++;
//            Sum += sequence[Right];
//
//            if (Right >= sequence.size())
//            {
//                break;
//            }
//        }
//        else if (Sum > k)
//        {
//            Sum -= sequence[Left];
//            Left++;
//        }
//        else
//        {
//            Right++;
//
//            if (Right >= sequence.size())
//            {
//                break;
//            }
//
//            Sum += sequence[Right];
//        }
//    }
//
//    int MinLength = INT_MAX;
//    std::pair<int, int> MinPair;
//
//    for (int i = 0; i < Answers.size(); i++)
//    {
//        int CurLength = Answers[i].second - Answers[i].first;
//        if (CurLength < MinLength)
//        {
//            MinLength = CurLength;
//            MinPair = Answers[i];
//        }
//    }
//
//    return { MinPair.first, MinPair.second };
//}