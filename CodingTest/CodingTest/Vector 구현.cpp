//
//#include <assert.h>
//
//template <typename DataType>
//class Vector
//{
//public:
//    class Iterator
//    {
//    public:
//        Iterator(const DataType* _Data)
//        {
//            CurElement = _Data;
//        }
//
//        Iterator(const Iterator& _Iter)
//        {
//            CurElement = _Iter->CurElement;
//        }
//
//    private:
//        DataType* CurElement = nullptr;
//    };
//
//public:
//    Vector()
//    {
//        Reserve(4);
//    }
//
//    Vector(size_t _Size)
//    {
//        Resize(_Size);
//    }
//
//    Vector(size_t _Size, const DataType& _Data)
//    {
//        Resize(_Size, _Data);
//    }
//
//    ~Vector()
//    {
//        delete Array;
//    }
//
//    DataType operator[](size_t _Index)
//    {
//        assert(_Index < DataSize);
//
//        return Array[_Index];
//    }
//
//public:
//    void Reserve(size_t _Size)
//    {
//        if (_Size <= DataCapacity)
//        {
//            return;
//        }
//
//        DataCapacity = _Size;
//
//        if (Array == nullptr)
//        {
//            Array = new DataType[DataCapacity]();
//        }
//        else
//        {
//            DataType* NewArray = new DataType[_Size]();         
//            for (size_t i = 0; i < DataSize; i++)
//            {
//                NewArray[i] = Array[i];
//            }
//
//            delete Array;
//            Array = NewArray;
//        }
//    }
//
//    void Resize(size_t _Size)
//    {
//        if (DataSize >= _Size)
//        {
//            DataSize = _Size;
//        }
//        else 
//        {
//            Reserve(_Size);
//            DataSize = _Size;
//        }
//    }
//
//    void Resize(size_t _Size, const DataType& _Data)
//    {
//        if (DataSize >= _Size)
//        {
//            DataSize = _Size;
//        }
//        else
//        {
//            Reserve(_Size);
//    
//            for (size_t i = DataSize; i < _Size; i++)
//            {
//                Array[i] = _Data;
//            }
//
//            DataSize = _Size;
//        }
//    }
//
//    void Push_Back(const DataType& _Data)
//    {
//        if (DataSize < DataCapacity)
//        {
//            Array[DataSize] = _Data;
//        }
//        else
//        {
//            Reserve(DataCapacity * 2);
//            Array[DataSize] = _Data;
//        }
//
//        DataSize++;
//    }
//
//    size_t Size()
//    {
//        return DataSize;
//    }
//
//    size_t Capacity()
//    {
//        return DataCapacity;
//    }
//
//private:
//    DataType* Array = nullptr;
//
//    size_t DataCapacity = 0;
//    size_t DataSize = 0;
//};
//
//#include <memory>
//#include <iostream>
//
//int main()
//{
//        Vector<int> A;
//        A.Push_Back(3);
//        A.Push_Back(4);
//        A.Push_Back(5);
//        A.Push_Back(6);
//        A.Push_Back(7);
//        A.Push_Back(8);
//
//        Vector<int>::Iterator B;
//
//    }
//
//    {
//        Vector<int> A;
//        A.Resize(5);
//    }
//
//
//}