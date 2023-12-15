#include <memory>
#include <iostream>
#include <assert.h>
#include <windows.h>
#include <vector>
#include <chrono>

template <typename T>
class Vector
{

//생성자
public:
	Vector()
	{
		Begin = new T[4]();
		Capacity = 4;
	}

	~Vector() {}
	
	//인수 하나만 들어오면 기본 생성자로 Resize;
	Vector(size_t _Size)
	{
		Begin = new T[_Size]();
		Capacity = _Size;
		Size = _Size;
	}

	//인수가 두개가 들어오면, 해당 데이터로 Resize;
	Vector(size_t _Size, const T& _Data)
	{
		Begin = new T[_Size]();
		
		for (int i = 0; i < _Size; i++)
		{
			Begin[i] = std::move(_Data);
		}

		Capacity = _Size;
		Size = _Size;
	}

//연산자 오버로딩
public:
	T& operator[](int _Index)
	{
		if (_Index >= Size)
		{
			MessageBoxA(NULL, "인덱스 초과", "알림", MB_OK);
			assert(false);
		}

		return Begin[_Index];
	}

//기능
public:
	void push_back(const T& _Data)
	{
		if (Size >= Capacity)
		{
			reserve(static_cast<size_t>(Capacity * 1.5));
		}

		Begin[Size] = std::move(_Data);
		Size++;
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
			if (i >= Size)
			{
				NewVector[i] = std::move(T());
				continue;
			}

			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;

		Size = _Size;
		Capacity = _Size;
	}

	void reserve(size_t _Size)
	{
		if (Capacity >= _Size)
		{
			return;
		}

		T* NewVector = new T[_Size]();

		for (int i = 0; i < Size; i++)
		{
			NewVector[i] = std::move(Begin[i]);
		}

		delete(Begin);
		Begin = NewVector;
		Capacity = _Size;
	}

	size_t size()
	{
		return Size;
	}

private:

	T* Begin = nullptr;

	size_t Size = 0;
	size_t Capacity = 0;
};

//int main()
//{
//	Vector<int> A;
//};