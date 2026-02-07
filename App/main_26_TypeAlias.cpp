import std;

using IntPtr = int *;

int main_26_TypeAlias()
{
	int val{ 5 };
	IntPtr pVal{ &val };
	*pVal = 10;

	std::println("val: {}", val);
	return 0;
}