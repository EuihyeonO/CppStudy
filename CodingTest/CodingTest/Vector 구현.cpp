//#include <memory>
//#include <iostream>
//#include <assert.h>
//#include <windows.h>
//#include <vector>
//#include <chrono>
//
//template <typename T>
//class Vector
//{
//
////생성자
//public:
//	Vector()
//	{
//		Begin = new T[4]();
//		Capacity = 4;
//	}
//
//	~Vector() {}
//	
//	//인수 하나만 들어오면 기본 생성자로 Resize;
//	Vector(size_t _Size)
//	{
//		Begin = new T[_Size]();
//		Capacity = _Size;
//		Size = _Size;
//	}
//
//	//인수가 두개가 들어오면, 해당 데이터로 Resize;
//	Vector(size_t _Size, const T& _Data)
//	{
//		Begin = new T[_Size]();
//		
//		for (int i = 0; i < _Size; i++)
//		{
//			Begin[i] = std::move(_Data);
//		}
//
//		Capacity = _Size;
//		Size = _Size;
//	}
//
////연산자 오버로딩
//public:
//	T& operator[](int _Index)
//	{
//		if (_Index >= Size)
//		{
//			MessageBoxA(NULL, "인덱스 초과", "알림", MB_OK);
//			assert(false);
//		}
//
//		return Begin[_Index];
//	}
//
////기능
//public:
//	void push_back(const T& _Data)
//	{
//		if (Size >= Capacity)
//		{
//			reserve(static_cast<size_t>(Capacity * 1.5));
//		}
//
//		Begin[Size] = std::move(_Data);
//		Size++;
//	}
//
//	/*
//	* 메모리를 새로 할당하고
//	* 기존의 데이터를 옮기고
//	* 기존의 메모리를 해제한다.
//	*/
//	void resize(size_t _Size)
//	{
//		T* NewVector = new T[_Size]();
//
//		for (int i = 0; i < _Size; i++)
//		{
//			if (i >= Size)
//			{
//				NewVector[i] = std::move(T());
//				continue;
//			}
//
//			NewVector[i] = std::move(Begin[i]);
//		}
//
//		delete(Begin);
//		Begin = NewVector;
//
//		Size = _Size;
//		Capacity = _Size;
//	}
//
//	void reserve(size_t _Size)
//	{
//		if (Capacity >= _Size)
//		{
//			return;
//		}
//
//		T* NewVector = new T[_Size]();
//
//		for (int i = 0; i < Size; i++)
//		{
//			NewVector[i] = std::move(Begin[i]);
//		}
//
//		delete(Begin);
//		Begin = NewVector;
//		Capacity = _Size;
//	}
//
//	size_t size()
//	{
//		return Size;
//	}
//
//private:
//
//	T* Begin = nullptr;
//
//	size_t Size = 0;
//	size_t Capacity = 0;
//};
//
//int main()
//{
//	Vector<int> A(10);
//
//	int a = A[5];
//	int b = 0;
//};

#include <assert.h>

template <typename DataType>
class Vector
{
public:
    class Iterator
    {
    public:
        Iterator(const DataType* _Data)
        {
            CurElement = _Data;
        }

        Iterator(const Iterator& _Iter)
        {
            CurElement = _Iter->CurElement;
        }

    private:
        DataType* CurElement = nullptr;
    };

public:
    Vector()
    {
        Reserve(4);
    }

    Vector(size_t _Size)
    {
        Resize(_Size);
    }

    Vector(size_t _Size, const DataType& _Data)
    {
        Resize(_Size, _Data);
    }

    ~Vector()
    {
        delete Array;
    }

    DataType operator[](size_t _Index)
    {
        assert(_Index < DataSize);

        return Array[_Index];
    }

public:
    void Reserve(size_t _Size)
    {
        if (_Size <= DataCapacity)
        {
            return;
        }

        DataCapacity = _Size;

        if (Array == nullptr)
        {
            Array = new DataType[DataCapacity]();
        }
        else
        {
            DataType* NewArray = new DataType[_Size]();         
            for (size_t i = 0; i < DataSize; i++)
            {
                NewArray[i] = Array[i];
            }

            delete Array;
            Array = NewArray;
        }
    }

    void Resize(size_t _Size)
    {
        if (DataSize >= _Size)
        {
            DataSize = _Size;
        }
        else 
        {
            Reserve(_Size);
            DataSize = _Size;
        }
    }

    void Resize(size_t _Size, const DataType& _Data)
    {
        if (DataSize >= _Size)
        {
            DataSize = _Size;
        }
        else
        {
            Reserve(_Size);
    
            for (size_t i = DataSize; i < _Size; i++)
            {
                Array[i] = _Data;
            }

            DataSize = _Size;
        }
    }

    void Push_Back(const DataType& _Data)
    {
        if (DataSize < DataCapacity)
        {
            Array[DataSize] = _Data;
        }
        else
        {
            Reserve(DataCapacity * 2);
            Array[DataSize] = _Data;
        }

        DataSize++;
    }

    size_t Size()
    {
        return DataSize;
    }

    size_t Capacity()
    {
        return DataCapacity;
    }

private:
    DataType* Array = nullptr;

    size_t DataCapacity = 0;
    size_t DataSize = 0;
};

#include <memory>
#include <iostream>

int main()
{
        Vector<int> A;
        A.Push_Back(3);
        A.Push_Back(4);
        A.Push_Back(5);
        A.Push_Back(6);
        A.Push_Back(7);
        A.Push_Back(8);

        Vector<int>::Iterator B;

    }

    {
        Vector<int> A;
        A.Resize(5);
    }


}