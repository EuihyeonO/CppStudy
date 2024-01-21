//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//int solution(vector<int> topping)
//{
//    set<int> Front;
//    set<int> Back;
//    vector<int> FrontSize;
//    vector<int> BackSize;
//
//    FrontSize.reserve(10000);
//    BackSize.reserve(10000);
//
//    for (int i = 0; i < topping.size(); i++)
//    {
//        Front.insert(topping[i]);
//        Back.insert(topping[topping.size() - i - 1]);
//
//        FrontSize.push_back(Front.size());
//        BackSize.push_back(Back.size());
//    }
//
//    int Count = 0;
//
//    for (int i = 0; i < FrontSize.size() - 1; i++)
//    {
//        if (FrontSize[i] == BackSize[BackSize.size() - i - 2])
//        {
//            Count++;
//        }
//    }
//
//    return Count;
//}