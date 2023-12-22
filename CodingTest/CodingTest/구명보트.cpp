//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
///*
// 
//보트에 딱 2명만 탈 수 있다는게 핵심.
//Sum 이 limit보다 작더라도 그냥 보내야 함. ( 어차피 2명 이상 못태우기 때문 )
//
//*/
//int solution(vector<int> people, int limit)
//{
//    sort(people.begin(), people.end());
//
//    int Left = 0;
//    int Right = people.size() - 1;
//    int Sum = people[Left] + people[Right];
//
//    int Count = 0;
//    int PeopleCount = 0;
//
//    while (Left < Right)
//    {
//        int Sum = people[Left] + people[Right];
//        
//        if (Sum <= limit)
//        {
//            Left++;
//            Right--;
//
//            Count++;
//            
//            PeopleCount += 2;
//
//            continue;
//        }
//        else if (Sum > limit)
//        {
//            Right--;
//            
//            Count++;
//
//            PeopleCount += 1;
//        }
//    }
//
//    if (people.size() - PeopleCount == 1)
//    {
//        Count++;
//    }
//
//    return Count;
//}
//
//int main()
//{
//    solution({70, 50, 80, 50, 90, 40}, 240);
//}