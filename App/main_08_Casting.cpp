import std;

int main_08_Casting()
{
	float myFloat	{ 3.14f };

	// Holdover from C; it is not recommended
	int i1			{ (int)myFloat };

	// Rarely used
	int i2			{ int(myFloat) };

	// The most verbose but is also the cleanest
	int i3			{ static_cast<int>(myFloat) };

	short someShort	{ 10 };

	// No explicit cast needed
	long someLong	{ someShort };

	return 0;
}