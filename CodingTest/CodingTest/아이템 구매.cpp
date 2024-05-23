//#include <iostream>
//
//int main()
//{
//    int HPPrice = 0;
//    int MPPrice = 0;
//    int PurchaseAmount = 0;
//
//    std::cin >> HPPrice >> MPPrice >> PurchaseAmount;
//
//    int HPNum = 0;
//    int MPNum = 0;
//
//    for (int i = 0; i <= PurchaseAmount; i += HPPrice)
//    {
//        int Difference = PurchaseAmount - i;
//
//        if (Difference % MPPrice == 0)
//        {
//            HPNum = i / HPPrice;
//            MPNum = Difference / MPPrice;
//
//            break;
//        }
//    }
//
//    std::cout << HPNum << " " << MPNum;
//
//    return 0;
//}