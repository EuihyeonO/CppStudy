//#include <string>
//#include <vector>
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> order)
//{
//    std::stack<int> SubContainer;
//    int NumPackage = order.size();
//
//    int Complete = 0;
//
//    int PackIndex = 1;
//    int OrderIndex = 0;
//
//    while (PackIndex <= NumPackage)
//    {
//        if (PackIndex != order[OrderIndex])
//        {
//            if (SubContainer.size() > 0 && SubContainer.top() == order[OrderIndex])
//            {
//                SubContainer.pop();
//                Complete++;
//                OrderIndex++;
//
//                continue;
//            }
//            else
//            {
//                SubContainer.push(PackIndex);
//            }
//        }
//        else
//        {
//            Complete++;
//            OrderIndex++;
//        }
//
//        PackIndex++;
//    }
//
//    while (SubContainer.size() > 0)
//    {
//        if (SubContainer.top() == order[OrderIndex])
//        {
//            SubContainer.pop();
//            OrderIndex++;
//            Complete++;
//        }
//        else
//        {
//            break;
//        }
//    }
//
//    return Complete;
//}