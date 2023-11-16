#include <iostream>
#include <vector>

int main()
{
	int Length = 0;
	std::cin >> Length;

	std::vector<int> Stair;
	Stair.resize(Length + 1, 0);

	for (int i = 1; i <= Length; i++)
	{
		std::cin >> Stair[i];
	}

	std::vector<std::vector<int>> Dp;

	Dp.resize(2);
	Dp[0].resize(Length + 1);
	Dp[1].resize(Length + 1);

	Dp[0][1] = Stair[1];
	Dp[1][1] = Stair[1];

	Dp[0][2] = Stair[2];
	Dp[1][2] = Stair[1] + Stair[2];

	Dp[0][3] = std::max(Dp[0][1], Dp[1][1]) + Stair[3];
	Dp[1][3] = Dp[0][2] + Stair[3];

	int Index = 3;

	while (Index <= Length)
	{
		Dp[0][Index] = std::max(Dp[0][Index - 2], Dp[1][Index - 2]) + Stair[Index];
		Dp[1][Index] = Dp[0][Index - 1] + Stair[Index];

		Index++;
	}

	std::cout << std::max(Dp[0][Length], Dp[1][Length]);
	return 0;
}