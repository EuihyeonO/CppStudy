//#include <string>
//#include <vector>
//#include <set>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<string> operations)
//{
//    std::multiset<int> Nums;
//
//    for (int i = 0; i < operations.size(); i++)
//    {
//        std::string& CurStr = operations[i];
//
//        if (CurStr[0] == 'I')
//        {
//            std::string NumberStr = CurStr.substr(2, operations.size() - 2);
//            int NumberInt = std::stoi(NumberStr);
//
//            Nums.insert(NumberInt);
//        }
//        else if (Nums.size() >= 1 && CurStr == "D 1")
//        {
//            std::multiset<int>::iterator MaxNum = Nums.end();
//            MaxNum--;
//
//            Nums.erase(MaxNum);
//        }
//        else if (Nums.size() >= 1 && CurStr == "D -1")
//        {
//            std::multiset<int>::iterator MinNum = Nums.begin();
//
//            Nums.erase(MinNum);
//        }
//    }
//
//    vector<int> Answer(2);
//
//    if (Nums.size() != 0)
//    {
//        std::multiset<int>::iterator Iter = Nums.end();
//        Iter--;
//        Answer[0] = *Iter;
//
//        Iter = Nums.begin();
//        Answer[1] = *Iter;
//    }
//
//    return Answer;
//}