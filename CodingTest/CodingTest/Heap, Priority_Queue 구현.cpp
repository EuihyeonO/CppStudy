//#include <queue>
//#include <iostream>
//
//template <typename Data>
//class Priority_Queue
//{
//public:
//	Priority_Queue() 
//	{
//		Capacity = 4;
//		Arr = new Data[Capacity]();
//	}
//
//	~Priority_Queue() {}
//
//	void Push(const Data& _Data)
//	{
//		if (Size + 1 >= Capacity)
//		{
//			Reserve(Size * 2);
//		}
//
//		Arr[Size + 1] = _Data;
//		Heapify_Insert();
//		
//		Size++;
//	}
//
//	Data Top()
//	{
//		return Arr[1];
//	}
//
//	void Pop()
//	{
//		if (Size <= 0)
//		{
//			return;
//		}
//
//		Arr[1] = Arr[Size];
//		Size--;
//
//		Heapify_Delete();
//	}
//
//private:
//	void Heapify_Insert()
//	{
//		size_t NewDataIndex = Size + 1;
//		size_t ParentIndex;
//
//		while (NewDataIndex > 1)
//		{
//			ParentIndex = NewDataIndex / 2;
//
//			if (Arr[ParentIndex] < Arr[NewDataIndex])
//			{
//				Data Temp = Arr[NewDataIndex];
//				Data Copy = Arr[ParentIndex];
//
//				Arr[NewDataIndex] = Arr[ParentIndex];
//				Arr[ParentIndex] = Temp;
//
//				NewDataIndex = ParentIndex;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//
//	void Heapify_Delete()
//	{
//		size_t CurIndex = 1;
//
//		while (CurIndex <= (Size / 2))
//		{
//			size_t LeftChild = CurIndex * 2;
//			size_t RightChild = CurIndex * 2 + 1;
//
//			size_t MaxChild = Arr[LeftChild] < Arr[RightChild] ? RightChild : LeftChild;
//
//			if (Arr[MaxChild] > Arr[CurIndex])
//			{
//				Data Temp = Arr[MaxChild];
//				Arr[MaxChild] = Arr[CurIndex];
//				Arr[CurIndex] = Temp;
//			}
//
//			CurIndex = MaxChild;
//		}
//	}
//
//	void Reserve(const size_t& _Size)
//	{
//		Data* CopyArr = Arr;
//
//		if (_Size < Capacity)
//		{
//			return;
//		}
//
//		Arr = new Data[_Size]();
//
//		for (int i = 1; i <= Size; i++)
//		{
//			Arr[i] = CopyArr[i];
//		}
//
//		delete (CopyArr);
//		Capacity = _Size;
//	}
//
//	size_t Capacity = 0;
//	size_t Size = 0;
//
//	Data* Arr = nullptr;
//};
//
//int main()
//{
//	Priority_Queue<int> A;
//	A.Push(1);
//	A.Push(5);
//	A.Push(3);
//	A.Push(6);
//	A.Push(8);
//	A.Push(12);
//	A.Push(10);
//	A.Push(9);
//
//	int Arr[8];
//	for (int i = 0; i < 8; i++)
//	{
//		Arr[i] = A.Top();
//		A.Pop();
//	}
//
//	return 0;
//}
