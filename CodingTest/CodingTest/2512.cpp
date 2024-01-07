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

	long long NumOfProvince = 0;
	long long TotalBudget = 0;

	std::cin >> NumOfProvince;
	std::vector<int> RequiredBudgets(NumOfProvince, 0);

	for (int i = 0; i < NumOfProvince; i++)
	{
		int Budget = 0;
		std::cin >> Budget;

		RequiredBudgets[i] = Budget;
	}

	std::cin >> TotalBudget;

	sort(RequiredBudgets.begin(), RequiredBudgets.end());

	int Start = 0;
	int End = RequiredBudgets[RequiredBudgets.size() - 1];
	
	int Mid = 0;
	int Sum = 0;
	int Answer = 0;

	while (Start <= End)
	{
		Sum = 0;
		Mid = (Start + End) / 2;

		for (int i = 0; i < NumOfProvince; i++)
		{
			Sum += std::min(RequiredBudgets[i], Mid);
		}

		if (Sum > TotalBudget)
		{
			End = Mid - 1;
			
		}
		else if (Sum <= TotalBudget)
		{
			Answer = Mid;
			Start = Mid + 1;
		}

	}

	std::cout << Answer;

	return 0;
}