import std;

int main_23_UniformInitialization()
{
	/*
		Aggregate Type
		1. Have no user-declared constructors
		2. Have no private or protected non-static data members
		3. Have no virtual functions
		4. Have no virtual base classes

		If these are satisfied:
		- {} initializes members in declaration order
		- No constructors are involved
	*/

	struct S
	{
		int x;
		int y;
	};

	// Aggregate initialization
	S s{ 1, 2 };

	class C1
	{
		int x;
		int y;
	};

	// ERROR (private members)
	// C1 c1{ 1, 2 };

	class C2
	{
	public:
		int x;
		int y;
	};

	// OK (aggregate initialization)
	C2 c2{ 1, 2 };

	class C3
	{
	public:
		int x;
		int y;
		C3(int x, int y) : x{ x }, y{ y } { }
	};

	// OK, but it's a constructor call, not member listing
	C3 c3{ 1, 2 };

	class C4
	{
	public:
		int x;
		int y;
		C4(std::initializer_list<int>) { }
		C4(int x, int y) { }
	};

	// std::initializer_list has priority.
	// If {} is used and an initializer_list constructor exists, it wins. Always.
	C4 c4{ 1, 2 };

	class C5
	{
	public:
		int x = 10;
		int y = 20;
	};

	// x == 10, y == 20
	C5 c5_1{ };

	// x == 1, y == 20
	C5 c5_2{ 1 };

	// x == 1, y == 2
	C5 c5_3{ 1, 2 };

	return 0;
}