import std;

int main_12_ConditionalStatements()
{
	if (int var{ 5 }; var == 1)
		std::println("var is {}", var);
	else if (var == 5)
	{
		std::println("var is 5");
		
		++var;
		std::println("var is now {}", var);
	}
	else
		std::println("Don't know what value var is");

	enum class Mode { STANDARD, CUSTOM, UNKNOWN };
	switch (auto const mode{ Mode::CUSTOM }; mode)
	{
	using enum Mode;
	case STANDARD:
		std::println("Mode is STANDARD");
		break;

	case UNKNOWN:
		std::println("Mode is UNKNOWN");
		[[fallthrough]];

	case CUSTOM:
		std::println("Mode is CUSTOM");
		break;
	}

	return 0;
}