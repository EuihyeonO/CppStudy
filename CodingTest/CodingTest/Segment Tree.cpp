#include <vector>

std::vector<int> Nums;
std::vector<int> SegmentTree;

int InitTree(int _Start, int _End, int _CurIndex)
{
	if (_Start == _End)
	{
		SegmentTree[_CurIndex] = Nums[_Start];
		return SegmentTree[_CurIndex];
	}

	int Mid = (_Start + _End) / 2;

	int Left = InitTree(_Start, Mid, _CurIndex * 2);
	int Right = InitTree(Mid + 1, _End, _CurIndex * 2 + 1);
	SegmentTree[_CurIndex] = Left + Right;

	return SegmentTree[_CurIndex];
}

int GetSum(int _NumStart, int _NumEnd, int _SegStart, int _SegEnd, int _CurIndex)
{
	if (_SegStart > _NumEnd || _SegEnd < _NumStart)
	{
		return 0;
	}
	else if(_SegStart <= _NumStart && _SegEnd >= _NumEnd)
	{
		return SegmentTree[_CurIndex];
	}

	int _NumMid = (_NumStart + _NumEnd) / 2;

	return GetSum(_NumStart, _NumMid, _SegStart, _SegEnd, _CurIndex * 2) + GetSum(_NumMid + 1, _NumEnd, _SegStart, _SegEnd, _CurIndex * 2 + 1);
}

void Update(int _NumStart, int _NumEnd, int _NumIndex, int _AddValue, int _CurIndex)
{
	if (_NumIndex < _NumStart || _NumIndex > _NumEnd)
	{
		return;
	}

	SegmentTree[_CurIndex] += _AddValue;

	if (_NumStart == _NumEnd)
	{
		return;
	}

	int Mid = (_NumStart + _NumEnd) / 2;

	Update(_NumStart, Mid, _NumIndex, _AddValue, _CurIndex * 2);
	Update(Mid + 1, _NumEnd, _NumIndex, _AddValue, _CurIndex * 2 + 1);

}

int main()
{
	int NumSize = 8;

	Nums.resize(NumSize + 1);
	SegmentTree.resize(4 * NumSize);

	Nums[1] = 1;
	Nums[2] = 3;
	Nums[3] = 4;
	Nums[4] = 6;
	Nums[5] = 8;
	Nums[6] = 11;
	Nums[7] = 13;
	Nums[8] = 16;

	InitTree(1, 8, 1);

	return 0;
}