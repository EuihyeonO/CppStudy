//#include <string>
//#include <vector>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> elements)
//{
//    int Size = elements.size();
//
//    vector<int> Circle;
//    Circle.reserve(Size * 2 - 1);
//
//    set<int> SumList;
//
//    for (int i = 0; i < Size * 2 - 1; i++)
//    {
//        int Index = i;
//
//        if (Index >= Size)
//        {
//            Index -= Size;
//        }
//
//        Circle.push_back(elements[Index]);
//    }
//
//    for (int i = 0; i < Size; i++)
//    {
//        for (int j = 0; j < Size; j++)
//        {
//            int Sum = 0;
//
//            for (int k = 0; k < j; k++)
//            {
//                Sum += Circle[i + k];
//            }
//
//            SumList.insert(Sum);
//        }
//    }
//
//    return SumList.size();
//}