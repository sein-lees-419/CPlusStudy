import std;

int main_20_Loops()
{
	for (std::array arr{ 1, 2, 3, 4 }; int const i : arr)
		std::println("i: {}", i);

	return 0;
}