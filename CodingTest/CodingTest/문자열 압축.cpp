//#include <string>
//#include <vector>
//#include <set>
//
//int GetCompressedLength(std::string _String, int _CompressSize)
//{
//    int UnCompressedSize = _String.size();
//    std::string CompressedString;
//
//    int Index = 0;
//
//    while (true)
//    {
//        if (Index >= _String.size())
//        {
//
//            if (CompressedString.size() == 0)
//            {
//                return UnCompressedSize;
//            }
//            else
//            {
//                int a = CompressedString.size();
//                return CompressedString.size();
//            }
//        }
//
//        std::string Temp_Str_First;
//        std::string Temp_Str_Second;
//
//        int Count = 0;
//
//        while (true)
//        {
//
//            if (Index + (Count + 1) * _CompressSize >= UnCompressedSize)
//            {
//                break;
//            }
//
//            Temp_Str_First = _String.substr(Index + Count * _CompressSize, _CompressSize);
//            Temp_Str_Second = _String.substr(Index + (Count + 1) * _CompressSize, _CompressSize);
//
//            if (Temp_Str_First == Temp_Str_Second)
//            {
//                Count++;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        if (Count != 0)
//        {
//            CompressedString += std::to_string(Count + 1) + Temp_Str_First;
//        }
//        else
//        {
//            if (Temp_Str_First == "")
//            {
//                Temp_Str_First = _String.substr(Index, UnCompressedSize - 1);
//            }
//
//            CompressedString += Temp_Str_First;
//        }
//
//        Index += (Count + 1) * _CompressSize;
//    }
//}
//
//int solution(std::string s)
//{
//    std::set<int> LengthSet;
//
//    if (s.size() == 1)
//    {
//        LengthSet.insert(1);
//    }
//
//    for (int i = 1; i < s.size() / 2 + 1; i++)
//    {
//        LengthSet.insert(GetCompressedLength(s, i));
//    }
//
//    int answer = *LengthSet.begin();
//
//    return answer;
//}