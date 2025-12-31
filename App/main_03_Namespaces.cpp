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

	return 0;
}