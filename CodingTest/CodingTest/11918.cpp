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
//int main()
//{
//	Init();
//
//	long long NumLamp = 0;
//	long long Lum = 0;
//	std::cin >> NumLamp >> Lum;
//
//	std::vector<std::pair<long long, long long>> Lamp(NumLamp);
//
//	long long Input = 0;
//	
//	for (int i = 0; i < NumLamp; i++)
//	{
//		std::cin >> Input;
//		
//		Lamp[i].first = Input - Lum;
//		Lamp[i].second = Input + Lum;
//	}
//	
//	std::sort(Lamp.begin(), Lamp.end());
//
//	std::vector<std::pair<long long, long long>> EmergencyLamp;
//	EmergencyLamp.reserve(75000);
//
//	for (int i = 1; i < NumLamp; i++)
//	{
//		if (Lamp[i - 1].second > Lamp[i].first)
//		{
//			std::pair<long long, long long> Common = { Lamp[i].first, Lamp[i - 1].second };
//
//			if (EmergencyLamp.size() ==0)
//			{
//				EmergencyLamp.push_back(Common);
//			}
//			else
//			{
//				if (EmergencyLamp.back().second > Common.first)
//				{
//					EmergencyLamp.back().second = Common.second;
//				}
//				else
//				{
//					EmergencyLamp.push_back(Common);
//				}
//			}
//		}
//	}
//
//	long long Sum = 0;
//
//	for (int i = 0; i < EmergencyLamp.size(); i++)
//	{
//		Sum += EmergencyLamp[i].second - EmergencyLamp[i].first;
//	}
//
//	std::cout << Sum;
//
//	return 0;
//}