import std;

int main_30_StringClass()
{
	// Basic
	std::println("[Basic usages]");
	std::string a{ "12" };
	std::string b{ "34" };
	std::println("a: {}, b: {}", a, b);
	std::println();

	// Concatenate
	std::println("[Concatenation]");
	std::string c{ a + b };
	std::println("c: {}", c);
	std::println();

	// Overload
	std::println("[Overloading]");
	std::string d;
	d += c;
	d += "5678";
	std::println("d: {}", d);
	std::println();

	// Comparison
	std::println("[Comparison]");
	std::string hello{ "hello" };
	std::string world{ "world" };
	std::println("hello < world: {}", hello < world);
	std::println("hello > world: {}", hello > world);
	std::println();

	// strcmp-like member function
	std::println("hello.compare(world): {}", hello.compare(world));
	std::println("world.compare(hello): {}", world.compare(hello));
	std::println();

	// 3-way comparison operator
	std::println("[3-way comparison]");
	auto const comparison{ a <=> b };
	if (std::is_lt(comparison))
		std::println("is_lt");
	else if (std::is_eq(comparison))
		std::println("is_eq");
	else if (std::is_gt(comparison))
		std::println("is_gt");

	std::println();

	// Substitution
	std::println("[Substitution]");
	hello += ", there";
	hello[0] = 'C';
	std::println("{}", hello);
	std::println();

	// Backward compatibilities
	std::println("[Backward compatibilities]");
	char const *const pWorld{ world.c_str() };
	std::println("pWorld: {}", pWorld);

	char *const pWorld2{ world.data() };
	pWorld2[4] = 'X';
	std::println("world: {}", world);
	std::println();

	// Operations
	std::println("[Operations]");
	std::string original{ "This is original" };
	std::println("original: '{}'", original);
	std::println("original.substr(5): '{}'", original.substr(5));
	std::println("original.substr(5, 2): '{}'", original.substr(5, 2));
	std::println(R"(original.find("is"): '{}')", original.find("original"));
	std::println(R"(original.replace(8uz, 8uz, "replaced!"): '{}')", original.replace(8uz, 8uz, "replaced!"));
	std::println(R"(original.starts_with("This"): '{}')", original.starts_with("This"));
	std::println(R"(original.ends_with("This"): '{}')", original.ends_with("This"));
	std::println(R"(original.contains("This"): '{}')", original.contains("replaced"));

	// Compilation error, starting from C++23
	// Undefined behavior, before C++23
	// std::string err{ nullptr };

	return 0;
}