


template <typename DataType>
class Heap
{
public:
	Heap()
	{
		if (HeapArray == nullptr)
		{
			Capacity = 4;
			HeapArray = new DataType[Capacity]();
		}
	}

	~Heap()
	{
		if (HeapArray != nullptr)
		{
			delete[] HeapArray;
			HeapArray = nullptr;
		}
	}

	void Reserve(size_t _Capacity)
	{
		if (_Capacity <= Capacity)
		{
			return;
		}

		DataType* NewArray = new DataType[_Capacity]();

		for (int i = 1; i <= Size; i++)
		{
			NewArray[i] = HeapArray[i];
		}

		delete[] HeapArray;
		HeapArray = NewArray;

		Capacity = _Capacity;
	}

	void Swap(size_t _Left, size_t _Right)
	{
		DataType Temp = HeapArray[_Left];
		HeapArray[_Left] = HeapArray[_Right];
		HeapArray[_Right] = Temp;
	}

	void Insert(const DataType& _Data)
	{
		if (Capacity <= Size + 1)
		{
			Reserve(Capacity * 2);
		}

		HeapArray[Size + 1] = _Data;

		size_t CurIndex = Size + 1;

		while (CurIndex > 0)
		{
			size_t ParentIndex = CurIndex / 2;

			if (HeapArray[ParentIndex] < HeapArray[CurIndex])
			{
				Swap(ParentIndex, CurIndex);
				CurIndex = ParentIndex;
			}
			else
			{
				break;
			}
		}

		Size++;
	}

	void Delete(size_t _Index)
	{
		if (_Index >= Size + 1)
		{
			return;
		}

		HeapArray[_Index] = HeapArray[Size];
		Size--;

		size_t CurIndex = _Index;

		while (CurIndex <= Size / 2)
		{
			size_t LeftChildIndex = CurIndex * 2;
			size_t RightChildIndex = CurIndex * 2 + 1;

			if (HeapArray[LeftChildIndex] > HeapArray[RightChildIndex] && HeapArray[LeftChildIndex] > HeapArray[CurIndex])
			{
				Swap(LeftChildIndex, CurIndex);
				CurIndex = LeftChildIndex;
			}
			else if (HeapArray[RightChildIndex] > HeapArray[LeftChildIndex] && HeapArray[RightChildIndex] > HeapArray[CurIndex])
			{
				Swap(RightChildIndex, CurIndex);
				CurIndex = RightChildIndex;
			}
			else
			{
				break;
			}
		}
	}

private:
	DataType* HeapArray = nullptr;
	size_t Size = 0;
	size_t Capacity = 0;
};
int main()
{
	Heap<int> A;

	A.Insert(5);
	A.Insert(6);
	A.Insert(2);
	A.Insert(3);

}