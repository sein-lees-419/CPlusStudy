import std;

int main_16_Arrays()
{
	int myArr[3];
	myArr[0] = 10;
	myArr[1] = 20;
	myArr[2] = 30;
	std::println("myArr: {}", myArr);

	// If you specify the size of the array and
	// the initializer list has fewer elements than the size,
	// the remaining elements are set to 0
	int myArr2[3]{ 100 };
	std::println("myArr2: {}", myArr2);

	// the compiler deduces the size of the array
	int myArr3[]{ 1, 2, 3, 4 };
	std::println("myArr3: {}", myArr3);

	std::size_t const arrSize{ std::size(myArr3) };
	std::println("arrSize: {}", arrSize);

	std::array<int, 3> stdArr{ 9, 8, 7 };
	std::println("stdArr size: {}", stdArr.size());
	std::println("stdArr[1]: {}", stdArr[1]);

	std::array stdArr2{ 1, 2, 3, 4, 5 };
	std::println("stdArr2 size: {}", stdArr2.size());
	std::println("stdArr2[2]: {}", stdArr2[2]);

	return 0;
}