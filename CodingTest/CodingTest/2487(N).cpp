#include <iostream>
#include <vector>
#include <set>

void Init()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
}

int GetGCD(int _Bigger, int _Smaller)
{
	int Remain = 0;

	while (_Smaller != 0)
	{
		Remain = _Bigger % _Smaller;
		_Bigger = _Smaller;
		_Smaller = Remain;
	}

	return _Bigger;
}

int GetLCM(int _Bigger, int _Smaller)
{
	int GCD = GetGCD(_Bigger, _Smaller);
	int LCM = _Bigger * _Smaller / GCD;

	return LCM;
}

int main()
{
	Init();

	int NumSize = 0;
	std::cin >> NumSize;
	
	std::vector<int> Cycle(NumSize + 1, 0);
	for (int i = 1; i <= NumSize; i++)
	{
		int Num = 0;
		std::cin >> Num;
	
		Cycle[Num] = i;
	}
	
	std::vector<bool> CycleCheck(NumSize + 1, false);
	std::set<int> Period;
	
	for (int i = 1; i <= NumSize; i++)
	{
		int CurIndex = i;	
		if (CycleCheck[i] != false)
		{
			continue;
		}
	
		std::set<int> Links;
		while (true)
		{
			CurIndex = Cycle[CurIndex];
			Links.insert(CurIndex);
	
			if (CurIndex == i)
			{
				break;
			}
		}
	
		std::set<int>::iterator CurIter = Links.begin();
		std::set<int>::iterator EndIter = Links.end();
	
		while (CurIter != EndIter)
		{
			CycleCheck[*CurIter] = true;
			CurIter++;
		}
	
		Period.insert(Links.size());
	}

	std::set<int>::iterator CurIter = Period.begin();
	std::set<int>::iterator EndIter = Period.end();
	
	int LCM = *CurIter;
	
	while (CurIter != EndIter)
	{
		int CurNum = *CurIter;
		LCM = GetLCM(LCM, CurNum);
		CurIter++;
	}
	
	std::cout << LCM;

	return 0;
}