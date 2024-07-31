#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

struct Compare
{
	bool operator()(const std::pair<long long, long long>& _Left, const std::pair<long long, long long>& _Right)
	{
		if (_Left.first == _Right.first)
		{
			return _Left.second < _Right.second;
		}

		return _Left.first > _Right.first;
	}
};

int main()
{
	Init();

	long long NumJewerly = 0;
	long long NumBag = 0;
	std::cin >> NumJewerly >> NumBag;

	std::priority_queue<std::pair<long long, long long>, std::vector<std::pair<long long, long long>>, Compare> Jewerly;
	std::priority_queue<long long, std::vector<long long>, std::greater<long long>> Bag;
	std::priority_queue<long long, std::vector<long long>, std::greater<long long>> PopBag;
	
	for (long long i = 0; i < NumJewerly; i++)
	{
		std::pair<long long, long long> Input;
		std::cin >> Input.first >> Input.second;

		Jewerly.push(Input);
	}

	for (long long i = 0; i < NumBag; i++)
	{
		long long Input;
		std::cin >> Input;

		Bag.push(Input);
	}

	long long Answer = 0;

	while (Bag.size() > 0 && Jewerly.size() > 0)
	{
		if (Jewerly.top().first <= Bag.top())
		{
			Answer += Jewerly.top().second;
			Jewerly.pop();
			Bag.pop();
		}
		else
		{
			Bag.pop();
		}
	}

	std::cout << Answer;

	return 0;
}
