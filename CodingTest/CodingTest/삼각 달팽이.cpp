#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
	int MaxHeight = n;

	std::vector<std::vector<int>> Stair;
	Stair.resize(MaxHeight);

	for (int i = 0; i < MaxHeight; i++)
	{
		Stair[i].resize(i + 1);
	}

	std::vector<std::pair<int, int>> DirArr(3);
	
	DirArr[0] = { 1, 0 };
	DirArr[1] = { 0, 1 };
	DirArr[2] = { -1, -1 };

	std::vector<int> Answer;
	Answer.reserve((MaxHeight) * (MaxHeight + 1) / 2);
	
	std::pair<int, int> CurPos = { 0, 0 };
	int Count = 0;

	int DirCount = 0;
	int MaxDirCount = MaxHeight;

	int CurDir = 0;

	while (MaxDirCount > 0)
	{
		Count++;
		DirCount++;
		Stair[CurPos.first][CurPos.second] = Count;

		if (DirCount >= MaxDirCount)
		{
			MaxDirCount--;
			DirCount = 0;

			CurDir++;

			if (CurDir >= 3)
			{
				CurDir = 0;
			}
		}
		
		CurPos = { CurPos.first + DirArr[CurDir].first, CurPos.second + DirArr[CurDir].second };
	}

	for (int i = 0; i < MaxHeight; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			Answer.push_back(Stair[i][j]);
		}
	}

    return Answer;
}

int main()
{
	solution(4);
	return 0;
}