//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<vector<int>> maps)
//{
//    int answer = 0;
//
//    int YSize = maps.size();
//    int XSize = maps[0].size();
//
//    vector<vector<bool>> isTested(YSize, vector<bool>(XSize, false));
//
//    queue<pair<int, int>> TestingQueue;
//
//    TestingQueue.push({ 0, 0 });
//    isTested[0][0] = true;
//
//    while (TestingQueue.size() > 0)
//    {
//        int X = TestingQueue.front().first;
//        int Y = TestingQueue.front().second;
//
//        TestingQueue.pop();
//
//        if (X > 0 && isTested[Y][X - 1] == false && maps[Y][X - 1] != 0)
//        {
//            maps[Y][X - 1] += maps[Y][X];
//            isTested[Y][X - 1] = true;
//            TestingQueue.push({ X - 1, Y });
//        }
//
//        if (X < XSize - 1 && isTested[Y][X + 1] == false && maps[Y][X + 1] != 0) {
//            maps[Y][X + 1] += maps[Y][X];
//            isTested[Y][X + 1] = true;
//            TestingQueue.push({ X + 1, Y });
//        }
//
//        if (Y > 0 && isTested[Y - 1][X] == false && maps[Y - 1][X] != 0)
//        {
//            maps[Y - 1][X] += maps[Y][X];
//            isTested[Y - 1][X] = true;
//            TestingQueue.push({ X, Y - 1 });
//        }
//
//        if (Y < YSize - 1 && isTested[Y + 1][X] == false && maps[Y + 1][X] != 0)
//        {
//            maps[Y + 1][X] += maps[Y][X];
//            isTested[Y + 1][X] = true;
//            TestingQueue.push({ X, Y + 1 });
//        }
//    }
//
//    if (isTested[YSize - 1][XSize - 1] == false)
//    {
//        return -1;
//    }
//    else
//    {
//        return maps[YSize - 1][XSize - 1];
//    }
//}