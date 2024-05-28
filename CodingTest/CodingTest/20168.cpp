#include <iostream>
#include <vector>
#include <algorithm>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

struct Edge
{
	int Start = 0;
	int End = 0;

	int Weight = 0;
};

std::vector<bool> isVisit;

int MinCost = 99999999;

void DFS(int _CurNode, int _EndNode, int _Money, int _MaxMoney, int _MaxCost, std::vector<std::vector<int>>& _Links, std::vector<std::vector<int>>& _Cost)
{
	if (_Money > _MaxMoney)
	{
		return;
	}

	if (_MaxCost > MinCost)
	{
		return;
	}

	if (_CurNode == _EndNode)
	{
		MinCost = std::min(MinCost, _MaxCost);
		return;
	}

	isVisit[_CurNode] = true;

	for (int i = 0; i < _Links[_CurNode].size(); i++)
	{
		int NextNode = _Links[_CurNode][i];

		if (isVisit[NextNode] == true)
		{
			continue;
		}

		DFS(NextNode, _EndNode, _Money + _Cost[_CurNode][NextNode], _MaxMoney, std::max(_MaxCost, _Cost[_CurNode][NextNode]), _Links, _Cost);
	}

	isVisit[_CurNode] = false;
}

int main()
{
	Init();

	int NumNode = 0;
	int NumEdge = 0;
	int StartNode = 0;
	int DestNode = 0;
	int Money = 0;

	std::cin >> NumNode >> NumEdge >> StartNode >> DestNode >> Money;

	std::vector<std::vector<int>> Link(NumNode);
	std::vector<std::vector<int>> Cost(NumNode, std::vector<int>(NumNode, 0));
	isVisit.resize(NumNode, false);

	for (int i = 0; i < NumEdge; i++)
	{
		int Start = 0;
		int End = 0;
		int Weight = 0;
		std::cin >> Start >> End >> Weight;

		Link[Start - 1].push_back(End);
		Link[End - 1].push_back(Start);

		Cost[Start - 1][End - 1] = Weight;
		Cost[End - 1][Start - 1] = Weight;
	}

	DFS(StartNode - 1, DestNode - 1, 0, Money, 0, Link, Cost);
	
	if (MinCost == 99999999)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << MinCost;
	}

	return 0;
}