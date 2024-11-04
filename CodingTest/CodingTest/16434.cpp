//#include <iostream>
//#include <vector>
//#include <climits>
//#include <tuple>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<std::tuple<long long, long long, long long>> RoomInfo;
//
//long long GetMaxRoom(long long _MaxHp, long long _Atk)
//{
//	long long CurHp = _MaxHp;
//
//	for (long long i = 0; i < RoomInfo.size(); i++)
//	{
//		auto [RoomType, Data_1, Data_2] = RoomInfo[i];
//
//		if (RoomType == 1)
//		{
//			long long MonsterAtk = Data_1;
//			long long MonsterHp = Data_2;
//
//			long long PlayerAttackCount = MonsterHp / _Atk;
//			if (MonsterHp % _Atk)
//			{
//				PlayerAttackCount++;
//			}
//
//			long long MonsterAttackCount = CurHp / MonsterAtk;
//			if (CurHp % MonsterAtk)
//			{
//				MonsterAttackCount++;
//			}
//
//			if (MonsterAttackCount < PlayerAttackCount)
//			{
//				return i;
//			}
//			else
//			{
//				CurHp -= MonsterAtk * (PlayerAttackCount - 1);
//			}
//		}
//		else
//		{
//			_Atk += Data_1;
//
//			if (CurHp > LLONG_MAX - Data_2)
//			{
//				CurHp = LLONG_MAX;
//			}
//			else
//			{
//				CurHp = std::min(_MaxHp, CurHp + Data_2);
//			}
//		}
//	}
//
//	return RoomInfo.size();
//}
//
//int main()
//{
//	Init();
//
//	long long NumRoom = 0, AtkPower = 0;
//	std::cin >> NumRoom >> AtkPower;
//
//	RoomInfo.resize(NumRoom);
//
//	for (long long i = 0; i < NumRoom; i++)
//	{
//		std::cin >> std::get<0>(RoomInfo[i]) >> std::get<1>(RoomInfo[i]) >> std::get<2>(RoomInfo[i]);
//	}
//
//	long long Start = 0;
//	long long End = LLONG_MAX;
//
//	long long Answer = LLONG_MAX;
//
//	while (Start <= End)
//	{
//		long long Mid = (Start + End) / 2;
//		long long CurAnswer = GetMaxRoom(Mid, AtkPower);
//
//		if (CurAnswer == RoomInfo.size())
//		{
//			Answer = std::min(Answer, Mid);
//			End = Mid - 1;
//		}
//		else
//		{
//			Start = Mid + 1;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}