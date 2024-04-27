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

	int SizeOfSequence = 0;
	std::cin >> SizeOfSequence;

	std::vector<int> A(SizeOfSequence);
	std::vector<int> B(SizeOfSequence);
	std::vector<int> C(SizeOfSequence);
	std::vector<int> D(SizeOfSequence);

	for (int i = 0; i < SizeOfSequence; i++)
	{
		std::cin >> A[i] >> B[i] >> C[i] >> D[i];
	}

	std::vector<int> AB(SizeOfSequence * SizeOfSequence);
	std::vector<int> CD(SizeOfSequence * SizeOfSequence);

	for (int i = 0; i < SizeOfSequence; i++)
	{
		for (int j = 0; j < SizeOfSequence; j++)
		{
			AB[j + SizeOfSequence * i] = A[i] + B[j];
			CD[j + SizeOfSequence * i] = C[i] + D[j];
		}
	}

	std::sort(AB.begin(), AB.end());
	std::sort(CD.begin(), CD.end());

	int MaxIndex = SizeOfSequence * SizeOfSequence - 1;
	long long ZeroCount = 0;

	for (int i = 0; i <= MaxIndex; i++)
	{
		int CurValue = AB[i];

		int LowerBound = std::lower_bound(CD.begin(), CD.end(), -CurValue) - CD.begin();
		int UpperBound = std::upper_bound(CD.begin(), CD.end(), -CurValue) - CD.begin();

		ZeroCount += UpperBound - LowerBound;
	}

	std::cout << ZeroCount;

	return 0;
}