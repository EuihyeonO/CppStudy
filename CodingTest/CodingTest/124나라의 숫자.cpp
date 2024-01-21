//#include <string>
//#include <vector>
//
//using namespace std;
//
//void Shared(int n, vector<int>& NumVec)
//{
//    if (n == 0)
//    {
//        return;
//    }
//
//    int Share = 0;
//    int Remain = 0;
//
//    if (n % 3 == 0)
//    {
//        Share = n / 3 - 1;
//    }
//    else
//    {
//        Share = n / 3;
//    }
//
//    Remain = n % 3;
//
//    switch (Remain)
//    {
//    case 0:
//        NumVec.push_back(4);
//        break;
//    case 1:
//        NumVec.push_back(1);
//        break;
//    case 2:
//        NumVec.push_back(2);
//        break;
//    }
//
//    Shared(Share, NumVec);
//}
//
//string solution(int n)
//{
//
//    vector<int> NumVec;
//    NumVec.reserve(10000);
//
//    Shared(n, NumVec);
//
//    string answer = "";
//
//    char NumArr[1000];
//
//    for (int i = 0; i < NumVec.size(); i++)
//    {
//        NumArr[i] = NumVec[i] + '0';
//        answer.insert(answer.begin(), NumArr[i]);
//    }
//
//
//    return answer;
//}