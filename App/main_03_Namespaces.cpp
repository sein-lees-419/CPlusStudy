import std;

using namespace std;

namespace MyNameSpace1
{
	void myFunc1()
	{
		println("MyNameSpace1::myFunc1");
	}
}

namespace MyNameSpace2
{
	void myFunc2()
	{
		println("MyNameSpace2::myFunc2");
	}

	namespace Nested
	{
		void myFunc3();
	}
}

namespace MyNameSpace2::Nested
{
	void myFunc3()
	{
		println("MyNameSpace2::Nested::myFunc3");
	}
}

namespace
{
	void thisFileOnlyFunc()
	{
		std::println("This functions is only available in this .cpp file.");
	}
}

namespace MyNameSpace3
{
	inline namespace Inline
	{
		void insideInline()
		{
			std::println("insideInline");
		}
	}
}

int main_03_Namespaces()
{
	println("Hello, World!");

	using MyNameSpace1::myFunc1;
	myFunc1();

	using namespace MyNameSpace2;
	myFunc2();

	MyNameSpace2::Nested::myFunc3();

	namespace MyNested = MyNameSpace2::Nested;
	MyNested::myFunc3();

	// Everything that is declared in an inline namespace
	// is automatically available in the parent namespace.
	MyNameSpace3::insideInline();
	MyNameSpace3::Inline::insideInline();
	
	using namespace MyNameSpace3;
	Inline::insideInline();

	return 0;
}