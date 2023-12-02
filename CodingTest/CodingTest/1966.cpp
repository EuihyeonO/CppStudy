//#include <iostream>
//#include <queue>
//#include <map>
//
//int main()
//{
//	
//	int NumTestCase = 0;
//	std::cin >> NumTestCase;
//
//	std::vector<int> Answers;
//	Answers.reserve(NumTestCase);
//
//	for(int i = 0; i < NumTestCase; i++)
//	{
//		int NumDoc = 0; //문서의 수
//		int QueueIndex = 0; //알고자 하는 문서가 큐의 몇번째에 있는가
//
//		std::cin >> NumDoc >> QueueIndex;
//
//		std::map<int, int> PriorityMap;
//		std::queue<std::pair<int, int>> Queue;
//
//		for (int j = 0; j < NumDoc; j++)
//		{
//			int Priority = 0;
//			std::cin >> Priority;
//
//			PriorityMap[Priority]++;
//			Queue.push({ Priority, j });
//		}
//
//		int Answer = 0;
//
//		while (Queue.size() > 0)
//		{
//			std::pair<int, int> CurDoc = Queue.front();
//			Queue.pop();
//
//			int CurPriority = CurDoc.first;
//			int CurIndex = CurDoc.second;
//
//			std::map<int, int>::iterator MaxPriority = PriorityMap.end(); //원래는 Map의 Size체크를 해야함 (안전검사)
//			MaxPriority--; //end()는 마지막 원소 다음을 가리킨키므로, 원소에 접근하려면 --를 해야함.
//
//			if (MaxPriority->first > CurPriority) //우선순위가 더 높은 문서가 있다면.
//			{
//				Queue.push(CurDoc);
//				continue;
//			}
//			else
//			{
//				if (CurIndex == QueueIndex) //찾고자 하는 문서라면
//				{
//					Answer++;
//					break;
//				}
//				else //다른 문서라면
//				{
//					PriorityMap[CurPriority]--;
//
//					if (PriorityMap[CurPriority] <= 0)
//					{
//						PriorityMap.erase(PriorityMap.find(CurPriority));
//					}
//
//					Answer++;
//					continue;
//				}
//			}
//		}
//
//		Answers.push_back(Answer);
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}