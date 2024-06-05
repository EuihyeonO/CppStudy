//#include <string>
//#include <vector>
//
//using namespace std;
//
////자연수 n개의 합으로 s를 만들 수 있어야 한다.
////그 중, 원소의 곱이 최대인 값을 구하자.
//
//vector<int> solution(int n, int s)
//{
//    if (s < n)
//    {
//        return { -1 };
//    }
//
//    vector<int> Answer(n, 0);
//
//    int Share = s / n;
//    int Remain = s % n;
//
//    for (int i = Answer.size() - 1; i >= 0; i--)
//    {
//        Answer[i] = Share;
//
//        if (Remain > 0)
//        {
//            Answer[i] += 1;
//            Remain--;
//        }
//    }
//
//
//    return Answer;
//}