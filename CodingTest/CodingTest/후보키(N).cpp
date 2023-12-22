//#include <string>
//#include <vector>
//#include <map>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//
//void combination(int _Digit, int _Index, std::vector<int> _Case, std::vector<int> _Keys, std::vector<std::vector<int>>& _AllCase, bool& _isFind)
//{
//    if (_Digit == _Case.size())
//    {
//        if (_AllCase.end() != std::find(_AllCase.begin(), _AllCase.end(), _Case))
//        {
//            _isFind = true;
//        }
//
//        return;
//    }
//
//    for (int i = _Index; i < _Keys.size(); i++)
//    {
//        if (_isFind == true)
//        {
//            return;
//        }
//
//        _Case[_Digit] = _Keys[i];
//        combination(_Digit + 1, i + 1, _Case, _Keys, _AllCase, _isFind);
//    }
//}
//
//void combination(int _Digit, int _Index, std::vector<int> _Case, std::vector<std::pair<int, bool>>& _Keys, std::map<int, std::vector<std::string>>& _Datas, std::vector<std::vector<int>>& _AllCase, int _MaxSize, int& _Answer)
//{
//    if (_Digit == _Case.size())
//    {
//        std::set<std::vector<std::string>> Test;
//
//        for(int i = 0; i < _MaxSize; i++)
//        {
//            std::vector<std::string> Infos;
//
//            for (int j = 0; j < _Case.size(); j++)
//            {
//                Infos.push_back(_Datas[_Case[j]][i]);
//            }
//
//            Test.insert(Infos);
//        }
//
//        if (Test.size() != _MaxSize)
//        {
//            return;
//        }
//
//        for (int i = 0; i < _Case.size(); i++)
//        {
//            std::vector<int> Case(i + 1);
//            bool isFind = false;
//
//            combination(0, 0, Case, _Case, _AllCase, isFind);
//
//            if (isFind == true)
//            {
//                return;
//            }
//        }
//
//        _AllCase.push_back(_Case);
//        _Answer++;
//
//        return;
//    }
//
//    for (int i = _Index; i < _Keys.size(); i++)
//    {
//        _Case[_Digit] = _Keys[i].first;
//        combination(_Digit + 1, i + 1, _Case, _Keys, _Datas, _AllCase, _MaxSize, _Answer);
//    }
//}
//
//int solution(vector<vector<string>> relation)
//{
//    int DataMaxSize = relation.size();
//
//    std::map<int, std::vector<std::string>> Datas;
//
//    for (int i = 0; i < relation.size(); i++)
//    {
//        for (int j = 0; j < relation[i].size(); j++)
//        {
//            Datas[j].push_back(relation[i][j]);
//        }
//    }
//
//    std::vector<std::pair<int, bool>> Keys;
//
//    for (int i = 0; i < Datas.size(); i++)
//    {
//        Keys.push_back({ i, false });
//    }
//
//    int Answer = 0;
//
//    std::vector<std::vector<int>> AllCase;
//
//    for (int i = 0; i < relation.size(); i++)
//    {
//        std::vector<int> Case(i + 1);
//        combination(0, 0, Case, Keys, Datas, AllCase, DataMaxSize, Answer);
//    }
//
//    return Answer;
//}
//
//int main()
//{
//    solution({ {"a","1","aaa","c","ng"},
//{"a","1","bbb","e","g"},
//{"c","1","aaa","d","ng"},
//{"d","2","bbb","d","ng"} });
//}