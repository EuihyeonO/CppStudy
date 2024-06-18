//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Robot
//{
//	int X = 0;
//	int Y = 0;
//	int Dir = 0;
//};
//
//struct Command
//{
//	int RobotIndex = 0;
//	char CommandType = 0;
//	int LoopCount = 0;
//};
//
//std::vector<int> DirX = { 0, -1, 0, 1 };
//std::vector<int> DirY = { 1, 0, -1, 0 };
//
//bool DoCommand(std::vector<std::vector<int>>& _Map, std::vector<Robot>& _Robots, int _RobotIndex, char _CommandType)
//{
//	if (_CommandType == 'L')
//	{
//		_Robots[_RobotIndex].Dir++;
//
//		if (_Robots[_RobotIndex].Dir >= 4)
//		{
//			_Robots[_RobotIndex].Dir = 0;
//		}
//	}
//	else if (_CommandType == 'R')
//	{
//		_Robots[_RobotIndex].Dir--;
//
//		if (_Robots[_RobotIndex].Dir < 0)
//		{
//			_Robots[_RobotIndex].Dir = 3;
//		}
//	}
//	else
//	{
//		Robot& _CurRobot = _Robots[_RobotIndex];
//		_Map[_CurRobot.Y][_CurRobot.X] = 0;
//
//		_CurRobot.X += DirX[_CurRobot.Dir];
//		_CurRobot.Y += DirY[_CurRobot.Dir];
//
//		if (_CurRobot.X < 0 || _CurRobot.Y < 0 || _CurRobot.X >= _Map[0].size() || _CurRobot.Y >= _Map.size())
//		{
//			std::cout << "Robot " << _RobotIndex + 1 << " crashes into the wall";
//			return false;
//		}
//
//		if (_Map[_CurRobot.Y][_CurRobot.X] != 0)
//		{
//			std::cout << "Robot " << _RobotIndex + 1 << " crashes into robot " << _Map[_CurRobot.Y][_CurRobot.X];
//			return false;
//		}
//
//		_Map[_CurRobot.Y][_CurRobot.X] = _RobotIndex + 1;
//	}
//
//	return true;
//}
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	int Height = 0;
//	std::cin >> Width >> Height;
//
//	int NumRobot = 0;
//	int NumCommand = 0;
//	std::cin >> NumRobot >> NumCommand;
//	
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	std::vector<Robot> Robots(NumRobot);
//
//	for (int i = 0; i < NumRobot; i++)
//	{
//		std::cin >> Robots[i].X >> Robots[i].Y;
//
//		char Dir = 0;
//		std::cin >> Dir;
//
//		if (Dir == 'N') //아래
//		{
//			Robots[i].Dir = 0;
//		}
//		else if (Dir == 'W') //왼
//		{
//			Robots[i].Dir = 1;
//		}
//		else if (Dir == 'S') //위
//		{
//			Robots[i].Dir = 2;
//		}
//		else if (Dir == 'E') //오른
//		{
//			Robots[i].Dir = 3;
//		}
//
//		Robots[i].X--;
//		Robots[i].Y--;
//
//		Map[Robots[i].Y][Robots[i].X] = i + 1;
//	}
//
//	std::vector<Command> Commands(NumCommand);
//	for (int i = 0; i < NumCommand; i++)
//	{
//		std::cin >> Commands[i].RobotIndex >> Commands[i].CommandType >> Commands[i].LoopCount;
//		Commands[i].RobotIndex--;
//	}
//
//	bool isComplete = true;
//
//	for (int i = 0; i < NumCommand; i++)
//	{
//		Command& CurCommand = Commands[i];
//
//		for (int j = 0; j < CurCommand.LoopCount; j++)
//		{
//			isComplete = DoCommand(Map, Robots, CurCommand.RobotIndex, CurCommand.CommandType);
//
//			if (isComplete == false)
//			{
//				return 0;
//			}
//		}
//	}
//
//	std::cout << "OK";
//
//	return 0;
//}