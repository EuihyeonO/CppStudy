//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <iterator>
//#include <string>
//#include <set>
//
//void Recursive(int _Curdigit, int _Index, int _MaxDigit, const std::vector<int>& _Sequence, std::vector<int>& _Answer, std::vector<bool>& _IsVisit, std::set<std::vector<int>>& _OutPut)
//{
//    if (_Curdigit == _MaxDigit)
//    {
//        std::vector<int> _Vec;
//        _Vec.reserve(_MaxDigit);
//        
//        for (int i = 0; i < _MaxDigit; i++)
//        {
//            _Vec.emplace_back(_Answer[i]);
//        }
//
//        _OutPut.insert(_Vec);
//
//        return;
//    }
//
//    for (int i = 0; i < _Sequence.size(); i++)
//    {
//        if (_IsVisit[i] == true)
//        {
//            continue;
//        }
//
//        _IsVisit[i] = true;
//        _Answer[_Curdigit] = _Sequence[i];
//        Recursive(_Curdigit + 1, _Index + 1, _MaxDigit, _Sequence, _Answer, _IsVisit, _OutPut);
//        _IsVisit[i] = false;
//    }
//
//}
//
//int main()
//{
//    int SequenceSize = 0;
//    int AnswerSize = 0;
//
//    std::cin >> SequenceSize >> AnswerSize;
//    std::vector<int> Sequence(SequenceSize);
//
//    for (int i = 0; i < SequenceSize; i++)
//    {
//        std::cin >> Sequence[i];
//    }
//
//    sort(Sequence.begin(), Sequence.end());
//
//    std::vector<int> Answer(AnswerSize);
//    std::vector<bool> isVisit(SequenceSize, false);
//
//    std::set<std::vector<int>> OutPut;
//    Recursive(0, 0, AnswerSize, Sequence, Answer, isVisit, OutPut);
//
//    for (const std::vector<int>& _Vec : OutPut)
//    {
//        std::copy(_Vec.begin(), _Vec.end(), std::ostream_iterator<int>(std::cout, " "));
//        std::cout << "\n";
//    }
//
//    return 0;
//}