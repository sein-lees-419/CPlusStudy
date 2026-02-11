#include <iostream>
#include <cstdint>
#include "EntryPoints.h"

int main(int const argc, char const *const *argv)
{
	using MainFunc = int(*)();
	static MainFunc constexpr ENTRY_POINTS[]
	{
		// 01
		main_00_HelloWorld,
		main_01_PrintingText,
		main_02_IOStreams,
		main_03_Namespaces,
		main_04_Literals,
		main_05_Variables,
		main_06_Limits,
		main_07_ZeroInitialization,
		main_08_Casting,
		main_09_FloatingPoint,
		main_10_Enumerations,
		main_11_Structs,
		main_12_ConditionalStatements,
		main_13_ThreeWayComparisons,
		main_14_Functions,
		main_15_Attributes,
		main_16_Arrays,
		main_17_vector,
		main_18_optional,
		main_19_StructuredBindings,
		main_20_Loops,
		main_21_InitializerLists,
		main_22_Strings,
		main_23_UniformInitialization,
		main_24_DesignatedInitializers,
		main_25_Exceptions,
		main_26_TypeAlias,
		main_27_TypeInference,

		// 02
		main_28_CStyleStrings,
		main_29_RawStringLiterals,
		main_30_StringClass,
		main_31_StringLiterals
	};

	uint32_t entryPointIdx{};
	if (argc == 2)
		entryPointIdx = static_cast<uint32_t>(std::atoi(argv[1]));

	return ENTRY_POINTS[entryPointIdx]();
}