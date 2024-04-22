//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct TeamInfo
//{
//	std::vector<int> Scores;
//
//	int ID = 0;
//
//	int SubmitCount = 0;
//	int SubmitTime = 0;
//	int ScoreSum = 0;
//};
//
//bool compare(const TeamInfo& _Left, const TeamInfo& _Right)
//{
//	if (_Left.ScoreSum == _Right.ScoreSum)
//	{
//		if (_Left.SubmitCount == _Right.SubmitCount)
//		{
//			return _Left.SubmitTime < _Right.SubmitTime;
//		}
//		return _Left.SubmitCount < _Right.SubmitCount;
//	}
//	return _Left.ScoreSum > _Right.ScoreSum;
//}
//
//int main()
//{
//	Init();
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<int> Answers(NumOfTestCase);
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		int NumOfTeam = 0;
//		int NumOfProb = 0;
//		int MyTeamID = 0;
//		int NumOfLog = 0;
//
//		std::cin >> NumOfTeam >> NumOfProb >> MyTeamID >> NumOfLog;
//
//		std::vector<TeamInfo> Teams(NumOfTeam);
//		for (int j = 0; j < NumOfTeam; j++)
//		{
//			Teams[j].Scores.resize(NumOfProb);
//			Teams[j].ID = j + 1;
//		}
//		
//		for (int j = 0; j < NumOfLog; j++)
//		{
//			int CurID = 0;
//			int CurProb = 0;
//			int CurScore = 0;
//
//			std::cin >> CurID >> CurProb >> CurScore;
//
//			Teams[CurID - 1].SubmitCount++;
//			Teams[CurID - 1].SubmitTime = j;
//
//			if (CurScore > Teams[CurID - 1].Scores[CurProb - 1])
//			{
//				Teams[CurID - 1].ScoreSum -= Teams[CurID - 1].Scores[CurProb - 1];
//				Teams[CurID - 1].ScoreSum += CurScore;
//
//				Teams[CurID - 1].Scores[CurProb - 1] = CurScore;
//			}
//		}
//
//		std::sort(Teams.begin(), Teams.end(), compare);
//
//		for (int j = 0; j < NumOfTeam; j++)
//		{
//			if (Teams[j].ID == MyTeamID)
//			{
//				Answers[i] = j + 1;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}