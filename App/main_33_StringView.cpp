import std;

int main_33_StringView()
{
	std::string_view stringView{ "MyFile.txt" };
	auto const subStr{ stringView.substr(stringView.rfind('.')) };
	std::println("subStr: {}", subStr);

	std::string s{ "Hello" };

	// Dangling pointer
	// std::string_view sv{ s + " World!" };
	// std::println("{}", sv);

	using namespace std;
	// using namespace std::literals::string_view_literals;
	auto stringViewLiteral{ "My string_view"sv };

	return 0;
}