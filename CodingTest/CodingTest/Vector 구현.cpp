//
//#include <assert.h>
//#include <chrono>
//
//template <typename DataType>
//class Vector
//{
//public:
//
//    class Iterator
//    {
//    public:
//        Iterator()
//        {
//            CurElement = nullptr;
//        }
//
//        Iterator(DataType* _Data)
//        {
//            CurElement = _Data;
//        }
//
//        Iterator(const Iterator& _Iter)
//        {
//            CurElement = _Iter.CurElement;
//        }
//
//        Iterator& operator++()
//        {
//            ++CurElement;
//            return *this;
//        }
//
//        Iterator operator++(int)
//        {
//            Iterator Iter = *this;
//            ++CurElement;
//
//            return Iter;
//        }
//
//        DataType& operator*()
//        {
//            return *CurElement;
//        }
//
//        size_t operator-(const Iterator& other) const
//        {
//            return CurElement - other.CurElement;
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
//        delete[] Array;
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
//
//    Iterator Begin()
//    {
//        Iterator BeginIter(Array);
//        return BeginIter;
//    }
//
//    Iterator End()
//    {
//        Iterator BeginIter(Array + DataSize);
//        return BeginIter;
//    }
//
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
//            delete[] Array;
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
//    void Pop_back()
//    {
//        if (DataSize > 0)
//        {
//            DataSize--;
//        }
//    }
//
//    Iterator Erase(const Iterator& _Iter)
//    {
//        size_t Index = _Iter - Begin();
//
//        for (size_t i = Index; i < DataSize - 1; i++)
//        {
//            Array[i] = Array[i + 1];
//        }
//
//        DataSize--;
//
//        return Iterator(&Array[Index]);
//    }
//    
//    void Insert(const Iterator& _Iter, const DataType& _Data)
//    {
//        if (DataSize >= DataCapacity)
//        {
//            Reserve(DataCapacity * 2);
//        }
//
//        size_t Index = _Iter - Begin();
//        
//        for (size_t i = DataSize; i > Index; i--)
//        {
//            Array[i] = Array[i - 1];
//        }
//        
//        Array[Index] = _Data;
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
//
//int main()
//{
//    std::vector<int> STL;
//    Vector<int> MyVec;
//
//    std::chrono::system_clock::time_point start1 = std::chrono::system_clock::now();
//   
//    for (int i = 0; i < 10000000; i++)
//    {
//        MyVec.Push_Back(i);
//    }
//
//    std::chrono::milliseconds MyResult = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start1);
//
//    std::chrono::system_clock::time_point start2 = std::chrono::system_clock::now();
//    for (int i = 0; i < 10000000; i++)
//    {
//        STL.push_back(i);
//    }
//
//    std::chrono::milliseconds STLResult = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start2);
//
//    int a = 0;
//}