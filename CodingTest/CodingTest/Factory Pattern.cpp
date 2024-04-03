//#include <iostream>
//
//class Beverage
//{
//public:
//    virtual void Drink() = 0;
//};
//
//class GrapeBeverage : public Beverage
//{
//public:
//    void Drink()
//    {
//        std::cout << "Æ÷µµ ÁÖ½º¸¦ ¸¶¼Ì´Ù." << std::endl;
//    }
//};
//
//class AppleBeverage : public Beverage
//{
//public:
//    void Drink()
//    {
//        std::cout << "»ç°ú ÁÖ½º¸¦ ¸¶¼Ì´Ù." << std::endl;
//    }
//};
////
////class BeverageFactory
////{
////public:
////    virtual Beverage* CreateBeverage() = 0;
////};
////
////class GrapeBeverageFactory : public BeverageFactory
////{
////public:
////    virtual Beverage* CreateBeverage() override
////    {
////        Beverage* ReturnBeverage = new GrapeBeverage();
////        return ReturnBeverage;
////    }
////};
////
////class AppleBeverageFactory : public BeverageFactory
////{
////public:
////    virtual Beverage* CreateBeverage() override
////    {
////        Beverage* ReturnBeverage = new AppleBeverage();
////        return ReturnBeverage;
////    }
////};
////
//
///*------------------------------------------------------------------------------------------------------------------------*/
//
//class Bread
//{
//public:
//    virtual void Eat() = 0;
//};
//
//class GrapeBread : public Bread
//{
//    virtual void Eat() override
//    {
//        std::cout << "Æ÷µµ »§À» ¸Ô¾ú´Ù" << std::endl;
//    }
//};
//
//class AppleBread : public Bread
//{
//    virtual void Eat() override
//    {
//        std::cout << "»ç°ú »§À» ¸Ô¾ú´Ù" << std::endl;
//    }
//};
//
//class BeverageFactory
//{
//public:
//    virtual Beverage* CreateBeverage() = 0;
//    virtual Bread* CreatePrize() = 0;
//};
//
//class GrapeBeverageFactory : public BeverageFactory
//{
//public:
//    virtual Beverage* CreateBeverage() override
//    {
//        Beverage* ReturnBeverage = new GrapeBeverage();
//        return ReturnBeverage;
//    }
//
//    virtual Bread* CreatePrize()
//    {
//        Bread* ReturnBread = new GrapeBread();
//        return ReturnBread;
//    }
//};
//
//class AppleBeverageFactory : public BeverageFactory
//{
//public:
//    virtual Beverage* CreateBeverage() override
//    {
//        Beverage* ReturnBeverage = new AppleBeverage();
//        return ReturnBeverage;
//    }
//
//    virtual Bread* CreatePrize()
//    {
//        Bread* ReturnBread = new AppleBread();
//        return ReturnBread;
//    }
//};
//
//class Client
//{
//public:
//    void BuyBeverage()
//    {
//        BeverageFactory* GrapeBGFactory = new GrapeBeverageFactory();
//        Beverage* GrapeBG = GrapeBGFactory->CreateBeverage();
//        Bread* GrapeBread = GrapeBGFactory->CreatePrize();
//        
//        GrapeBG->Drink();
//        GrapeBread->Eat();
//
//        BeverageFactory* AppleBGFactory = new AppleBeverageFactory();
//        Beverage* AppleBG = AppleBGFactory->CreateBeverage();
//        Bread* AppleBread = AppleBGFactory->CreatePrize();
//
//        AppleBG->Drink();
//        AppleBread->Eat();
//    }
//};
//
//int main()
//{
//    Client Cl;
//    Cl.BuyBeverage();
//}