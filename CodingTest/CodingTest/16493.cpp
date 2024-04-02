#include <iostream>
#include <vector>
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

	int MaxDays = 0;
	int NumOfChapter = 0;
	
	std::cin >> MaxDays >> NumOfChapter;

	std::vector<std::vector<int>> DP(NumOfChapter + 1, std::vector<int>(MaxDays + 1, 0));
	std::vector<std::pair<int, int>>Chapters(NumOfChapter + 1);

	for (int i = 1; i <= NumOfChapter; i++)
	{
		int Days = 0;
		int Pages = 0;
		std::cin >> Days >> Pages;

		Chapters[i] = { Days, Pages };
	}

	for (int i = 1; i <= NumOfChapter; i++)
	{
		for (int j = 1; j <= MaxDays; j++)
		{
			int CurDays = Chapters[i].first;
			int CurPages = Chapters[i].second;

			if (CurDays <= j)
			{
				DP[i][j] = std::max(DP[i - 1][j], DP[i - 1][j - CurDays] + CurPages);
			}
			else
			{
				DP[i][j] = DP[i - 1][j];
			}
		}
	}

	std::cout << DP[NumOfChapter][MaxDays];

	return 0;
}