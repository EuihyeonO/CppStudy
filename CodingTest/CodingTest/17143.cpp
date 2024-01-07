//#include <iostream>
//#include <vector>
//#include <set>
//#include <Crtdbg.h>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//enum class Direction : char
//{
//	Up = 1,
//	Down,
//	Right,
//	Left
//};
//
//struct Shark
//{
//	int Speed = 0;
//	int Size = 0;
//
//	std::pair<int, int> Pos;
//	Direction Dir;
//
//	bool isBigger(const Shark* const _Shark) const
//	{
//		return Size > _Shark->Size;
//	}
//
//	void Move(const int _GridWidth, const int _GridHeight)
//	{
//		if (Dir == Direction::Up)
//		{
//			int LengthToWall = Pos.first;
//			
//			if (Speed > LengthToWall)
//			{
//				int Share = (Speed - LengthToWall - 1) / (_GridHeight - 1);
//				int Remain = (Speed - LengthToWall - 1) % (_GridHeight - 1);
//
//				(Share % 2 == 0) ? (Pos.first = Remain + 1, Dir = Direction::Down) : (Pos.first = _GridHeight - Remain - 2, Dir = Direction::Up);
//			}
//			else
//			{
//				Pos.first -= Speed;
//			}
//		}
//		else if (Dir == Direction::Down)
//		{
//			int LengthToWall = _GridHeight - Pos.first - 1;
//
//			if (Speed > LengthToWall)
//			{
//				int Share = (Speed - LengthToWall - 1) / (_GridHeight - 1);
//				int Remain = (Speed - LengthToWall - 1) % (_GridHeight - 1);
//
//				(Share % 2 == 0) ? (Pos.first = _GridHeight - Remain - 2, Dir = Direction::Up) : (Pos.first = Remain + 1, Dir = Direction::Down);
//			}
//			else
//			{
//				Pos.first += Speed;
//			}
//		}
//		else if (Dir == Direction::Right)
//		{
//			int LengthToWall = _GridWidth - Pos.second - 1;
//
//			if (Speed > LengthToWall)
//			{
//				int Share = (Speed - LengthToWall - 1) / (_GridWidth - 1);
//				int Remain = (Speed - LengthToWall - 1) % (_GridWidth - 1);
//
//				(Share % 2 == 0) ? (Pos.second = _GridWidth - Remain - 2, Dir = Direction::Left) : (Pos.second = Remain + 1, Dir = Direction::Right);
//			}
//			else
//			{
//				Pos.second += Speed;
//			}
//		}
//		else if (Dir == Direction::Left)
//		{
//			int LengthToWall = Pos.second;
//
//			if (Speed > LengthToWall)
//			{
//				int Share = (Speed - LengthToWall - 1) / (_GridWidth - 1);
//				int Remain = (Speed - LengthToWall - 1) % (_GridWidth - 1);
//
//				(Share % 2 == 0) ? (Pos.second = Remain + 1, Dir = Direction::Right) : (Pos.second = _GridWidth - Remain - 2, Dir = Direction::Left);
//			}
//			else
//			{
//				Pos.second -= Speed;
//			}
//		}
//	}
//};
//
//int main()
//{
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//
//	Init();
//
//	int Width = 0;
//	int Height = 0;
//
//	int NumOfShark = 0;
//
//	std::cin >> Height >> Width >> NumOfShark;
//	
//	//값형으로 하면 상어가 없는 지역을 구분하기 귀찮음 + 메모리 아끼기
//	std::vector<std::vector<Shark*>> Grid(Height, std::vector<Shark*>(Width, nullptr));
//	std::set<Shark*> Sharks;
//
//	for (int i = 0; i < NumOfShark; i++)
//	{
//		Shark* NewShark = new Shark();
//
//		//위치
//		std::cin >> NewShark->Pos.first >> NewShark->Pos.second;
//		NewShark->Pos.first -= 1;
//		NewShark->Pos.second -= 1;
//
//		//속력
//		std::cin >> NewShark->Speed;
//
//		//이동방향
//		int Dir = 0;
//		std::cin >> Dir;
//		NewShark->Dir = static_cast<Direction>(Dir);
//
//		//크기
//		std::cin >> NewShark->Size;
//
//		//격자에 대입
//		if (Grid[NewShark->Pos.first][NewShark->Pos.second] != nullptr)
//		{
//			Shark* CurShark = Grid[NewShark->Pos.first][NewShark->Pos.second];
//			bool isBig = NewShark->isBigger(CurShark);
//
//			if (isBig == false)
//			{
//				delete NewShark;
//				continue;
//			}
//			else
//			{
//				delete CurShark;
//				Grid[NewShark->Pos.first][NewShark->Pos.second] = nullptr;
//			}
//		}
//
//		Grid[NewShark->Pos.first][NewShark->Pos.second] = NewShark;
//
//
//		//상어 자료구조에 삽입
//		Sharks.insert(NewShark);
//	}
//
//	int ManX = 0;
//	int SizeSum = 0;
//
//	while (ManX < Width)
//	{
//		for (int i = 0; i < Height; i++)
//		{
//			if (Grid[i][ManX] != nullptr)
//			{
//				Shark* CaughtShark = Grid[i][ManX];
//				SizeSum += CaughtShark->Size;
//
//				Grid[i][ManX] = nullptr;
//
//				Sharks.erase(CaughtShark);
//				delete CaughtShark;
//
//				break;
//			}
//		}
//
//		//움직이고 Grid에 반영하기
//		std::set<Shark*>::iterator StartIter = Sharks.begin();
//		std::set<Shark*>::iterator EndIter = Sharks.end();
//
//		while (StartIter != EndIter)
//		{
//			Shark* CurShark = *StartIter;
//
//			//기존 위치 nullptr로 변경.
//			Grid[CurShark->Pos.first][CurShark->Pos.second] = nullptr;
//
//			//이동
//			(*StartIter)->Move(Width, Height);
//			StartIter++;
//		}
//
//		StartIter = Sharks.begin();
//
//		std::set<Shark*> EraseShark;
//
//		while (StartIter != EndIter)
//		{
//			Shark* CurShark = (*StartIter);
//
//			//이동한 위치에 상어가 있다면?
//			if (Grid[CurShark->Pos.first][CurShark->Pos.second] != nullptr)
//			{
//				Shark* PrevShark = Grid[CurShark->Pos.first][CurShark->Pos.second];
//
//				if (PrevShark->Size > CurShark->Size)
//				{
//					EraseShark.insert(CurShark);
//				}
//				else
//				{
//					Grid[CurShark->Pos.first][CurShark->Pos.second] = CurShark;
//					EraseShark.insert(PrevShark);
//  				}
//			}
//			else
//			{
//				Grid[CurShark->Pos.first][CurShark->Pos.second] = CurShark;
//			}
//
//			StartIter++;
//		}
//
//		for (Shark* Iter : EraseShark)
//		{
//			Sharks.erase(Iter);
//			delete (Iter);
//		}
//
//		ManX++;
//	}
//
//	for (Shark* Iter : Sharks)
//	{
//		delete (Iter);
//	}
//
//	std::cout << SizeSum;
//
//	return 0;
//}