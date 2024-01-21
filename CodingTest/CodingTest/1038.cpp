#include <iostream>
#include <vector>
#include <queue>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int main()
{
	Init();

	int Target = 0;

	std::cin >> Target;

	if (Target < 10)
	{
		std::cout << Target;
		return 0;
	}

	std::queue<long long> Queue;

	for (int i = 0; i < 9; i++)
	{
		Queue.push(i + 1);
	}

	int Count = 9;
	bool isAbleDecrease = true;
	long long CurNum = 0;

	while (Count < Target && Queue.size() > 0)
	{
		long long Num = Queue.front();
		Queue.pop();

		if (Num / 1000000000 >= 1)
		{
			isAbleDecrease = false;
			break;
		}

		long long Remain = Num % 10;

		for (int i = 0; i < Remain; i++)
		{
			long long DecNum = Num * 10 + i;
			CurNum = DecNum;
			Queue.push(DecNum);

			Count++;

			if (Count >= Target)
			{
				break;
			}
		}
	}

	if (isAbleDecrease == false || Count != Target)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << CurNum;
	}

	return 0;
}