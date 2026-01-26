import std;

int main_19_StructuredBindings()
{
	// Structured binding only accept fixed-sized container
	// such as an array, struct, or pair
	std::array arr{ 1, 2, 3, 4 };
	auto const [a, b, c, d]{ arr };

	struct Point
	{
	public:
		float x{};
		float y{};
	};

	Point point;
	auto &[pointX, pointY]{ point };
	pointX = 10.0f;
	pointY = 20.0f;
	std::println("point.x: {}, point.y: {}", point.x, point.y);

	return 0;
}