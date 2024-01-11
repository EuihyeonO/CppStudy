//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int GetGCDByEuclid(int _A, int _B)
//{
//	int BigNum = 0;
//	int SmallNum = 0;
//	
//	(_A >= _B) ? (BigNum = _A, SmallNum = _B) : (BigNum = _B, SmallNum = _A);
//
//	int Remain = 1;
//
//	while (Remain > 0)
//	{
//		Remain = BigNum % SmallNum;
//		BigNum = SmallNum;
//		SmallNum = Remain;
//	}
//
//	return BigNum;
//}
//
//int GetLCM(int _A, int _B)
//{
//	int Multiply = _A * _B;
//	int GCD = GetGCDByEuclid(_A, _B);
//
//	return Multiply / GCD;
//}
//
//int solution(vector<int> arr)
//{
//	int LCM = arr[0];
//
//	for (int i = 1; i < arr.size(); i++)
//	{
//		LCM = GetLCM(LCM, arr[i]);
//	}
//
//	return  LCM;
//}
//
//int main()
//{
//	int a = solution({ 2, 6, 8, 14 });
//	return 0;
//}