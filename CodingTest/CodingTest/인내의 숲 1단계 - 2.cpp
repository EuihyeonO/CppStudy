//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//void DFS(int _CurFloor, int _TargetFloor, int _Path, std::vector<int>& _Answers)
//{
//    if (_CurFloor == _TargetFloor)
//    {
//        _Answers.push_back(_Path);
//        return;
//    }
//
//    if (_CurFloor + 1 <= _TargetFloor)
//    {
//        std::string Str = std::to_string(_Path);
//        Str += "1";
//
//        DFS(_CurFloor + 1, _TargetFloor, std::stoi(Str), _Answers);
//    }
//
//    if (_CurFloor + 2 <= _TargetFloor)
//    {
//        std::string Str = std::to_string(_Path);
//        Str += "2";
//
//        DFS(_CurFloor + 2, _TargetFloor, std::stoi(Str), _Answers);
//    }
//}
//
//int main()
//{
//    int TargetFloor = 0;
//    std::cin >> TargetFloor;
//
//    std::vector<int> Answers;
//    Answers.reserve(100);
//
//    DFS(0, TargetFloor, 0, Answers);
//
//    std::sort(Answers.begin(), Answers.end());
//
//    for (int i = 0; i < Answers.size(); i++)
//    {
//        std::cout << Answers[i] << "\n";
//    }
//
//    return 0;
//}