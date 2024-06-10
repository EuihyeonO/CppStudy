//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<int> SortVec(3);
//
//struct Stone
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//
//	void Sort()
//	{
//		SortVec[0] = A;
//		SortVec[1] = B;
//		SortVec[2] = C;
//
//		std::sort(SortVec.begin(), SortVec.end());
//
//		A = SortVec[0];
//		B = SortVec[1];
//		C = SortVec[2];
//	}
//};
//
//struct Compare
//{
//	bool operator()(const Stone& _Left, const Stone _Right) const
//	{
//		if (_Left.A == _Right.A)
//		{
//			if (_Left.B == _Right.B)
//			{
//				return _Left.C < _Right.C;
//			}
//
//			return _Left.B < _Right.B;
//		}
//
//		return _Left.A < _Right.A;
//	}
//};
//
//int main()
//{
//	Init();
//
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	
//	std::cin >> A >> B >> C;
//
//	std::queue<Stone> BFS;
//	BFS.push({ A, B, C });
//	
//	bool isAble = true;
//
//	std::set<Stone, Compare> Tr;
//	Tr.insert({ A, B, C });
//
//	while (BFS.size() > 0)
//	{
//		Stone CurStone = BFS.front();
//		BFS.pop();
//
//		if (CurStone.A == CurStone.B && CurStone.B == CurStone.C)
//		{
//			break;
//		}
//
//		CurStone.Sort();
//
//		Stone SaveStone = CurStone;
//
//		CurStone.C -= CurStone.A;
//		CurStone.A *= 2;
//
//		CurStone.Sort();
//		
//		if (Tr.find(CurStone) != Tr.end())
//		{
//			isAble = true;
//			break;
//		}
//
//		BFS.push(CurStone);
//		Tr.insert(CurStone);
//	}
//
//	std::cout << isAble;
//
//	return 0;
//}