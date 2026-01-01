import std;

int main_05_Variables()
{
	int uninit;
	std::println("uninit: {}", uninit);

	int init{ 7 };
	std::println("init: {}", init);

	int i1						{ -1 };
	signed i2					{ -2 };
	signed int i3				{ -3 };

	short s1					{ 1 };
	short int s2				{ 2 };
	signed short s3				{ 3 };
	signed short int s4			{ 4 };

	long l1						{ 100 };
	long int l2					{ 200 };
	signed long l3				{ 300 };
	signed long int l4			{ 400 };

	long ll1					{ 1000 };
	long int ll2				{ 2000 };
	signed long ll3				{ 3000 };
	signed long int ll4			{ 4000 };

	unsigned u1					{ 0U };
	unsigned short u2			{ 1U };
	unsigned long u3			{ 2U };
	unsigned long long int u4	{ 3U };

	float f1					{ 7.2f };
	double d1					{ 7.2 };
	long double ld1				{ 16.98 };

	char c1						{ 'a' };
	signed char c2				{ 'b' };
	unsigned char uc1			{ 'c' };

	bool b						{ true };

	// Unsigned 8-bit integer
	constexpr std::byte byteVal	{ 42 };

	return 0;
}