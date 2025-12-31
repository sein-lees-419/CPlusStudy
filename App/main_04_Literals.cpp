int main_04_Literals()
{
	int decimal			{ 123 };
	int octal			{ 0173 };
	int hexadecimal		{ 0x7b };
	int binary			{ 0b1111011 };

	float floatVal		{ 3.14f };
	double doubleVal	{ 3.14 };
	double hexaFloat	{ 0x3.abcp-10 };

	char charVal		{ 'a' };
	char const *str		{ "string" };

	int separated		{ 1234'5678 };
	char const *concat	{ "Hello, " "World" };

	return 0;
}