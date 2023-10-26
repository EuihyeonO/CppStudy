#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

struct IntTime
{
    int StartTime = -1;
    int EndTime = -1;

    int Room = -1;
};

IntTime GetIntTime(const std::string& _StartTime, const std::string& _EndTime)
{
    IntTime NewTime;

    std::string StartHour = _StartTime.substr(0, 2);
    std::string StartMin = _StartTime.substr(3, 5);

    std::string EndHour = _EndTime.substr(0, 2);
    std::string EndMin = _EndTime.substr(3, 5);

    NewTime.StartTime = std::stoi(StartHour) * 60 + std::stoi(StartMin);
    NewTime.EndTime = std::stoi(EndHour) * 60 + std::stoi(EndMin);

    return NewTime;
}

bool Compare(std::vector<std::string>& _Left, std::vector<std::string>& _Right)
{
    if (GetIntTime(_Left[0], _Left[1]).EndTime < GetIntTime(_Right[0], _Right[1]).EndTime)
    {
        return true;
    }

    return false;
}

int solution(vector<vector<string>> book_time)
{
    std::vector<std::vector<std::string>> SortedBookTime;
    SortedBookTime = book_time;

    sort(SortedBookTime.begin(), SortedBookTime.end(), Compare);

    std::vector<IntTime> IntBookTime;

    for (int i = 0; i < SortedBookTime.size(); i++)
    {
        IntBookTime.push_back(GetIntTime(SortedBookTime[i][0], SortedBookTime[i][1]));
    }

    int StandardIndex = 0;
    int CurRoomNum = 0;

    while (StandardIndex < IntBookTime.size())
    {
        if (IntBookTime[StandardIndex].Room != -1)
        {
            StandardIndex++;
            continue;
        }

        IntTime StandardTime;

        std::list<int> Indexs;

        IntBookTime[StandardIndex].Room = ++CurRoomNum;
        StandardTime = IntBookTime[StandardIndex];

        for (int i = StandardIndex + 1; i < IntBookTime.size(); i++)
        {
            if(IntBookTime[i].Room != -1)
            {
                continue;
            }

            if (IntBookTime[i].StartTime >= StandardTime.EndTime + 10)
            {
                IntBookTime[i].Room = StandardTime.Room;
                Indexs.push_back(i);
            }
        }

        std::list<int>::iterator StandardIter = Indexs.begin();

        std::list<int>::iterator StartIter = Indexs.begin();
        std::list<int>::iterator EndIter = Indexs.end();


        while (StandardIter != EndIter)
        {
            int StandardIndex = *StandardIter;
        
            StartIter = StandardIter;
        
            while (StartIter != EndIter)
            {
                StartIter++;
        
                if (StartIter == EndIter)
                {
                    break;
                }
        
                int CurIndex = *StartIter;
        
                if (IntBookTime[StandardIndex].EndTime + 10 > IntBookTime[CurIndex].StartTime)
                {
                    IntBookTime[CurIndex].Room = -1;
                    StartIter = Indexs.erase(StartIter);
        
                    EndIter = Indexs.end();
                    continue;
                }
            }
        
            StandardIter++;
        }

        StandardIndex++;

        for (int i = 0; i < IntBookTime.size(); i++)
        {
            std::cout << IntBookTime[i].StartTime << " " << IntBookTime[i].EndTime << " " << IntBookTime[i].Room << std::endl;
        }

        std::cout << std::endl;
    }

    return CurRoomNum;
}

int main()
{
    int Answer = solution({ {"05:57", "06:02"} ,{"04:00", "06:59"},{"03:56", "07:57"},{"06:12", "08:55"},{"07:09", "07:11"} });
    return 0;
}

