#include <memory>
#include <iostream>
#include <assert.h>
#include <windows.h>
#include <vector>

template <typename T>
class Vector
{

//생성자
public:
	Vector()
	{
		Begin = new T[4]();
		MemSize = 4;
	}

	~Vector() {}
	
	//인수 하나만 들어오면 기본 생성자로 Resize;
	Vector(size_t _Size)
	{
		Begin = new T[_Size]();
		MemSize = _Size;
		ElementSize = _Size;
	}

	//인수가 두개가 들어오면, 해당 데이터로 Resize;
	Vector(size_t _Size, const T& _Data)
	{
		Begin = new T[_Size]();
		
		for (int i = 0; i < _Size; i++)
		{
			Begin[i] = std::move(_Data);
		}

		MemSize = _Size;
		ElementSize = _Size;
	}

//연산자 오버로딩
public:
	T& operator[](int _Index)
	{
		if (_Index >= ElementSize)
		{
			MessageBoxA(NULL, "인덱스 초과", "알림", MB_OK);
			assert(false);
		}

		return Begin[_Index];
	}

//기능
public:
	void push_back(T _Data)
	{
		if (ElementSize >= MemSize)
		{
			resize(static_cast<size_t>(MemSize * 1.5));
		}

		Begin[ElementSize] = _Data;
		ElementSize++;
	}

	/*
	* 메모리를 새로 할당하고
	* 기존의 데이터를 옮기고
	* 기존의 메모리를 해제한다.
	*/
	void resize(size_t _Size)
	{
		T* NewVector = new T[_Size]();

		for (int i = 0; i < _Size; i++)
		{
			if (i >= ElementSize)
			{
				NewVector[i] = std::move(T());
				continue;
			}

			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;

		ElementSize = _Size;
		MemSize = _Size;
	}

	void reserve(size_t _Size)
	{
		if (MemSize >= _Size)
		{
			return;
		}

		T* NewVector = new T[_Size]();

		for (int i = 0; i < ElementSize; i++)
		{
			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;
		MemSize = _Size;
	}

	size_t size()
	{
		return ElementSize;
	}

private:

	T* Begin = nullptr;

	size_t ElementSize = 0;
	size_t MemSize = 0;
};

int main()
{
	Vector<int> A;
	A.resize(10);

	for (int i = 0; i < A.size(); i++)
	{
		std::cout << A[i] << std::endl;
	}

	int a = 0;
};