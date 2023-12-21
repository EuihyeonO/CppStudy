//enum class Binary : char
//{
//	None = 0b01111111,
//	One = 0b0001,
//	Two = 0b0011,
//	Three = 0b0010,
//};
//
//enum class Binary2
//{
//	None = 0b01111111111111111111111111111111,
//	One = 0b0001,
//	Two = 0b0011,
//	Three = 0b0010,
//};
//
//enum class Hex
//{
//	None = 0x0FF,
//	One = 0x0FFFF,
//	Two = 0xFF,
//	Three = 0xF00,
//};
//
//struct Data
//{
//	int a : 1;
//	int b : 2;
//	int c : 3;
//	int d : 4;
//	int e : 5;
//	int f : 5;
//	int g : 5;
//	int h : 5;
//	int i : 5;
//	int j : 5;
//	int k : 5;
//	int l : 5;
//	int m : 5;
//};
//
//int main()
//{
//	char A1 = 0b01111111;
//	char A2 = 0b10000110;
//
//	int B1 = 0x0FF;
//	int B2 = 0xFFF;
//	int B3 = 0xFFFFFFFF;
//	int B4 = 0x0FFFFFFF;
//	int B6 = 0xEFFFFFFF;
//
//	Data NewData;
//	NewData.a = 1;
//	auto a = sizeof(Data);
//
//	Binary A = Binary::None;
//	Binary2 B = Binary2::None;
//
//	size_t Asize = sizeof(A);
//	size_t Bsize = sizeof(B);
//}