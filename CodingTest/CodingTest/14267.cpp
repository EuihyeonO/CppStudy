#include <iostream>
#include <vector>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int main()
{
	Init();

	int NumWorker = 0;
	int NumPraise = 0;
	std::cin >> NumWorker >> NumPraise;

	std::vector<int> Superiors(NumWorker + 1);
	std::vector<int> Praises(NumWorker + 1);
	std::vector<std::vector<int>> Underings(NumWorker + 1);

	for (int i = 1; i <= NumWorker; i++)
	{
		std::cin >> Superiors[i];
		
		if (Superiors[i] != -1)
		{
			Underings[Superiors[i]].push_back(i);
		}
	}

	for (int i = 1; i <= NumPraise; i++)
	{
		int Worker = 0;
		int Praise = 0;
		std::cin >> Worker >> Praise;
	
		Praises[Worker] += Praise;
	}
	
	for (int i = 1; i <= NumWorker; i++)
	{
		for (int j = 0; j < Underings[i].size(); j++)
		{
			int CurUndering = Underings[i][j];
			Praises[CurUndering] += Praises[i];
		}
	}

	for (int i = 1; i <= NumWorker; i++)
	{
		std::cout << Praises[i] << " ";
	}

	return 0;
}