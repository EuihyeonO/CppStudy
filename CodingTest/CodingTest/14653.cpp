#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int main()
{
	Init();

	int NumOfMan = 0;
	int NumOfMsg = 0;
	int TargetMsgIndex = 0;

	std::cin >> NumOfMan >> NumOfMsg >> TargetMsgIndex;

	std::vector<std::pair<int, char>> Msgs(NumOfMsg);

	for (int i = 0; i < NumOfMsg; i++)
	{
		std::cin >> Msgs[i].first;
		std::cin >> Msgs[i].second;
	}

	if (Msgs[TargetMsgIndex - 1].first <= 0)
	{
		std::cout << -1;
		return 0;
	}

	std::vector<int> MansLastIndex(NumOfMan, -1);

	int MaxIndex = NumOfMsg - 1;
	for (int i = NumOfMsg - 1; i >= 0; i--)
	{
		if (i < NumOfMsg - 1 && Msgs[i].first != Msgs[i + 1].first)
		{
			MaxIndex = i;
		}

		int CurReceiveIndex = Msgs[i].second - 'A';

		MansLastIndex[CurReceiveIndex] = std::max(MansLastIndex[CurReceiveIndex], MaxIndex);
	}

	MansLastIndex[0] = INT_MAX;

	int Count = 0;
	for(int i = 0; i < NumOfMan; i++)
	{
		if (MansLastIndex[i] < TargetMsgIndex - 1)
		{
			char CurChar = i + 'A';
			std::cout << CurChar << " ";

			Count++;
		}
	}

	if (Count == 0)
	{
		std::cout << -1;
	}

 	return 0;
}