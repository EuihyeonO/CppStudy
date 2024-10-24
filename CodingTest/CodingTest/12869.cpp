//#include <iostream>
//#include <vector>
//#include <functional>
//#include <algorithm>
//#include <set>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void Permutation(std::vector<int>& _Nums, std::vector<std::vector<int>>& _Save, int _Depth, int _MaxDepth)
//{
//	if (_Depth == _MaxDepth)
//	{
//		std::vector<int> Save;
//		for (int i = 0; i < _MaxDepth; i++)
//		{
//			Save.push_back(_Nums[i]);
//		}
//
//		_Save.push_back(Save);
//		return;
//	}
//
//	for (int i = _Depth; i < _Nums.size(); i++)
//	{
//		std::swap(_Nums[_Depth], _Nums[i]);
//		Permutation(_Nums, _Save, _Depth + 1, _MaxDepth);
//		std::swap(_Nums[_Depth], _Nums[i]);
//	}
//}
//
//struct Data
//{
//	std::vector<int> HPs;
//	int Count = 0;
//};
//
//int main()
//{
//	Init();
//
//	int NumOfSCV = 0;
//	std::cin >> NumOfSCV;
//
//	std::vector<int> HPs(NumOfSCV);
//
//	for (int i = 0; i < NumOfSCV; i++)
//	{
//		std::cin >> HPs[i];
//	}
//
//	int Count = 0;
//
//	std::function<bool(const std::vector<int>&)> isAllDeath = [](const std::vector<int>& _Vector)
//		{
//			for (int i = 0; i < _Vector.size(); i++)
//			{
//				if (_Vector[i] > 0)
//				{
//					return false;
//				}
//			}
//	
//			return true;
//		};
//
//	std::queue<Data> BFS;
//	BFS.push({ HPs, 0 });
//
//	std::vector<int> Damages = { 1, 3, 9 };
//	int Answer = 0;
//
//	std::set<std::vector<int>> Visit;
//
//	while (BFS.size() > 0)
//	{
//		std::vector<int> Vec = BFS.front().HPs;
//		int Count = BFS.front().Count;
//		
//		BFS.pop();
//
//		if (isAllDeath(Vec) == true)
//		{
//			Answer = Count;
//			break;
//		}
//
//		std::vector<std::vector<int>> AllCase;
//		Permutation(Damages, AllCase, 0, NumOfSCV);
//
//		for (int i = 0; i < AllCase.size(); i++)
//		{
//			std::vector<int> CopyVec = Vec;
//
//			for (int j = 0; j < NumOfSCV; j++)
//			{
//				CopyVec[j] -= AllCase[i][j];
//
//				if (CopyVec[j] <= 0)
//				{
//					CopyVec[j] = 0;
//				}
//			}
//
//			if (Visit.find(CopyVec) == Visit.end())
//			{
//				Visit.insert(CopyVec);
//				BFS.push({ CopyVec, Count + 1 });
//			}
//		}
//	}
//	
//	std::cout << Answer;
//	return 0;
//}