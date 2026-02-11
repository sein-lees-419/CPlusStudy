import std;

int main_31_StringLiterals()
{
	/*
		The literal s is defined in the std::literals::string_literals namespace.
		both the string_literals and literals namespaces are inline namespaces.
		As such, you have the following to make string literals available:
			- using namespace std;
			- using namespace std::literals;
			- using namespace std::string_literals;
			- using namespace std::literals::string_literals;
	*/
	using namespace std;

	// char const *
	auto string1{ "Hello" };

	// char const(&)[6]
	auto const &string2{ "Hello" };

	// std::string literals
	// std::string const &
	auto const &string3{ "Hello"s };

	return 0;
}