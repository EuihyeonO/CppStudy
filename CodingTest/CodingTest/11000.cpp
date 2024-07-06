//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Subject
//{
//	int Start = 0;
//	int End = 0;
//
//	bool operator<(const Subject& _Right)
//	{
//		return Start < _Right.Start;
//	}
//};
//
//struct Less
//{
//	bool operator()(const Subject& _Left, const Subject& _Right)
//	{
//		return _Left.End > _Right.End;
//	}
//};
//
//int main()
//{
//	Init();
//
//	int InputSize = 0;
//	std::cin >> InputSize;
//
//	std::vector<Subject> Subs(InputSize);
//	for (int i = 0; i < InputSize; i++)
//	{
//		std::cin >> Subs[i].Start >> Subs[i].End;
//	}
//
//	std::sort(Subs.begin(), Subs.end());
//	
//	std::priority_queue<Subject, std::vector<Subject>, Less> Queue;
//	Queue.push(Subs[0]);
//
//	for (int i = 1; i < InputSize; i++)
//	{
//		Subject CurSub = Queue.top();
//
//		if (CurSub.End <= Subs[i].Start)
//		{
//			Queue.pop();
//			CurSub.End = Subs[i].End;
//			Queue.push(CurSub);
//		}
//		else
//		{
//			Queue.push(Subs[i]);
//		}
//	}
//
//	std::cout << Queue.size();
//
//	return 0;
//}