#include <string>
#include <vector>
#include <unordered_set>
#include <climits>

using namespace std;

vector<int> solution(vector<string> gems)
{
    std::unordered_set<std::string> Gems;
    Gems.reserve(100000);

    for (int i = 0; i < gems.size(); i++)
    {
        Gems.insert(gems[i]);
    }

    int NumOfGems = Gems.size();

    int Start = 0;
    int End = 0;

    std::pair<int, int> MinIndex;
    int MinLength = INT_MAX;

    while (Start <= End)
    {
        if (End - Start + 1 < NumOfGems)
        {
            End++;

            if (End >= gems.size())
            {
                break;
            }

            continue;
        }

        std::unordered_set<std::string> GemTest;

        for (int i = Start; i <= End; i++)
        {
            std::string CurGem = gems[i];
            GemTest.insert(CurGem);

            if (GemTest.size() == NumOfGems)
            {
                break;
            }
        }

        if (GemTest.size() < NumOfGems)
        {
            if (End + 1 < gems.size())
            {
                End++;
            }
            else
            {
                Start++;
            }

        }
        else
        {
            int CurLength = End - Start + 1;

            if (CurLength < MinLength)
            {
                MinLength = CurLength;
                MinIndex = { Start, End };
            }

            Start++;
        }
    }

    return { MinIndex.first + 1, MinIndex.second + 1 };
}