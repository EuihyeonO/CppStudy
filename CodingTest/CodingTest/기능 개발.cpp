//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds)
//{
//    int Second = 0;
//    int Index = 0;
//    int Size = progresses.size();
//    std::vector<int> Answer;
//    Answer.reserve(Size);
//
//    while (Index < Size)
//    {
//        if (progresses[Index] + speeds[Index] * Second >= 100)
//        {
//            int NextProgressIndex = Index + 1;
//            int Count = 0;
//
//            while (NextProgressIndex < Size && progresses[NextProgressIndex] + speeds[NextProgressIndex] * Second >= 100)
//            {
//                NextProgressIndex++;
//                Count++;
//            }
//
//            Index += Count + 1;
//            Answer.push_back(Count + 1);
//            continue;
//        }
//
//        if (progresses[Index] + speeds[Index] * Second < 100)
//        {
//            Second++;
//        }
//    }
//
//    return Answer;
//}