#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int k, vector<int> enemy)
{
    int Round = enemy.size();
    int Start = 0;
    int End = Round - 1;

    int Mid = 0;
    int Sum = 0;

    int Answer = 1;

    std::vector<int> Test;
    Test.reserve(Round);

    while (Start <= End)
    {
        Test.resize(0);
        Sum = 0;

        Mid = (Start + End) / 2;

        for (int i = 0; i <= Mid; i++)
        {
            Test.push_back(enemy[i]);
            Sum += enemy[i];
        }

        if (Sum <= n || Mid < k - 1)
        {
            Start = Mid + 1;

            Answer = std::max(Mid + 1, Answer);
        }
        else
        {
            sort(Test.begin(), Test.end());

            for (int i = 0; i < k; i++)
            {
                Sum -= Test[Mid - i];
            }

            if (Sum > n)
            {
                End = Mid - 1;
                continue;
            }

            int Count = 0;

            while (Sum <= n && Mid + Count < Round - 1)
            {
                Sum += enemy[Mid + Count];
                Count++;
            }

            Answer = std::max(Answer, Mid + Count);

            Start = Mid + 1;
        }
    }

    return Answer;
}

int main()
{
    solution(2, 4, { 4, 2, 4, 5, 3, 3, 1});
}
