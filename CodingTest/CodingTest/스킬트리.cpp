//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//
//using namespace std;
//
//// 1.스킬트리의 문자를 하나씩 검사
//// 2.선행스킬 문자열에 포함되어있는 문자라면, Queue에 담는다.
//// 3.문자열 검사가 끝나면, Queue에 담긴 원소의 순서가 선행스킬 문자열의 순서와 같은지 검사.
//// 4.중간에 다른 순서가 있다면 Break 하고, 없다면 Count++ 
//// 5. Count를 반환.
//
//int solution(string skill, vector<string> skill_trees)
//{
//    string Copy = skill;
//
//    int Count = 0;
//
//    function<bool(char _Skill)> Testing = [=](char _Skill)
//        {
//            for (int i = 0; i < Copy.size(); i++)
//            {
//                if (Copy[i] == _Skill)
//                {
//                    return true;
//                }
//            }
//
//            return false;
//        };
//
//    for (int i = 0; i < skill_trees.size(); i++)
//    {
//        queue<char> SkillQueue;
//
//        for (int j = 0; j < skill_trees[i].size(); j++)
//        {
//            if (Testing(skill_trees[i][j]) == true)
//            {
//                SkillQueue.push(skill_trees[i][j]);
//            }
//        }
//
//        int Index = 0;
//
//        while (SkillQueue.size() > 0)
//        {
//            char Skill = SkillQueue.front();
//
//            if (Skill == skill[Index])
//            {
//                Index++;
//                SkillQueue.pop();
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        if (SkillQueue.size() == 0)
//        {
//            Count++;
//        }
//    }
//
//    return Count;
//}