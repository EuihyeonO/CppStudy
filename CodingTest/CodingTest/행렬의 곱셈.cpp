//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
//{
//    vector<vector<int>> answer;
//
//    int Row = arr1.size();
//    int Column = arr2[0].size();
//
//    answer.resize(Row);
//    for (int i = 0; i < Row; i++)
//    {
//        answer[i].resize(Column);
//    }
//
//    for (int i = 0; i < Row; i++)
//    {
//        for (int j = 0; j < Column; j++)
//        {
//            int Num = 0;
//
//            for (int k = 0; k < arr1[0].size(); k++)
//            {
//                Num += arr1[i][k] * arr2[k][j];
//            }
//
//            answer[i][j] = Num;
//        }
//    }
//
//    return answer;
//}
//
////int main()
////{
////    return 0;
////}