//#include <iostream>
//#include <set>
//#include <string>
//
//int main()
//{
//    std::set<std::string> AllClass;
//    std::set<std::string> MyClass;
//
//    int NumAllClass = 0;
//    std::cin >> NumAllClass;
//
//    for (int i = 0; i < NumAllClass; i++)
//    {
//        std::string InputStr;
//        std::cin >> InputStr;
//
//        AllClass.insert(InputStr);
//    }
//
//    int NumMyClass = 0;
//    std::cin >> NumMyClass;
//
//    for (int i = 0; i < NumMyClass; i++)
//    {
//        std::string InputStr;
//        std::cin >> InputStr;
//
//        MyClass.insert(InputStr);
//    }
//
//    std::set<std::string>::iterator StartIter = MyClass.begin();
//    std::set<std::string>::iterator EndIter = MyClass.end();
//
//    while (StartIter != EndIter)
//    {
//        const std::string& CurStr = *StartIter;
//
//        if (AllClass.find(CurStr) != AllClass.end())
//        {
//            AllClass.erase(CurStr);
//        }
//
//        StartIter++;
//    }
//
//    std::cout << AllClass.size() << "\n";
//    StartIter = AllClass.begin();
//    EndIter = AllClass.end();
//
//    while (StartIter != EndIter)
//    {
//        std::cout << *StartIter << "\n";
//        StartIter++;
//    }
//
//    return 0;
//}