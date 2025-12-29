#include <iostream>
#include <cstdint>
#include "EntryPoints.h"

int main(int const argc, char const *const *argv)
{
	int(*const entryPoints[])()
	{
		main_00_HelloWorld,
		main_01_PrintingText,
		main_02_IOStreams
	};

	uint32_t entryPointIdx{};
	if (argc == 2)
		entryPointIdx = static_cast<uint32_t>(std::atoi(argv[1]));

	return entryPoints[entryPointIdx]();
}