import std;

std::optional<int> giveMeData(bool const giveMe)
{
	if (giveMe)
		return 10;

	return std::nullopt;
}

void printDataIfExists(std::optional<int> const &data)
{
	if (data)
		std::println("data: {}", data.value());
	else
		std::println("data: nullopt");
}

int main_18_optional()
{
	auto const data1{ giveMeData(true) };
	auto const data2{ giveMeData(false) };

	printDataIfExists(data1);
	printDataIfExists(data2);

	return 0;
}