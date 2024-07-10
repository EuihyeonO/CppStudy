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

	int NumLiquid = 0;
	std::cin >> NumLiquid;

	std::vector<int> PosLiquids;
	std::vector<int> NegLiquids;

	PosLiquids.reserve(NumLiquid);
	NegLiquids.reserve(NumLiquid);
	
	for (int i = 0; i < NumLiquid; i++)
	{
		int Input = 0;
		std::cin >> Input;
		
		if (Input < 0)
		{
			NegLiquids.push_back(Input);
		}
		else
		{
			PosLiquids.push_back(Input);
		}
	}

	if (NegLiquids.size() == 0)
	{
		std::cout << PosLiquids[0] << " " << PosLiquids[1];
		return 0;
	}
	else if (PosLiquids.size() == 0)
	{
		std::cout << NegLiquids[NumLiquid - 2] << " " << NegLiquids[NumLiquid - 1];
		return 0;
	}

	int NegIndex = NegLiquids.size() - 1;
	int PosIndex = 0;
	
	int MinSum = 2000000001;
	std::pair<int, int> MinPair = { 0, 0 };

	while (true)
	{
		int Sum = NegLiquids[NegIndex] + PosLiquids[PosIndex];

		if (MinSum > std::abs(Sum))
		{
			MinSum = std::abs(Sum);
			MinPair = { NegLiquids[NegIndex] ,PosLiquids[PosIndex] };
		}

		if (Sum < 0)
		{
			PosIndex++;

			if (PosIndex >= PosLiquids.size())
			{
				break;
			}
		}
		else if(Sum > 0)
		{
			NegIndex--;

			if (NegIndex < 0)
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
	
	std::cout << MinPair.first << " " << MinPair.second;

	return 0;
}