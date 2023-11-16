//#include <iostream>
//#include <queue>
//#include <climits>
//
////원래는 재귀함수식으로 풀었음.
////경우위 수가 많아질수록, 재귀함수는 스택오버플로우 발생확률 올라감
////실제로 5500정도 이상의 수를 넣으니, 계속 스택오버플로우 발생.
////메모리를 아끼기 위해, 반복문 형태로 바꿨고,
////재귀 - 탑다운, 반복문 - 바텀업
////탑다운 -> 쓸데없는 연산은 줄일 수 있지만 스택오버플로우 위험이 있음
////바텀업 -> 모든 경우의 수를 다 연산해야 하지만, 메모리를 효율적으로 이용 가능
//
//int main()
//{
//	int Num = 0;
//	std::cin >> Num;
//
//	std::vector<int> DP;
//	DP.resize(Num + 1, INT_MAX);
//
//	DP[1] = 0;
//	DP[2] = 1;
//	DP[3] = 1;
//
//	int Index = 1;
//
//	while(Index <= Num)
//	{
//		if(Index * 2 <= Num)
//		{
//			DP[Index * 2] = std::min(DP[Index * 2], DP[Index] + 1);
//		}
//
//		if (Index * 3 <= Num)
//		{
//			DP[Index * 3] = std::min(DP[Index * 3], DP[Index] + 1);
//		}
//
//		if (Index + 1 <= Num)
//		{
//			DP[Index + 1] = std::min(DP[Index + 1], DP[Index] + 1);
//		}
//
//		Index++;
//	}
//
//	std::cout << DP[Num];
//
//	return 0;
//}