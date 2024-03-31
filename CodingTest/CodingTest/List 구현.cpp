#include <list>

class Iterator;
template <typename DataType>
class List
{
public:
	List()
	{
		CreateDummyNode();
	}

	List(size_t _Size)
	{
		CreateDummyNode();
		Resize(_Size);
	}

	List(size_t _Size, const DataType& _Data)
	{
		CreateDummyNode();
		Resize(_Size, _Data);
	}

	~List()
	{
		for (size_t i = DataSize; i > 0; i--)
		{
			Pop_Back();
		}

		delete Head;
		Head = nullptr;

		delete Tail;
		Tail = nullptr;
	}

	//private는 맨 밑으로 보내고 싶은데, 선언부 구현부 분리 안하니까 이런 일이 생긴다!
private:
	struct Node
	{
		friend Iterator;

		DataType Data = DataType();

		Node* Prev = nullptr;
		Node* Next = nullptr;
	};

public:
	class Iterator
	{
		friend List;

	public:
		Iterator()
		{
			CurNode = nullptr;
		}

		Iterator(Node* _Node)
		{
			CurNode = _Node;
		}

		Iterator(const Iterator& _Iter)
		{
			CurNode = _Iter.CurNode;
		}

		DataType& operator*()
		{
			return CurNode->Data;
		}

		Iterator& operator++()
		{
			CurNode = CurNode->Next;
			return this;
		}

		Iterator operator++(int)
		{
			Iterator ReturnIter;
			ReturnIter.CurNode = CurNode;

			CurNode = CurNode->Next;
			return ReturnIter;
		}

		bool operator==(const Iterator& _Other)
		{
			return (CurNode == _Other->CurNode);
		}
		
		bool operator!=(const Iterator& _Other)
		{
			return (CurNode != _Other->CurNode);
		}

		Iterator& operator--()
		{
			CurNode = CurNode->Prev;
			return this;
		}

		Iterator operator--(int)
		{
			Iterator ReturnIter;
			ReturnIter.CurNode = CurNode;

			CurNode = CurNode->Prev;
			return ReturnIter;
		}

	private:
		Node* CurNode = nullptr;
	};

public:
	Iterator Begin()
	{
		Iterator BeginIter(Head->Next);
		return BeginIter;
	}

	Iterator End()
	{
		Iterator EndIter(Tail);
		return EndIter;
	}

	void Insert(const Iterator& _Iter, const DataType& _Data)
	{
		Node* PrevNode = _Iter.CurNode->Prev;
		Node* NextNode = _Iter.CurNode;

		Node* NewNode = new Node();
		NewNode->Data = _Data;

		NewNode->Prev = PrevNode;
		NewNode->Next = NextNode;

		PrevNode->Next = NewNode;
		NextNode->Prev = NewNode;

		DataSize++;
	}

	Iterator Erase(const Iterator& _Iter)
	{
		Node* PrevNode = _Iter.CurNode->Prev;
		Node* NextNode = _Iter.CurNode->Next;

		PrevNode->Next = NextNode;
		NextNode->Prev = PrevNode;
		
		delete _Iter.CurNode;
		DataSize--;

		return Iterator(NextNode);
	}

	void Push_Back(const DataType& _Data)
	{
		Node* NewNode = new Node();
		NewNode->Data = _Data;
		
		Node* LastNode = Tail->Prev;
		LastNode->Next = NewNode;
		
		NewNode->Prev = LastNode;
		NewNode->Next = Tail;

		Tail->Prev = NewNode;

		DataSize++;
	}
	
	void Pop_Back()
	{
		if (DataSize == 0)
		{
			return;
		}

		Node* LastNode = Tail->Prev;

		LastNode->Prev->Next = Tail;
		Tail->Prev = LastNode->Prev;
		
		delete LastNode;

		DataSize--;
	}

	void Resize(size_t _Size)
	{
		if (_Size >= DataSize)
		{
			for (size_t i = DataSize; i < _Size; i++)
			{
				Push_Back(DataType());
			}
		}
		else
		{
			for (size_t i = DataSize; i > _Size; i--)
			{
				Pop_Back();
			}
		}

		DataSize = _Size;
	}

	void Resize(size_t _Size, const DataType& _Data)
	{
		if (_Size >= DataSize)
		{
			for (size_t i = DataSize; i < _Size; i++)
			{
				Push_Back(_Data);
			}
		}
		else
		{
			for (size_t i = DataSize; i > _Size; i--)
			{
				Pop_Back();
			}
		}

		DataSize = _Size;
	}

private:
	void CreateDummyNode()
	{
		if (Head != nullptr || Tail != nullptr)
		{
			return;
		}

		Node* HeadNode = new Node();
		Head = HeadNode;

		Node* TailNode = new Node();
		Tail = TailNode;

		HeadNode->Next = Tail;
		HeadNode->Prev = nullptr;

		TailNode->Prev = Head;
		TailNode->Next = nullptr;
	}

private:
	size_t DataSize = 0;

	Node* Head = nullptr;
	Node* Tail = nullptr;
};

