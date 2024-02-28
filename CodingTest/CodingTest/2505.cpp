//#include <iostream>
//#include <vector>
//#include <stack>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Answer
//{
//	std::pair<int, int> First;
//	std::pair<int, int> Second;
//	bool isFind = false;
//};
//
//void Flip(std::vector<int>& _Vec, int _Start, int _End)
//{
//	std::stack<int> FlipStack;
//	for (int i = _Start; i <= _End; i++)
//	{
//		FlipStack.push(_Vec[i]);
//	}
//
//	for (int i = _Start; i <= _End; i++)
//	{
//		_Vec[i] = FlipStack.top();
//		FlipStack.pop();
//	}
//}
//
////처음 뒤집을 때, 앞을 맞춤
//Answer CaseOne(const std::vector<int>& _Sequence)
//{
//	std::vector<int> Copy = _Sequence;
//
//	int FrontIndex = 0;
//	int BackIndex = 0;
//
//	for (int i = 0; i < Copy.size(); i++)
//	{
//		if (Copy[i] != i + 1)
//		{
//			FrontIndex = i;
//			break;
//		}
//	}
//
//	for (int i = FrontIndex; i < Copy.size(); i++)
//	{
//		if (Copy[i] == FrontIndex + 1)
//		{
//			BackIndex = i;
//		}
//	}
//	
//	std::pair<int, int> First = { FrontIndex, BackIndex };
//
//	Flip(Copy, FrontIndex, BackIndex);
//	
//	for (int i = 1; i < Copy.size(); i++)
//	{
//		if (Copy[i] != Copy[i - 1] + 1)
//		{
//			FrontIndex = i;
//			break;
//		}
//	}
//
//	BackIndex = -1;
//
//	for (int i = FrontIndex; i < Copy.size() - 1; i++)
//	{
//		if (Copy[i] != Copy[i + 1] + 1)
//		{
//			BackIndex = i;
//			break;
//		}
//	}
//
//	if (BackIndex == -1)
//	{
//		BackIndex = Copy.size() - 1;
//	}
//
//	std::pair<int, int> Second = { FrontIndex, BackIndex };
//
//	Flip(Copy, FrontIndex, BackIndex);
//	
//	int Count = 1;
//
//	for (int i = 1; i < Copy.size(); i++)
//	{
//		if (Copy[i] != Copy[i - 1] + 1)
//		{
//			break;
//		}
//
//		Count++;
//	}
//
//	if (Count == Copy.size())
//	{
//		return {First, Second, true};
//	}
//
//	return { First, Second, false };
//}
//
////처음 뒤집을 때, 뒤를 맞춤
//Answer CaseTwo(const std::vector<int>& _Sequence)
//{
//	std::vector<int> Copy = _Sequence;
//
//	int FrontIndex = 0;
//	int BackIndex = 0;
//
//	for (int i = Copy.size() - 1; i >= 0; i--)
//	{
//		if (Copy[i] != i + 1)
//		{
//			BackIndex = i;
//			break;
//		}
//	}
//
//	for (int i = BackIndex; i >= 0; i--)
//	{
//		if (Copy[i] == BackIndex + 1)
//		{
//			FrontIndex = i;
//		}
//	}
//
//	std::pair<int, int> First = { FrontIndex, BackIndex };
//
//	Flip(Copy, FrontIndex, BackIndex);
//
//	for (int i = Copy.size() - 1; i >= 0; i--)
//	{
//		if (Copy[i] != Copy[i - 1] + 1)
//		{
//			BackIndex = i - 1;
//			break;
//		}
//	}
//
//	FrontIndex = -1;
//
//	for (int i = BackIndex; i >= 1; i--)
//	{
//		if (Copy[i] != Copy[i - 1] - 1)
//		{
//			FrontIndex = i;
//			break;
//		}
//	}
//
//	if (FrontIndex == -1)
//	{
//		FrontIndex = 0;
//	}
//
//	std::pair<int, int> Second = { FrontIndex, BackIndex };
//
//	Flip(Copy, FrontIndex, BackIndex);
//
//	int Count = 1;
//
//	for (int i = 1; i < Copy.size(); i++)
//	{
//		if (Copy[i] != Copy[i - 1] + 1)
//		{
//			break;
//		}
//
//		Count++;
//	}
//
//	if (Count == Copy.size())
//	{
//		return { First, Second, true };
//	}
//
//	return { First, Second, false };
//}
//
//int main()
//{
//	Init();
//
//	int Size = 0;
//	std::cin >> Size;
//	
//	std::vector<int> Sequence;
//	Sequence.resize(Size);
//	
//	for (int i = 0; i < Size; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//	
//	Answer Answer_1 = CaseOne(Sequence);
//	if (Answer_1.isFind == true)
//	{
//		std::cout << Answer_1.First.first + 1 << " " << Answer_1.First.second + 1 << "\n";
//		std::cout << Answer_1.Second.first + 1 << " " << Answer_1.Second.second + 1 << "\n";
//
//		return 0;
//	}
//
//	Answer Answer_2 = CaseTwo(Sequence);
//	if (Answer_2.isFind == true)
//	{
//		std::cout << Answer_2.First.first + 1 << " " << Answer_2.First.second + 1 << "\n";
//		std::cout << Answer_2.Second.first + 1 << " " << Answer_2.Second.second + 1 << "\n";
//
//		return 0;
//	}
//
//	return 0;
//}