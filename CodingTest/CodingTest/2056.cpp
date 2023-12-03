//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//struct Task
//{
//	int Order = 0; //문서 인덱스
//	int Time = 0; // 소요 시간
//	int EntryNum = 0; //진입 차수
//	std::vector<int> PriorTasks; //선행작업들
//
//	//정렬된 문서 배열과 정렬 전 문서 배열을 공통적으로 이용할 필요가 있기 때문에, 정렬된 후의 배열 인덱스를 정렬 전의 배열에 저장해두기 위함.
//	int SortedOrder = 0;
//};
//
//int main()
//{
//	int NumOfTask = 0;
//	std::cin >> NumOfTask;
//
//	std::vector<Task> Tasks(NumOfTask);
//	std::queue<Task> Queue;
//
//	for (int i = 0; i < NumOfTask; i++)
//	{
//		Task NewTask;
//		NewTask.Order = i + 1;
//
//		std::cin >> NewTask.Time >> NewTask.EntryNum;
//		NewTask.PriorTasks.resize(NewTask.EntryNum);
//
//		for (int i = 0; i < NewTask.EntryNum; i++)
//		{
//			std::cin >> NewTask.PriorTasks[i];
//		}
//		
//		Tasks[i] = NewTask;
//		Queue.push(NewTask);
//	}
//
//	std::vector<Task> SortedTasks;
//
//	//위상정렬
//	while (Queue.size() > 0)
//	{
//		Task CurTask = Queue.front();
//		Queue.pop();
//		
//		for (size_t i = 0; i < SortedTasks.size(); i++)
//		{
//			int CurOrder = SortedTasks[i].Order;
//
//			std::vector<int>::iterator FindIter = std::find(CurTask.PriorTasks.begin(), CurTask.PriorTasks.end(), CurOrder);
//			if (CurTask.PriorTasks.end() != FindIter)
//			{
//				*FindIter = -1;
//				CurTask.EntryNum--;
//			}
//		}
//
//		if (CurTask.EntryNum <= 0)
//		{
//			CurTask.EntryNum = Tasks[CurTask.Order - 1].EntryNum;
//			Tasks[CurTask.Order - 1].SortedOrder = static_cast<int>(SortedTasks.size());
//			SortedTasks.push_back(CurTask);
//			continue;
//		}
//
//		Queue.push(CurTask);
//	}
//
//	/*
//		선행 작업들중 가장 오래걸리는 시간을 기준으로 다이나믹 프로그래밍 진행.
//		병렬작업이 가능하기 때문에,
//		선행작업이 10개라면, 그중 가장 오래걸린 작업의 소요 시간이, 현재 작업이 시작될 시간.
//
//		EX)
//		선행작업 A, B, C
//		A가 끝나기까지 5분 소요.
//		B가 끝나기까지 7분 소요.
//		C가 끝나기까지 3분 소요.
//		
//		모든 작업이 병렬적이기 떄문에, A,B,C 가 모두 끝나는데는 7분이 소요. (소요 시간의 최대값)
//
//		즉, 현재 문서의 작업이 끝나는 시간은 선행작업의 소요시간의 최대값 + 현재 작업의 소요시간.
//	*/
//
//
//	//DP
//	std::vector<int> TimeStack(NumOfTask, 0);
//	
//	for (size_t i = 0; i < TimeStack.size(); i++)
//	{
//		if (SortedTasks[i].EntryNum == 0)
//		{
//			TimeStack[i] = SortedTasks[i].Time;
//			continue;
//		}
//
//		Task CurTask = Tasks[SortedTasks[i].Order - 1];
//
//		int MaxTime = 0;
//
//		for(size_t j = 0; j < CurTask.PriorTasks.size(); j++)
//		{
//			int Index = CurTask.PriorTasks[j];
//			int SortedIndex = Tasks[Index - 1].SortedOrder;
//
//			MaxTime = std::max(MaxTime,TimeStack[SortedIndex]);
//		}
//
//		TimeStack[i] = MaxTime + CurTask.Time;
//	}
//
//	std::cout << *std::max_element(TimeStack.begin(), TimeStack.end());
//	return 0;
//}