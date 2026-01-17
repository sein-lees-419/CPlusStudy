import std;

int main_07_ZeroInitialization()
{
	int intVal1{ 0 };
	int intVal2{ };

	std::println("intVal1 == intVal2: {}", intVal1 == intVal2);
	return 0;
}