#include <list>
#include <memory>

template <typename T>
class List 
{

private:

	struct Data
	{
		T* OwnData;

		Data* PrevData;
		Data* NextData;
	};

public:

	struct Iterator
	{
		Data* Data;

		Iterator operator++(int _Num)
		{
			if (Data == nullptr)
			{
				return Iterator(nullptr);
			}

			Iterator NewIter = { Data };
			Data = Data->NextData;

			return NewIter;
		}

		T& operator*()
		{
			return *(Data->OwnData);
		}
	};

//생성자
public:
	List(){}
	~List(){}

	List(size_t _Size)
	{
		if (Begin == nullptr)
		{
			Data* NewData = new Data();
			NewData->OwnData = new T();
			NewData->PrevData = nullptr;
			NewData->NextData = nullptr;

			Begin = NewData;
			End = NewData;
		}

		for (int i = 0; i < _Size - 1; i++)
		{
			Data* NewData = new Data();
			NewData->OwnData = new T();

			NewData->PrevData = End;
			End->NextData = NewData;

			NewData->NextData = nullptr;

			End = NewData;
		}
	}

	List(size_t _Size, const T& _Data)
	{
		if (Begin == nullptr)
		{
			Data* NewData = new Data();
			NewData->OwnData = new T(_Data);
			NewData->PrevData = nullptr;
			NewData->NextData = nullptr;

			Begin = NewData;
			End = NewData;

			++Size;
		}

		for (int i = 0; i < _Size - 1; i++)
		{
			Data* NewData = new Data();
			NewData->OwnData = new T(_Data);

			NewData->PrevData = End;
			End->NextData = NewData;

			NewData->NextData = nullptr;

			End = NewData;

			++Size;
		}
	}
//기능
public:
	void push_back(const T& _Data)
	{

		if (Begin == nullptr)
		{
			Data* NewData = new Data();
			NewData->OwnData = new T(_Data);
			NewData->PrevData = nullptr;
			NewData->NextData = nullptr;

			Begin = NewData;
			End = NewData;
		}
		else
		{
			Data* NewData = new Data();
			NewData->OwnData = new T(_Data);

			NewData->PrevData = End;
			End->NextData = NewData;

			NewData->NextData = nullptr;

			End = NewData;
		}

		++Size;
	}

	Iterator begin()
	{
		Iterator NewIter = { Begin };
		return NewIter;
	}

private:
	Data* Begin = nullptr;
	Data* End = nullptr;

	size_t Size = 0;
};

class A
{
public:
	A(){}
	~A(){}
	
	A(A&& _Ref) noexcept
	{
		int a = 0;
	}

	A(const A& _Ref)
	{
		int a = 0;
	}
};

//int main()
//{
//	List<int> MyList;
//
//	MyList.insert(0);
//	MyList.insert(1);
//	MyList.insert(2);
//	MyList.insert(3);
//
//}