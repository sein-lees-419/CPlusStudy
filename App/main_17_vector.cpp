import std;

int main_17_vector()
{
	std::vector myVector{ 11, 22 };
	myVector.emplace_back(33);
	myVector.emplace_back(44);

	std::println("myVector: {}", myVector);
	return 0;
}