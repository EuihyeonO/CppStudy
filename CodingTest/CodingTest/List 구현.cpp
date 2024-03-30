#include <list>
#include <iostream>

class Iterator;
template <typename DataType>
class List
{
public:
	List()
	{
		size_t DataSize = 0;

		Node* Head = nullptr;
		Node* Tail = nullptr;
	}

	List(size_t _Size)
	{
		Resize(_Size);
	}

	List(size_t _Size, const DataType& _Data)
	{
		Resize(_Data);
	}

	~List()
	{
		for (size_t i = DataSize; i > 0; i--)
		{
			Pop_Back();
		}
	}

public:
	void Push_Back(const DataType& _Data)
	{
		Node* NewNode = new Node();
		NewNode->Data = _Data;

		if (DataSize == 0)
		{
			Head = NewNode;
			Tail = NewNode;
		}
		else
		{
			NewNode->Prev = Tail;
			Tail->Next = NewNode;
			Tail = NewNode;
		}

		DataSize++;
	}
	
	void Pop_Back()
	{
		if (DataSize == 0)
		{
			return;
		}

		if (DataSize > 1)
		{
			Node* TailPrev = Tail->Prev;
			TailPrev->Next = nullptr;

			delete Tail;
			Tail = TailPrev;
		}
		else
		{
			delete Head;

			Head = nullptr;
			Tail = nullptr;
		}
		
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
	public:
		Iterator(const Node* _Node)
		{
			CurNode = _Node;
		}

		Iterator(const Iterator& _Iter)
		{
			CurNode = _Iter->CurNode;
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
			ReturnIter->CurNode = CurNode;

			CurNode = CurNode->Next;
			return ReturnIter;
		}

		Iterator& operator--()
		{
			CurNode = CurNode->Prev;
			return this;
		}

		Iterator operator--(int)
		{
			Iterator ReturnIter;
			ReturnIter->CurNode = CurNode;

			CurNode = CurNode->Prev;
			return ReturnIter;
		}

	private:
		Node* CurNode = nullptr;
	};

private:
	size_t DataSize = 0;

	Node* Head = nullptr;
	Node* Tail = nullptr;
};

#include <memory>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	List<int> A(10);
	
	List<int> B;
	for (int i = 0; i < 10; i++)
	{
		B.Push_Back(i);
	}

	List<int> C(10);
	for (int i = 0; i < 10; i++)
	{
		B.Pop_Back();
	}
}