//
//struct StructA
//{
//	int a = 0;
//	char b = 0;
//};
//
//class ClassA
//{
//public:
//	int a = 0;
//	char b = 0;
//};
//
//class ClassB
//{
//public:
//	int a = 0;
//	char b = 0;
//private:
//	int c = 0;
//};
//
//
//int main()
//{
//	StructA StrA = { 5, 'A' };
//	ClassA ClsA = { 5, 'A'};
//
//	//private인 멤버변수가 하나라도 있으면 외부에서 리터럴 초기화는 불가능.
//	ClassB ClsB1 = { 5, 'A'};
//	ClassB ClsB2 = { 5, 'A', 6};
//
//}