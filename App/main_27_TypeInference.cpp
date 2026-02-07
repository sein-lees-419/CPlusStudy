import std;

namespace
{
	float func()
	{
		return 1.0f;
	}
}

int main_27_TypeInference()
{
	std::string message{ "Message" };

	// Because auto strips away reference and const qualifiers,
	// this is of type string
	auto autoMessage{ message };

	// std::string const
	auto const autoConstMessage{ message };

	// std::string &
	auto &autoRefMessage{ message };

	// std::string const &
	auto const &autoConstRefMessage{ message };

	// std::string const &z
	auto &asConstMessage{ std::as_const(message) };

	std::string const message2{ "Message2" };
	
	// std::string const &
	auto &autoMessage2{ message2 };

	int i{ 123 };

	// int *
	auto *p1 { &i };

	// int *const
	auto const p2{ &i };

	// int *const
	auto *const p3{ &i };

	// int const *
	auto const *p4{ &i };

	// Copy list initialization
	// Both are of type initializer_list<int>
	auto copyList1 = { 11 };
	auto copyList2 = { 11, 22 };

	// int
	auto directList1{ 11 };

	// Error
	//auto directList2{ 11, 22 };

	// int
	decltype(i) x{ 456 };

	// float
	decltype(func()) y{ 1.0f };

	return 0;
}