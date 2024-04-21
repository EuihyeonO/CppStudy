//#include <iostream>
//
////class CharacterBase
////{
////    virtual void Move() {}
////    virtual void Attack() {}
////};
////
////class Player : public CharacterBase
////{
////public:
////    void Move() override;
////    void Attack() override;
////};
////
////class MonsterA : public CharacterBase
////{
////public:
////    void Move() override;
////    void Attack() override;
////};
////
////class MonsterB : public CharacterBase
////{
////public:
////    void Move() override;
////    void Attack() override;
////};
//
//class MovementComponent
//{
//public:
//    void Move() 
//    {
//        std::cout << "Move" << "\n";
//    }
//    void Jump() 
//    {
//        std::cout << "Jump" << "\n";
//    }
//};
//
//class AttackComponent
//{
//public:
//    void BasicAttack() 
//    {
//        std::cout << "BasicAttack" << "\n";
//    }
//    void ChargedAttack() 
//    {
//        std::cout << "ChargeAttack" << "\n";
//    }
//};
//
//class Player
//{
//public:
//    Player()
//    {
//        if (MyMovementComponent == nullptr)
//        {
//            MyMovementComponent = new MovementComponent();
//        }
//
//        if (MyAttackComponent == nullptr)
//        {
//            MyAttackComponent = new AttackComponent();
//        }
//    }
//
//    ~Player()
//    {
//        if (MyMovementComponent != nullptr)
//        {
//            delete MyMovementComponent;
//        }
//
//        if (MyAttackComponent != nullptr)
//        {
//            delete MyAttackComponent;
//        }
//    }
//
//    void Move()
//    {
//        if(MyMovementComponent != nullptr)
//        {
//            MyMovementComponent->Move();
//        }
//    }
//
//    void BasicAttack()
//    {
//        if (MyAttackComponent != nullptr)
//        {
//            MyAttackComponent->BasicAttack();
//        }
//    }
//
//private:
//    MovementComponent* MyMovementComponent = nullptr;
//    AttackComponent* MyAttackComponent = nullptr;
//};
//
//class Monster
//{
//public:
//    Monster()
//    {
//        if (MyAttackComponent == nullptr)
//        {
//            MyAttackComponent = new AttackComponent();
//        }
//    }
//
//    ~Monster()
//    {
//        if (MyAttackComponent != nullptr)
//        {
//            delete MyAttackComponent;
//        }
//    }
//
//    void BasicAttack()
//    {
//        if (MyAttackComponent != nullptr)
//        {
//            MyAttackComponent->BasicAttack();
//        }
//    }
//
//private:
//    AttackComponent* MyAttackComponent = nullptr;
//};
//
//int main()
//{
//    Player NewPlayer;
//    NewPlayer.Move();
//
//    Monster NewMonster;
//    NewMonster.BasicAttack();
//}