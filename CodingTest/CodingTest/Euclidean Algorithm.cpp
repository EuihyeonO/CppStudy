//int GetGCD(int _A, int _B)
//{
//    int Remain = 0;
//
//    while (_B > 0)
//    {
//        Remain = A % B;
//        A = B;
//        B = Remain;
//    }
//
//    return A;
//}
//
//int GetLCM(int _A, int _B)
//{
//    int GCD = GetGCD(_A, _B);
//    return (_A * _B) / GCD;
//}
//
//int main()
//{
//	int a = GetGCD(5, 10);
//	int b = GetGCD(5, 15);
//	int c = GetGCD(10, 15);
//	int d = GetGCD(3, 9);
//
//    int e = GetLCM(2, 4);
//    int f = GetLCM(3, 6);
//    int g = GetLCM(5, 7);
//    int h = GetLCM(10, 12);
//}