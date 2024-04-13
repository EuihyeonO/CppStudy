//#include <vector>
//
//std::vector<int> Nums;
//std::vector<int> FenWickTree;
//
//int GetSumFromZero(int _Index)
//{
//    int Sum = 0;
//
//    while (_Index > 0)
//    {
//        Sum += FenWickTree[_Index];
//        _Index &= (_Index - 1);
//    }
//
//    return Sum;
//}
//
//int GetSegSum(int _Start, int _End)
//{
//    return GetSumFromZero(_End) - GetSumFromZero(_Start - 1);
//}
//
//void Update(int _Index, int _Value)
//{
//    while (_Index < Nums.size())
//    {
//        FenWickTree[_Index] += _Value;
//        _Index += (_Index & -_Index);
//    }
//}
//
//int main()
//{
//    //숫자는 모두 입력받았다고 가정하자.
//
//    int NumSize = 8;
//
//    Nums.resize(NumSize + 1);
//    FenWickTree.resize(NumSize + 1);
//
//    Nums[1] = 1;
//    Nums[2] = 2;
//    Nums[3] = 3;
//    Nums[4] = 7;
//    Nums[5] = 10;
//    Nums[6] = 11;
//    Nums[7] = 13;
//    Nums[8] = 15;
//
//    //초기화
//    for (int i = 1; i <= NumSize; i++)
//    {
//        Update(i, Nums[i]);
//    }
//
//    int A = GetSegSum(3, 4);
//    int B = GetSegSum(4, 8);
//    int C = GetSegSum(6, 8);
//    int D = GetSegSum(2, 7);
//    int E = GetSegSum(1, 8);
//
//    return 0;
//}