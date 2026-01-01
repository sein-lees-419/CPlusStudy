import std;

int main_02_IOStreams()
{
	std::cout << "There are " << 219 << " ways I love you." << std::endl;
	std::cout << std::format("{} + {} = {}", 2, 4, 2 + 4) << std::endl;

	int value;
	std::cout << "Please input a value >> ";
	std::cin >> value;

	std::cout << "You entered " << value << std::endl;
	std::println(std::cerr, "This is the error stream. Test value: {}", 10);

	return 0;
}