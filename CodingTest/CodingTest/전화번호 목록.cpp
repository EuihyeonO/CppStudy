//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//struct Trie
//{
//    bool isEnd = false;
//    Trie* Node[26] = { nullptr, };
//
//    void Insert(const std::string& _Str, int _Index)
//    {
//        if (_Str.size() == _Index)
//        {
//            isEnd = true;
//            return;
//        }
//
//        int NumberIndex = _Str[_Index] - '0';
//
//        if (Node[NumberIndex] == nullptr)
//        {
//            Node[NumberIndex] = new Trie();
//        }
//
//        Node[NumberIndex]->Insert(_Str, _Index + 1);
//    }
//
//    //isEnd를 만나면 바로 그 때의 index를 return
//    int Find(const std::string& _Str, int _Index)
//    {
//        if (isEnd == true)
//        {
//            //std::cout << _Str[_Index] << " ";
//            return _Index;
//        }
//
//        int NumberIndex = _Str[_Index] - '0';
//
//        if (Node[NumberIndex] != nullptr)
//        {
//            return Node[NumberIndex]->Find(_Str, _Index + 1);
//        }
//        else
//        {
//            //뭔가 뭔가 오류가
//            return -1;
//        }
//    }
//};
//
//bool solution(vector<string> phone_book)
//{
//    Trie Searcher;
//
//    for (int i = 0; i < phone_book.size(); i++)
//    {
//        Searcher.Insert(phone_book[i], 0);
//    }
//
//    bool isPrefix = false;
//
//    for (int i = 0; i < phone_book.size(); i++)
//    {
//        int Length = Searcher.Find(phone_book[i], 0);
//
//        if (Length != phone_book[i].size())
//        {
//            isPrefix = true;
//            break;
//        }
//    }
//
//    return !isPrefix;
//}
