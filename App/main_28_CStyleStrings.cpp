import std;

int main_28_CStyleStrings()
{
	char myString[]{ 'h', 'e', 'l', 'l', 'o', '\0' };
	std::println("myString: {}, sizeof: {}, len: {}", myString, sizeof(myString), std::strlen(myString));

	char *pCopied{ new char[std::strlen(myString) + 1uz] };
	std::strcpy(pCopied, myString);
	std::println("pCopied: {}", pCopied);

	delete[] pCopied;
	pCopied = nullptr;

	char const *const pStr1{ "Hello, " };
	char const *const pStr2{ "World " };
	char const *const pStr3{ "!!" };

	char *pConcat{ new char[std::strlen(pStr1) + std::strlen(pStr2) + std::strlen(pStr3) + 1] };
	std::strcpy(pConcat, pStr1);
	std::strcpy(pConcat + std::strlen(pStr1), pStr2);
	std::strcpy(pConcat + std::strlen(pStr1) + std::strlen(pStr2), pStr3);
	std::println("pConcat: {}", pConcat);

	delete[] pConcat;
	pConcat = nullptr;

	// Compilation error
	// char *ptr{ "Hello" };

	// OK
	char const *ptr{ "Hello" };
	
	// Error
	// ptr[0] = 'B';

	// OK. Copied.
	char arr[]{ "Hello" };

	// OK
	arr[0] = 'B';
	std::println("arr: {}", arr);

	return 0;
}