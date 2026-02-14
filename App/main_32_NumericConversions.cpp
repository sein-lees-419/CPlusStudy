import std;

int main_32_NumericConversions()
{
	int intVal			{ 1 };
	int longVal			{ 1L };
	float floatVal		{ 2.0F };
	double doubleVal	{ 3.0 };

	std::string intStr		{ std::to_string(intVal) };
	std::string longStr		{ std::to_string(longVal) };
	std::string floatStr	{ std::to_string(floatVal) };
	std::string doubleStr	{ std::to_string(doubleVal) };

	std::cout << intStr << std::endl;
	std::cout << longStr << std::endl;
	std::cout << floatStr << std::endl;
	std::cout << doubleStr << std::endl;

	intVal		= std::stoi("10");
	longVal		= std::stol("20");
	floatVal	= std::stof("30.0F");
	doubleVal	= std::stod("40.0");

	std::cout << intVal << std::endl;
	std::cout << longVal << std::endl;
	std::cout << floatVal << std::endl;
	std::cout << doubleVal << std::endl;

	std::string myStr;
	myStr.resize(5uz);
	auto const result{ std::to_chars(myStr.data(), myStr.data() + 5uz, 12345.0f) };
	std::println("myStr: {}", myStr);

	std::from_chars(myStr.data(), myStr.data() + 5uz, floatVal);
	std::println("floatVal: {}", floatVal);

	return 0;
}