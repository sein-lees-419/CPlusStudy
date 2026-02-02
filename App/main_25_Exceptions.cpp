import std;

namespace
{
	float divide(float const numerator, float const denominator)
	{
		if (denominator == 0.0f)
			throw std::invalid_argument{ "denominator cannot be zero." };

		return (numerator / denominator);
	}
}

int main_25_Exceptions()
{
	try
	{
		std::println("{}", divide(1.0f, 0.2f));
		std::println("{}", divide(1.0f, 0.3f));
		std::println("{}", divide(1.0f, 0.0f));
	}
	catch (std::invalid_argument const &e)
	{
		std::println("Error: {}", e.what());
	}

	return 0;
}