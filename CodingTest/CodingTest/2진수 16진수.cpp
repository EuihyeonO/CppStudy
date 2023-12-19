enum class Binary : char
{
	None = 0b01111111,
	One = 0b0001,
	Two = 0b0011,
	Three = 0b0010,
};

enum class Binary2
{
	None = 0b01111111111111111111111111111111,
	One = 0b0001,
	Two = 0b0011,
	Three = 0b0010,
};

enum class Hex
{
	None = 0x0FF,
	One = 0x0FFFF,
	Two = 0xFF,
	Three = 0xF00,
};

int main()
{
	char A1 = 0b01111111;
	char A2 = 0b10000110;

	int B1 = 0x0FF;
	int B2 = 0xFFF;
	int B3 = 0xFFFFFFFF;
	int B4 = 0x0FFFFFFF;
	int B6 = 0xEFFFFFFF;

	Binary A = Binary::None;
	Binary2 B = Binary2::None;

	size_t Asize = sizeof(A);
	size_t Bsize = sizeof(B);
}