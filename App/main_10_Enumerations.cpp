import std;

enum class PieceType : std::uint64_t
{
	KING	= 1ULL,
	QUEEN,
	ROOK	= 10ULL,
	PAWN
};

enum class State
{
	UNKNOWN,
	STARTED,
	FINISHED
};

enum class Error
{
	NONE,
	BAD_INPUT,
	DISK_FULL,
	UNKNOWN
};

int main_10_Enumerations()
{
	//int value{ PieceType::KING };
	auto value{ std::to_underlying(PieceType::KING) };

	using enum PieceType;
	auto piece{ QUEEN };

	using Error::NONE;
	auto err{ NONE };

	return 0;
}