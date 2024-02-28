//#include <iostream>
//#include <vector>
//#include <climits>
//#include <iterator>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//enum class Dir
//{
//	Up,
//	Left,
//	Down,
//	Right,
//};
//
//int Function()
//{
//	std::string Command = "";
//	std::cin >> Command;
//
//	std::pair<int, int> TurtlePos = { 0, 0 };
//	
//	std::vector<std::pair<int, int>> DirVec(4);
//	DirVec[0] = { 0, 1 };
//	DirVec[1] = { -1, 0 };
//	DirVec[2] = { 0, -1 };
//	DirVec[3] = { 1, 0 };
//
//	Dir TurtleDir = Dir::Up;
//	std::vector<std::pair<int, int>> TurtleTrace;
//	TurtleTrace.reserve(Command.size());
//
//	TurtleTrace.push_back(TurtlePos);
//
//	for (int i = 0; i < Command.size(); i++)
//	{
//		char CurCommand = Command[i];
//
//		if (CurCommand == 'F')
//		{
//			TurtlePos.first += DirVec[static_cast<int>(TurtleDir)].first;
//			TurtlePos.second += DirVec[static_cast<int>(TurtleDir)].second;
//
//			TurtleTrace.push_back(TurtlePos);
//		}
//		else if (CurCommand == 'B')
//		{
//			TurtlePos.first -= DirVec[static_cast<int>(TurtleDir)].first;
//			TurtlePos.second -= DirVec[static_cast<int>(TurtleDir)].second;
//
//			TurtleTrace.push_back(TurtlePos);
//		}
//		else if (CurCommand == 'L')
//		{
//			int DirToInt = static_cast<int>(TurtleDir);
//			DirToInt += 1;
//			
//			if (DirToInt >= 4)
//			{
//				DirToInt -= 4;
//			}
//
//			TurtleDir = static_cast<Dir>(DirToInt);
//		}
//		else if (CurCommand == 'R')
//		{
//			int DirToInt = static_cast<int>(TurtleDir);
//			DirToInt -= 1;
//
//			if (DirToInt < 0)
//			{
//				DirToInt += 4;
//			}
//
//			TurtleDir = static_cast<Dir>(DirToInt);
//		}
//		else
//		{
//			std::cout << "Error";
//		}
//	}
//
//	int MinX = INT_MAX;
//	int MaxX = INT_MIN;
//
//	int MinY = INT_MAX;
//	int MaxY = INT_MIN;
//
//	for (int i = 0; i < TurtleTrace.size(); i++)
//	{
//		int CurX = TurtleTrace[i].first;
//		int CurY = TurtleTrace[i].second;
//
//		MinX = std::min(MinX, CurX);
//		MinY = std::min(MinY, CurY);
//
//		MaxX = std::max(MaxX, CurX);
//		MaxY = std::max(MaxY, CurY);
//	}
//
//	int Width = MaxX - MinX;
//	int Height = MaxY - MinY;
//
//	return Width * Height;
//}
//
//int main()
//{
//	Init();
//
//	int NumOfCase = 0;
//	std::cin >> NumOfCase;
//
//	std::vector<int> Answer(NumOfCase);
//
//	for (int i = 0; i < NumOfCase; i++)
//	{
//		Answer[i] = Function();
//	}
//
//	std::copy(Answer.begin(), Answer.end(), std::ostream_iterator<int>(std::cout, "\n"));
//
//	return 0;
//}