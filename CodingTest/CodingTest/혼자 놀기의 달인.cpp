//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//void DeleteOpendedElement(std::unordered_map<int, bool>& _isOpend)
//{
//    std::unordered_map<int, bool>::iterator StartIter = _isOpend.begin();
//    std::unordered_map<int, bool>::iterator EndIter = _isOpend.end();
//
//    while (StartIter != EndIter)
//    {
//        if (StartIter->second == true)
//        {
//            StartIter = _isOpend.erase(StartIter);
//            continue;
//        }
//
//        StartIter++;
//    }
//}
//
//int solution(vector<int> cards) 
//{
//    std::unordered_map<int, bool> isOpened;
//    
//    for (int i = 0; i < cards.size(); i++)
//    {
//        isOpened[i] = false;
//    }
//    
//    std::vector<int> Groups;
//    Groups.reserve(100);
//
//    int CurIndex = 0;
//    int Count = 1;
//    isOpened[CurIndex] = true;
//
//    while(isOpened.size() > 0)
//    {
//        int LinkedIndex = cards[CurIndex] - 1;
//
//        if (isOpened[LinkedIndex] == true)
//        {
//            Groups.push_back(Count);
//            Count = 0;
//            DeleteOpendedElement(isOpened);
//
//            if(isOpened.size() > 0)
//            {
//                CurIndex = isOpened.begin()->first;
//            }
//
//            continue;
//        }
//
//        isOpened[LinkedIndex] = true;
//        CurIndex = LinkedIndex;
//        Count++;
//    }
//
//    std::sort(Groups.begin(), Groups.end(), greater<int>());
//    
//    int First = Groups[0];
//    int Second = 0;
//
//    if (Groups.size() > 1)
//    {
//        Second = Groups[1];
//    }
//    int answer = First * Second;
//    return answer;
//}
//
//int main()
//{
//    solution({ 8,6,3,7,2,5,1,4 });
//}