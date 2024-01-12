//#include <string>
//#include <string_view>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct File
//{
//    std::string Head = "";
//    std::string Number = "";
//    std::string Tail = "";
//
//    int Index = 0;
//};
//
//File ConvertStringToFileStruct(const std::string& _String)
//{
//    File ReturnFile;
//
//    int StartIndex = 0;
//    int EndIndex = 0;
//
//    while (true)
//    {
//        if (_String[EndIndex] >= 48 && _String[EndIndex] <= 57)
//        {
//            break;
//        }
//
//        EndIndex++;
//    }
//
//    ReturnFile.Head = _String.substr(StartIndex, EndIndex);
//
//    StartIndex = EndIndex;
//
//    while (true)
//    {
//        if (!(_String[EndIndex] >= 48 && _String[EndIndex] <= 57))
//        {
//            break;
//        }
//
//        EndIndex++;
//    }
//
//    ReturnFile.Number = _String.substr(StartIndex, EndIndex - StartIndex);
//
//    if (ReturnFile.Number.size() > 5)
//    {
//        int Exceed = ReturnFile.Number.size() - 5;
//        EndIndex -= Exceed;
//
//        ReturnFile.Number = ReturnFile.Number.substr(0, 5);
//    }
//
//    ReturnFile.Tail = _String.substr(EndIndex, _String.size() - EndIndex);
//
//    return ReturnFile;
//}
//
//std::string ConvertFileStructToString(const File& _File)
//{
//    std::string ReturnStr = _File.Head + _File.Number;
//
//    if (_File.Tail.size() > 0)
//    {
//        ReturnStr += _File.Tail;
//    }
//
//    return ReturnStr;
//}
//
//
//bool isLeftFirst(const File& _Left, const File& _Right)
//{
//    std::string UpperLeftHead = "";
//    std::string UpperRightHead = "";
//
//    for (int i = 0; i < _Left.Head.size(); i++)
//    {
//        UpperLeftHead.push_back(std::toupper(_Left.Head[i]));
//    }
//
//    for (int i = 0; i < _Right.Head.size(); i++)
//    {
//        UpperRightHead.push_back(std::toupper(_Right.Head[i]));
//    }
//
//    if (UpperLeftHead != UpperRightHead)
//    {
//        return UpperLeftHead < UpperRightHead;
//    }
//    else
//    {
//        int LeftNumber = std::stoi(_Left.Number);
//        int RightNumber = std::stoi(_Right.Number);
//
//        if (LeftNumber != RightNumber)
//        {
//            return LeftNumber < RightNumber;
//        }
//        else
//        {
//            return _Left.Index < _Right.Index;
//        }
//    }
//}
//
//vector<string> solution(vector<string> files)
//{
//    size_t NumOfFile = files.size();
//
//    std::vector<File> DevidedFile;
//    DevidedFile.reserve(NumOfFile);
//
//    for (int i = 0; i < NumOfFile; i++)
//    {
//        DevidedFile.push_back(ConvertStringToFileStruct(files[i]));
//        DevidedFile[i].Index = i;
//    }
//
//    stable_sort(DevidedFile.begin(), DevidedFile.end(), isLeftFirst);
//
//    std::vector<std::string> Answer;
//    Answer.reserve(NumOfFile);
//
//    for (int i = 0; i < NumOfFile; i++)
//    {
//        Answer.push_back(ConvertFileStructToString(DevidedFile[i]));
//    }
//
//    return Answer;
//}
//
//int main()
//{
//    return 0;
//}