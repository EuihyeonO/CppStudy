//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//정상적인 상황이라면 모든 학생은 1개씩은 가지고 있을 것이다.
//-> 최초에 모든 배열의 원소를 1로 초기화.
//
//도둑맞는건 1개씩. 도둑 맞았다면 체육복의 개수가 1개 줄어듬.
//-> (도둑맞은 학생의 체육복 수)--;
//
//여분의 체육복을 가져온 애들이라면 체육복의 개수가 1개씩 더 있을 것이다.
//-> (여벌을 가져온 학생의 체육복 수)++;
//
//만약, ++, --가 아니라 0, 1, 2 등으로 고정시켜놓고 연산하게 되면
//여벌을 가져온 동시에 도둑맞은 학생은 처리가 안된다.
//
//이후 반복문을 돌면서, 체육복의 수가 0인 학생의 앞 뒤 번호에 여분의 체육복을 가진 학생이 있나 탐색 후에,
//체육복 1개를 나눠준다.
//n
//
//*/
//
//int solution(int n, vector<int> lost, vector<int> reserve) 
//{
//	std::vector<int> Students;
//	Students.resize(n, 1);
//
//	for (int i = 0; i < lost.size(); i++)
//	{
//		Students[lost[i] - 1]--;
//	}
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		Students[reserve[i] - 1]++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] == 0)
//		{
//			if (i != 0 && Students[i - 1] == 2)
//			{
//				Students[i - 1] = 1;
//				Students[i] = 1;
//			}
//			else if(i != n - 1 && Students[i + 1] == 2)
//			{
//				Students[i + 1] = 1;
//				Students[i] = 1;
//			}
//		}
//	}
//
//	int Count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] >= 1)
//		{
//			Count++;
//		}
//	}
//
//	return Count;
//}
//
////int main()
////{
////	return 0;
////}