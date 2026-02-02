import std;

class Aggregate
{
public:
	int a;
	float b;
	std::string c;
	int d{ 10 };
};

int main_24_DesignatedInitializers()
{
	// Designated initializers can be used only with an aggregate type
	Aggregate aggregate
	{
		.a	= { 1 },
		// Can skip any member (it will be zero)
		//.b	= { 2.0f },
		.c	= "3",
	};

	std::println(
		"a: {}, b: {}, c: {}, d: {}",
		aggregate.a, aggregate.b, aggregate.c, aggregate.d);

	return 0;
}