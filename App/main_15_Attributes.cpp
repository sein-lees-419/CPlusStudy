import std;

void test_fallthrough()
{
	switch (int value{ 10 }; value)
	{
	case 0:
		std::println("value is 0");
		break;

	case 10:
		[[fallthrough]];

	case 15:
		std::println("value is 10 or 15");
		break;
	}
}

[[nodiscard]]
int test_nodiscard()
{
	return 100;
}

[[nodiscard("Some explanation")]]
int test_nodiscard2()
{
	return 100;
}

int test_maybe_unused(int unused1, [[maybe_unused]] int unused2)
{
	return 0;
}

// means it never returns control to the caller.
[[noreturn]] void test_noreturn()
{
	exit(1);
}

int some_func()
{
	test_noreturn();
}

[[deprecated]]
void test_deprecated()
{

}

[[deprecated("It is deprecated")]]
void test_deprecated2()
{

}

void test_likely_unlikely()
{
	int age{ 36 };

	[[unlikely]]
	if (age >= 1000) 
	{
		std::println("You're very very old.");
	}

	switch (age / 10)
	{
	[[likely]]
	case 3:
		std::println("You're about 30 years old.");
		break;

	[[unlikely]]
	case 20:
		std::println("You're about 200 years old.");
		break;
	}
}

// Not supported with MSVC
//int divideBy32(int const x)
//{
//	[[assume(x >= 0)]];
//	return (x / 32);
//}

int main_15_Attributes()
{
	test_fallthrough();

	// This will make a compilation warning, like:
	// warning C4834: discarding return value of function with [[nodiscard]] attribute
	// test_nodiscard();
	int val{ test_nodiscard() };
	test_maybe_unused(5, 0);
	//test_noreturn();

	// test_deprecated();
	test_likely_unlikely();

	return 0;
}