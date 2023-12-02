//#include <iostream>
//#include <queue>
//
//enum Dir
//{
//	Up = 0,
//	Right,
//	Down,
//	Left,
//};
//
//enum Status
//{
//	Dirty = 0,
//	Wall,
//	Clean,
//};
//
//struct RobotInfo 
//{
//	int Xpos = 0;
//	int Ypos = 0;
//	int Dir = 0;
//};
//
//int main()
//{
//	int Length = 0;
//	int Height = 0;
//	std::cin >> Height >> Length;
//
//	std::vector<std::vector<int>> Room(Height, std::vector<int>(Length, 0));
//
//	int ZeroCount = 0;
//
//	RobotInfo Robot;
//	std::cin >> Robot.Ypos >> Robot.Xpos >> Robot.Dir;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Length; j++)
//		{
//			std::cin >> Room[i][j];
//
//			if (Room[i][j] == 0)
//			{
//				ZeroCount++;
//			}
//		}
//	}
//	/* 여기까지 입력 */
//
//
//	std::vector<std::pair<int, int>> FourDir;
//	FourDir.resize(4);
//
//	FourDir[0] = { -1 , 0 };
//	FourDir[1] = {  0 , 1 };
//	FourDir[2] = {  1 , 0 };
//	FourDir[3] = {  0 , -1 };
//
//	int CleaningCount = 0;
//
//	while (ZeroCount > 0)
//	{
//		if (Room[Robot.Ypos][Robot.Xpos] == Status::Dirty)
//		{
//			Room[Robot.Ypos][Robot.Xpos] = Status::Clean;
//			CleaningCount++;
//			ZeroCount--;
//		}
//
//		int DirtyCount = 0;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int TestYPos = Robot.Ypos + FourDir[i].first;
//			int TestXPos = Robot.Xpos + FourDir[i].second;
//
//			if (TestYPos < 0 || TestYPos >= Height || TestXPos < 0 || TestXPos >= Length)
//			{
//				continue;
//			}
//			
//			if (Room[TestYPos][TestXPos] == Status::Dirty)
//			{
//				DirtyCount++;
//			}
//		}
//
//		if (DirtyCount == 0) // 주위 4칸이 모두 청소가 되어있다면
//		{
//			int NextRobotYPos = Robot.Ypos - FourDir[Robot.Dir].first;
//			int NextRobotXPos = Robot.Xpos - FourDir[Robot.Dir].second;
//
//			if (NextRobotYPos < 0 || NextRobotYPos >= Height || NextRobotXPos < 0 || NextRobotXPos >= Length
//				|| Room[NextRobotYPos][NextRobotXPos] == Status::Wall)
//			{
//				break;
//			}
//			else
//			{
//				Robot.Ypos = NextRobotYPos;
//				Robot.Xpos = NextRobotXPos;
//			}
//		}
//		else //주위에 청소되지 않은 칸이 존재한다면
//		{
//			for (int i = 1; i <= 4; i++)
//			{
//				int TestDir = Robot.Dir - i;
//				if (TestDir <= -1)
//				{
//					TestDir += 4; // 1->2->3->0
//				}
//
//				int NextRobotYPos = Robot.Ypos + FourDir[TestDir].first;
//				int NextRobotXPos = Robot.Xpos + FourDir[TestDir].second;
//				
//				if (NextRobotYPos < 0 || NextRobotYPos >= Height || NextRobotXPos < 0 || NextRobotXPos >= Length)
//				{
//					continue;
//				}
//
//				if (Room[NextRobotYPos][NextRobotXPos] == Status::Dirty)
//				{
//					Robot.Ypos = NextRobotYPos;
//					Robot.Xpos = NextRobotXPos;
//					Robot.Dir = TestDir;
//					break;
//					//한 칸 전진.
//				}
//			}
//		}
//	}
//
//	std::cout << CleaningCount;
//
//	return 0;
//}