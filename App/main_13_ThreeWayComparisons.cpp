import std;

void compare(int const a, int const b)
{
	std::strong_ordering const result{ a <=> b };
	std::print("({} <=> {}) == ", a, b);

	if (result == std::strong_ordering::less)
		std::println("less");
	else if (result == std::strong_ordering::greater)
		std::println("greater");
	else
		std::println("equal");
}

void compare(float const a, float const b)
{
	std::partial_ordering const result{ a <=> b };
	std::print("({} <=> {}) == ", a, b);

	if (result == std::partial_ordering::less)
		std::println("less");
	else if (result == std::partial_ordering::greater)
		std::println("greater");

	// !(a < b) && !(b < a)
	else if (result == std::partial_ordering::equivalent)
		std::println("equivalent");
	else if (result == std::partial_ordering::unordered)
		std::println("unordered");
}

int main_13_ThreeWayComparisons()
{
	compare(11, 0);
	compare(11.0f, 120.0f);

	// NaN is never same as anything
	// The result of <=> will be unordered if one or both of the operands is NaN
	compare(std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<float>::quiet_NaN());
	compare(std::numeric_limits<float>::infinity(), std::numeric_limits<float>::quiet_NaN());

	// Inf is always greater than anything except inf inself
	compare(std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity());

	// Below are not exactly equal under bit-level precision.
	// Still, they are equivalent to each other.
	compare(0.0f, -0.0f);

	// If you can guarantee your comparison always make strong ordering,
	// Then you also can use std::strong_order, to produce a std::strong_ordering.
	std::strong_ordering strongResult{ std::strong_order(0.0f, 1.0f) };

	// Named comparison functions
	std::println("std::is_lt(1 <=> 2) == {}", std::is_lt(1 <=> 2));
	std::println("std::is_gt(1 <=> 2) == {}", std::is_gt(1 <=> 2));
	std::println("std::is_eq(1 <=> 2) == {}", std::is_eq(1 <=> 2));

	return 0;
}