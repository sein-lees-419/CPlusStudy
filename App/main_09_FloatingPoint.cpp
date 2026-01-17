import std;

int main_09_FloatingPoint()
{
	/// Interface ///
	std::println("[Interface]");

	/*
	*	IEEE 754 float: sign (1 bit) / exponent (8 bits) / fraction (23 bits)
	*	value		= (-1)^sign * 2^(exponent-127) * (1.fraction)_2
	*	-2.8125		= (-1)^(1) * 2^(128-127) * (1.01101)_2
	*/
	std::uint32_t floatAsBits{ 0b1'10000000'01101000000000000000000 };
	float *const pFloat{ reinterpret_cast<float *>(&floatAsBits) };
	std::println("*pFloat == {}", *pFloat);

	/*
	*	IEEE 754 double: sign (1 bit) / exponent (11 bits) / fraction (52 bits)
	*	value		= (-1)^sign * 2^(exponent-1023) * (1.fraction)_2
	*	53.75		= (-1)^(0) * 2^(1028-1023) * (1.1010111)_2
	*/
	std::uint64_t doubleAsBits{ 0b0'10000000100'1010111000000000000000000000000000000000000000000000 };
	double *const pDouble{ reinterpret_cast<double *>(&doubleAsBits) };
	std::println("*pDouble == {}", *pDouble);
	std::println();

	/// Special Values ///
	std::println("[Special Values]");

	// +0 (sign == 0, exp == 0, frac == 0)
	floatAsBits = 0b0'00000000'00000000000000000000000;
	std::println("+0 == {}", *pFloat);

	// -0 (sign == 1, exp == 0, frac == 0)
	floatAsBits = 0b1'00000000'00000000000000000000000;
	std::println("-0 == {}", *pFloat);

	// Denormal (exp == 0, frac != 0)
	// value = (-1)^sign * 2^(1-bias) * (0.fraction)_2
	floatAsBits = 0b0'00000000'10000000000000000000000;
	std::println("Denormal: {}", *pFloat);

	// +Infinity (sign == 0, exp == ~0, frac == 0)
	floatAsBits = 0b0'11111111'00000000000000000000000;
	std::println("+Inf: {}", *pFloat);

	// -Infinity (sign == 1, exp == ~0, frac == 0)
	floatAsBits = 0b1'11111111'00000000000000000000000;
	std::println("-Inf: {}", *pFloat);

	// +NaN (sign == 0, exp == ~0, frac != 0)
	floatAsBits = 0b0'11111111'00000000000100000000000;
	std::println("+NaN: {}", *pFloat);

	// -NaN (sign == 1, exp == ~0, frac != 0)
	floatAsBits = 0b1'11111111'00000000000000001000000;
	std::println("-NaN: {}", *pFloat);
	std::println();


	/// Pre-defined Constants ///
	std::println("[Pre-defined Constants]");


	// Finite highest value
	*pFloat = std::numeric_limits<float>::max();
	std::println("numeric_limits<float>::max(): {}", *pFloat);

	// 0b0'11111110'11111111111111111111111
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// The smallest-positive-normal value
	*pFloat = std::numeric_limits<float>::min();
	std::println("numeric_limits<float>::min(): {}", *pFloat);

	// 0b0'00000001'00000000000000000000000
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// The smallest-positive-denormal value
	*pFloat = std::numeric_limits<float>::denorm_min();
	std::println("numeric_limits<float>::denorm_min(): {}", *pFloat);

	// 0b0'00000000'00000000000000000000001
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// Finite lowest value
	*pFloat = std::numeric_limits<float>::lowest();
	std::println("numeric_limits<float>::lowest(): {}", *pFloat);

	// 0b1'11111110'11111111111111111111111
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// Infinity
	*pFloat = std::numeric_limits<float>::infinity();
	std::println("numeric_limits<float>::infinity(): {}", *pFloat);

	// 0b0'11111111'00000000000000000000000
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// Epsilon
	*pFloat = std::numeric_limits<float>::epsilon();
	std::println("numeric_limits<float>::epsilon(): {}", *pFloat);

	// 0b0'11111111'00000000000000000000000
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// Quiet NaN
	*pFloat = std::numeric_limits<float>::quiet_NaN();
	std::println("numeric_limits<float>::quiet_NaN(): {}", *pFloat);

	// Platform-dependent
	std::println("bits: {:032b}", floatAsBits);
	std::println();


	// Signaling NaN
	*pFloat = std::numeric_limits<float>::signaling_NaN();
	std::println("numeric_limits<float>::signaling_NaN(): {}", *pFloat);

	// Platform-dependent
	std::println("bits: {:032b}", floatAsBits);
	std::println();

	return 0;
}