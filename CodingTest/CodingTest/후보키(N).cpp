#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<vector<string>> relation) 
{
    std::set<std::string> Numbers;
    std::set<std::string> Names;
    std::set<std::string> Fields;
    std::set<std::string> Grades;

    for (int i = 0; i < relation.size(); i++)
    {
        Numbers.insert(relation[i][0]);
        Names.insert(relation[i][1]);
        Fields.insert(relation[i][2]);
        Grades.insert(relation[i][3]);
    }

    return 0;
}

//int main()
//{
//    std::vector<std::vector<std::string>> Test = {{"100", "ryan", "music", "2"}, {"200", "apeach", "math", "2"}, {"300", "tube", "computer", "3"}, {"400", "con", "computer", "4"}, {"500", "muzi", "music", "3"}, {"600", "apeach", "music", "2"}};
//    solution(Test);
//    return 0;
//}