import std;

int sum(std::initializer_list<int> const values)
{
	int total{};
	for (int value : values)
		total += value;

	return total;
}

int main_21_InitializerLists()
{
	std::println("{}", sum({ 1, 2, 3 }));
	
	// Compilation Error
	// std::println("{}", sum({ 1, 2, 3.0 }));
	return 0;
}