//#include <string>
//#include <vector>
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//struct Pos
//{
//    int X;
//    int Y;
//};
//
//int GetSquareOfDistance(const Pos _Pos1, const Pos _Pos2)
//{
//    return (_Pos1.X - _Pos2.X) * (_Pos1.X - _Pos2.X) + (_Pos1.Y - _Pos2.Y) * (_Pos1.Y - _Pos2.Y);
//}
//
//Pos Get_X_Left_Flip(Pos _Pos)
//{
//    return { -_Pos.X, _Pos.Y };
//}
//
//Pos Get_X_Right_Flip(Pos _Pos, int Verti)
//{
//    return { 2 * Verti - _Pos.X , _Pos.Y };
//}
//
//Pos Get_Y_Top_Flip(Pos _Pos, int Horiz)
//{
//    return { _Pos.X, 2 * Horiz - _Pos.Y };
//}
//
//Pos Get_Y_Bottom_Flip(Pos _Pos)
//{
//    return { _Pos.X, -_Pos.Y };
//}
//
//vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls)
//{
//    vector<int> answer;
//
//    Pos StartPos = { startX, startY };
//
//    for (int i = 0; i < balls.size(); i++)
//    {
//        Pos DestPos = { balls[i][0], balls[i][1] };
//
//        Pos X_Left_Flip = Get_X_Left_Flip(DestPos);
//        Pos X_Right_Flip = Get_X_Right_Flip(DestPos, m);
//
//        Pos Y_Top_Flip = Get_Y_Top_Flip(DestPos, n);
//        Pos Y_Bottom_Flip = Get_Y_Bottom_Flip(DestPos);
//
//        std::set<int> Distance;
//
//        if (!(DestPos.Y == StartPos.Y && DestPos.X < StartPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, X_Left_Flip));
//        }
//
//        if (!(DestPos.Y == StartPos.Y && DestPos.X > StartPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, X_Right_Flip));
//        }
//
//        if (!(DestPos.X == StartPos.X && DestPos.Y > StartPos.Y))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Y_Top_Flip));
//        }
//
//        if (!(DestPos.X == StartPos.X && DestPos.Y < StartPos.Y))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Y_Bottom_Flip));
//        }
//
//        //±â¿ï±â Y2 - Y1 / X2 - X1 == Y3 - Y2 / X3 - X2
//
//        //(DestX - StartX) * (Y3 - DestY) == (DestY - StartY) * (X3 - DestX);
//        //(1,1) (m, n) (m ,  1) (1 , n)
//
//        if (DestPos.X > StartPos.X &&
//            (DestPos.X - StartPos.X) * (1 - DestPos.Y) == (DestPos.Y - StartPos.Y) * (1 - DestPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Get_Y_Top_Flip(X_Left_Flip, n)));
//        }
//
//        if (DestPos.X > StartPos.X &&
//            (DestPos.X - StartPos.X) * (n - DestPos.Y) == (DestPos.Y - StartPos.Y) * (1 - DestPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Get_Y_Bottom_Flip(X_Left_Flip)));
//        }
//
//        if (DestPos.X < StartPos.X &&
//            (DestPos.X - StartPos.X) * (n - DestPos.Y) == (DestPos.Y - StartPos.Y) * (m - DestPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Get_Y_Top_Flip(X_Right_Flip, n)));
//        }
//
//        if (DestPos.X < StartPos.X &&
//            (DestPos.X - StartPos.X) * (1 - DestPos.Y) == (DestPos.Y - StartPos.Y) * (m - DestPos.X))
//        {
//            Distance.insert(GetSquareOfDistance(StartPos, Get_Y_Bottom_Flip(X_Right_Flip)));
//        }
//
//        std::set<int>::iterator Max = Distance.begin();
//
//        answer.push_back(*Max);
//    }
//
//    return answer;
//}