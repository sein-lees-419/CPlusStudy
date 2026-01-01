import std;

int main_06_Limits()
{
	std::println("[int]");
	std::println("Min: {}", std::numeric_limits<int>::min());
	std::println("Max: {}", std::numeric_limits<int>::max());
	std::println("Lowest: {}", std::numeric_limits<int>::lowest());

	std::println("[double]");
	std::println("Min: {}", std::numeric_limits<double>::min());
	std::println("Max: {}", std::numeric_limits<double>::max());
	std::println("Lowest: {}", std::numeric_limits<double>::lowest());

	return 0;
}