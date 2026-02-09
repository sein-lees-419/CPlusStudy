import std;

int main_29_RawStringLiterals()
{
	// Error
	// std::println("Hello "World"!");

	// It works, but ugly.
	std::println("Hello \"World\"!");

	// Raw string literal
	// It also works, and pretty.
	std::println(R"(Hello "World"!)");

	std::println(R"(Line 1
Line 2)");

	std::println(R"(Not treated as escape sequence: \t)");

	// Using custom delimiter sequence
	std::println(R"custom(Raw string literal starts with "( and ends with )".)custom");

	return 0;
}