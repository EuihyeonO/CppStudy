//
//#include <iostream>
//#include <assert.h>
//
//template <typename DataType>
//class Heap
//{
//public:
//	Heap()
//	{
//		if (HeapArray == nullptr)
//		{
//			Capacity = 4;
//			HeapArray = new DataType[Capacity]();
//		}
//	}
//
//	~Heap()
//	{
//		if (HeapArray != nullptr)
//		{
//			delete[] HeapArray;
//			HeapArray = nullptr;
//		}
//	}
//
//	void Reserve(size_t _Capacity)
//	{
//		if (_Capacity <= Capacity)
//		{
//			return;
//		}
//
//		DataType* NewArray = new DataType[_Capacity]();
//
//		for (int i = 1; i <= Size; i++)
//		{
//			NewArray[i] = HeapArray[i];
//		}
//
//		delete[] HeapArray;
//		HeapArray = NewArray;
//
//		Capacity = _Capacity;
//	}
//
//	void Swap(size_t _Left, size_t _Right)
//	{
//		DataType Temp = HeapArray[_Left];
//		HeapArray[_Left] = HeapArray[_Right];
//		HeapArray[_Right] = Temp;
//
//		int a = HeapArray[_Left];
//		int b = HeapArray[_Right];
//
//		int c = 0;
//	}
//
//	void Insert(const DataType& _Data)
//	{
//		if (Capacity <= Size + 1)
//		{
//			Reserve(Capacity * 2);
//		}
//
//		HeapArray[Size + 1] = _Data;
//
//		size_t CurIndex = Size + 1;
//
//		while (CurIndex > 1)
//		{
//			size_t ParentIndex = CurIndex / 2;
//
//			if (HeapArray[ParentIndex] < HeapArray[CurIndex])
//			{
//				Swap(ParentIndex, CurIndex);
//				CurIndex = ParentIndex;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		Size++;
//	}
//
//	void Delete()
//	{
//		if (Size <= 0)
//		{
//			return;
//		}
//
//		HeapArray[1] = HeapArray[Size];
//		Size--;
//
//		size_t CurIndex = 1;
//
//		while (CurIndex <= Size / 2)
//		{
//			size_t LeftChild = CurIndex * 2;
//			size_t RightChild = CurIndex * 2 + 1;
//
//			if (HeapArray[LeftChild] > HeapArray[RightChild] && HeapArray[LeftChild] > HeapArray[CurIndex])
//			{
//				Swap(LeftChild, CurIndex);
//				CurIndex = LeftChild;
//			}
//			else if (HeapArray[RightChild] > HeapArray[LeftChild] && HeapArray[RightChild] > HeapArray[CurIndex])
//			{
//				Swap(RightChild, CurIndex);
//				CurIndex = RightChild;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//
//	const DataType& Top()
//	{
//		assert(Size != 0);
//		return HeapArray[1];
//	}
//
//	void PrintAll()
//	{
//		for (int i = 1; i <= Size; i++)
//		{
//			std::cout << HeapArray[i] << std::endl;
//		}
//	}
//
//private:
//	DataType* HeapArray = nullptr;
//	size_t Size = 0;
//	size_t Capacity = 0;
//};
//int main()
//{
//	Heap<int> A;
//
//	A.Insert(5);
//	A.Insert(2);
//	A.Insert(6);
//	A.Insert(7);
//	A.Insert(3);
//
//	A.PrintAll();
//
//	std::cout << " ----------------------------------------- " << std::endl;
//
//	A.Delete();
//	A.Delete();
//	A.Delete();
//	A.Delete();
//	A.Delete();
//	A.Delete();
//
//	int AB= A.Top();
//	A.PrintAll();
//
//}