#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int main()
{
	Init();

	long long Width = 0;
	std::cin >> Width;

	long long TargetIndex = 0;
	std::cin >> TargetIndex;

	long long Start = 1;
	long long End = (Width * Width);
	long long Mid = 0;

	long long  Answer = LLONG_MAX;

	while (Start <= End)
	{
		Mid = (Start + End) / 2;

		long long SmallerCount = 0;

		for (long long i = 1; i <= Width; i++)
		{
			if (i * Width <= Mid)
			{
				SmallerCount += Width;
			}
			else
			{
				long long Share = Mid / i;
				SmallerCount += Share;
			}
		}

		if (SmallerCount >= TargetIndex)
		{
			Answer = std::min(Answer, Mid);
			End = Mid - 1;
		}
		else
		{
			Start = Mid + 1;
		}
	}

	std::cout << Answer;

	return 0; 
}