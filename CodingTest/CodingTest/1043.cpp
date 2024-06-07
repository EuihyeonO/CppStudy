#include <iostream>
#include <vector>
#include <algorithm>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int GetRoot(std::vector<int>& _Parent, int _Index)
{
	if (_Parent[_Index] == _Index)
	{
		return _Index;
	}

	return GetRoot(_Parent, _Parent[_Index]);
}

void SetParent(std::vector<int>& _Parent, int _Index_1, int _Index_2)
{
	if (_Index_1 > _Index_2)
	{
		std::swap(_Index_1, _Index_2);
	}

	int Root_1 = GetRoot(_Parent, _Index_1);
	int Root_2 = GetRoot(_Parent, _Index_2);

	_Parent[Root_2] = Root_1;
}

int main()
{
	Init();

	int NumMan = 0;
	int NumParty = 0;
	std::cin >> NumMan >> NumParty;

	std::vector<int> Parent(NumMan + 1);
	std::vector<bool> isTruth(NumMan + 1);

	for (int i = 1; i <= NumMan; i++)
	{
		Parent[i] = i;
	}

	int NumTruth = 0;
	std::cin >> NumTruth;

	std::vector<int> TruthMan(NumTruth);
	for (int i = 0; i < NumTruth; i++)
	{
		std::cin >> TruthMan[i];
		isTruth[TruthMan[i]] = true;
	}

	for (int i = 1; i < NumTruth; i++)
	{
		if (GetRoot(Parent, TruthMan[i - 1]) != GetRoot(Parent, TruthMan[i]))
		{
			SetParent(Parent, TruthMan[i - 1], TruthMan[i]);
		}
	}

	std::vector<std::vector<int>> PartyMans(NumParty);

	for (int i = 0; i < NumParty; i++)
	{
		int NumCurMan = 0;
		std::cin >> NumCurMan;

		for (int j = 0; j < NumCurMan; j++)
		{
			int CurMan = 0;

			std::cin >> CurMan;
			PartyMans[i].push_back(CurMan);
		}

		for (int j = 1; j < NumCurMan; j++)
		{
			int Index_1 = PartyMans[i][j - 1];
			int Index_2 = PartyMans[i][j];

			int Root_1 = GetRoot(Parent, Index_1);
			int Root_2 = GetRoot(Parent, Index_2);

			if (Root_1 != Root_2)
			{
				SetParent(Parent, Index_1, Index_2);
			}
		}
	}

	for (int i = 0; i < NumTruth; i++)
	{
		int CurMan = TruthMan[i];
		int CurManRoot = GetRoot(Parent, CurMan);

		for (int j = 1; j <= NumMan; j++)
		{
			if (CurManRoot == GetRoot(Parent, j))
			{
				isTruth[j] = true;
			}
		}
	}

	int PartyIndex = NumParty;

	for (int i = 0; i < NumParty; i++)
	{
		for (int j = 0; j < PartyMans[i].size(); j++)
		{
			int CurMan = PartyMans[i][j];

			if (isTruth[CurMan] == true)
			{
				PartyIndex--;
				break;
			}
		}
	}

	std::cout << PartyIndex;

	return 0;
}