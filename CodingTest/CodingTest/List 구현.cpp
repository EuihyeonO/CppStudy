//#include <list>
//#include <memory>
//#include <vector>
//
//
//template <typename T>
//class List 
//{
//private:
//
//	struct Data
//	{
//		T* OwnData;
//
//		Data* PrevData;
//		Data* NextData;
//	};
//
//public:
//
//	struct Iterator
//	{
//		Data* Data;
//
//		Iterator operator++(int _Num)
//		{
//			if (Data == nullptr)
//			{
//				return Iterator(nullptr);
//			}
//
//			Iterator NewIter = { Data };
//			Data = Data->NextData;
//
//			return NewIter;
//		}
//
//		T& operator*()
//		{
//			return *(Data->OwnData);
//		}
//	};
//
////생성자
//public:
//	List(){}
//
//	~List()
//	{
//		Clear();
//	}
//
//	List(size_t _Size)
//	{
//		if (Begin == nullptr)
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T();
//			NewData->PrevData = nullptr;
//			NewData->NextData = nullptr;
//
//			Begin = NewData;
//			End = NewData;
//		}
//
//		for (int i = 0; i < _Size - 1; i++)
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T();
//
//			NewData->PrevData = End;
//			End->NextData = NewData;
//
//			NewData->NextData = nullptr;
//
//			End = NewData;
//		}
//	}
//
//	List(size_t _Size, const T& _Data)
//	{
//		if (Begin == nullptr)
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T(_Data);
//			NewData->PrevData = nullptr;
//			NewData->NextData = nullptr;
//
//			Begin = NewData;
//			End = NewData;
//
//			++Size;
//		}
//
//		for (int i = 0; i < _Size - 1; i++)
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T(_Data);
//
//			NewData->PrevData = End;
//			End->NextData = NewData;
//
//			NewData->NextData = nullptr;
//
//			End = NewData;
//
//			++Size;
//		}
//	}
////기능
//public:
//	void push_back(const T& _Data)
//	{
//
//		if (Begin == nullptr)
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T(_Data);
//			NewData->PrevData = nullptr;
//			NewData->NextData = nullptr;
//
//			Begin = NewData;
//			End = NewData;
//		}
//		else
//		{
//			Data* NewData = new Data();
//			NewData->OwnData = new T(_Data);
//
//			NewData->PrevData = End;
//			End->NextData = NewData;
//
//			NewData->NextData = nullptr;
//
//			End = NewData;
//		}
//
//		++Size;
//	}
//
//	void Clear()
//	{
//		while (Begin != nullptr)
//		{
//			delete (Begin->OwnData);
//
//			Data* PrevData = Begin;
//			Begin = Begin->NextData;
//			
//			delete (PrevData);
//
//			Size--;
//		}
//
//		Begin = nullptr;
//		End = nullptr;
//
//		Size = 0;
//	}
//
//	Iterator begin()
//	{
//		Iterator NewIter = { Begin };
//		return NewIter;
//	}
//
//private:
//	Data* Begin = nullptr;
//	Data* End = nullptr;
//
//	size_t Size = 0;
//};
//
//class A
//{
//public:
//	A(){}
//	~A(){}
//	
//	A(A&& _Ref) noexcept
//	{
//		int a = 0;
//	}
//
//	A(const A& _Ref)
//	{
//		int a = 0;
//	}
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
// 
//	List<int> MyList;
//
//	MyList.push_back(0);
//	MyList.push_back(1);
//	MyList.push_back(2);
//	MyList.push_back(3);
//
//	MyList.Clear();
//
//	MyList.push_back(1);
//	MyList.push_back(1);
//	MyList.push_back(1);
//	MyList.push_back(1);
//}