import std;

// Normal function
void myFunction1(int const a, float const b)
{
	std::println("a: {}, b: {}", a, b);
}

// Return type deduction
auto addNumbers(int const num1, int const num2)
{
	/*
		The compiler deduces the return type based on the expressions used for the
		return statements in the body of the function. There can be multiple return
		statements, but they must all resolve to exactly the same type as the compiler
		will never insert any implicit conversions to deduce the return type of a function.
		Such a function can even include recursive calls (calls to itself), but the first
		return statement in the function must be a non-recursive call.
	*/
	return (num1 + num2);
}

void printFuncName(int const num)
{
	std::println("function: {}, num: {}", __func__, num);
}

int main_14_Functions()
{
	int const value1	{ 10 };
	float const value2	{ 20.0f };
	myFunction1(value1, value2);

	int const value3{ addNumbers(5, 15) };
	printFuncName(10);

	return 0;
}