//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
////Language -> Job -> Experience -> Food -> Score
//
//int StringToInt(const std::string& _Str)
//{
//    if (_Str == "cpp" || _Str == "backend" || _Str == "junior" || _Str == "chicken")
//    {
//        return 0;
//    }
//    else if (_Str == "java" || _Str == "frontend" || _Str == "senior" || _Str == "pizza")
//    {
//        return 1;
//    }
//    else if (_Str == "python")
//    {
//        return 2;
//    }
//    else
//    {
//        return 3;
//    }
//}
//
//struct Trie
//{
//    bool isScore = false;
//    std::vector<int> Nums;
//
//    Trie* Node[4] = { nullptr, };
//
//    void Insert(const std::vector<std::string>& _Info, int _Index)
//    {
//        if (_Index == 5)
//        {
//            isScore = true;
//
//            Nums.push_back(std::stoi(_Info[4]));
//            return;
//        }
//
//        int NextIndex = StringToInt(_Info[_Index]);
//
//        if (Node[NextIndex] == nullptr)
//        {
//            Node[NextIndex] = new Trie();
//        }
//
//        Node[NextIndex]->Insert(_Info, _Index + 1);
//    }
//
//    void GetScores(const std::vector<std::string>& _Info, int _Index, std::vector<int>& _In)
//    {
//        if (_Index == 5)
//        {
//            for (int i = 0; i < Nums.size(); i++)
//            {
//                _In.push_back(Nums[i]);
//            }
//
//            return;
//        }
//
//        if (_Info[_Index] == "-")
//        {
//            for (int i = 0; i < 4; i++)
//            {
//                if (Node[i] != nullptr)
//                {
//                    Node[i]->GetScores(_Info, _Index + 1, _In);
//                }
//            }
//        }
//        else
//        {
//            int NextIndex = StringToInt(_Info[_Index]);
//
//            if (Node[NextIndex] != nullptr)
//            {
//                Node[NextIndex]->GetScores(_Info, _Index + 1, _In);
//            }
//        }
//    }
//};
//
//vector<int> solution(vector<string> info, vector<string> query)
//{
//    Trie Searcher;
//
//    for (int i = 0; i < info.size(); i++)
//    {
//        std::string Language, Job, Experience, Food, Score;
//        std::stringstream A(info[i]);
//
//        A >> Language >> Job >> Experience >> Food >> Score;
//
//        std::vector<std::string> Strs = { Language, Job, Experience, Food, Score };
//        Searcher.Insert(Strs, 0);
//    }
//
//    std::vector<int> Answer;
//    Answer.reserve(query.size());
//
//    for (int i = 0; i < info.size(); i++)
//    {
//        std::string Language, Job, Experience, Food, Score, Dummy;
//        std::stringstream A(query[i]);
//
//        A >> Language >> Dummy >> Job >> Dummy >> Experience >> Dummy >> Food >> Score;
//
//        std::vector<std::string> Strs = { Language, Job, Experience, Food, Score };
//        std::vector<int> Scores;
//        Searcher.GetScores(Strs, 0, Scores);
//        
//        int ScoreInt = std::stoi(Score);
//        int Count = 0;
//
//        for (int i = 0; i < Scores.size(); i++)
//        {
//            if (Scores[i] >= ScoreInt)
//            {
//                Count++;
//            }
//        }
//
//        Answer.push_back(Count);
//    }
//
//    return Answer;
//}
//
//int main()
//{
//    solution({ "java backend junior pizza 150", "python frontend senior chicken 210", "python frontend senior chicken 150", "cpp backend senior pizza 260", "java backend junior chicken 80", "python backend senior chicken 50" }, {"java and backend and junior and pizza 100", "python and frontend and senior and chicken 200", "cpp and - and senior and pizza 250", "- and backend and senior and - 150", "- and - and - and chicken 100", "- and - and - and - 150"});
//}