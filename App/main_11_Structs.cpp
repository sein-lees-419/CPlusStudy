import std;
import employee;

int main_11_Structs()
{
	Employee anEmployee{};
	anEmployee.firstInitial		= 'J';
	anEmployee.lastInitial		= 'D';
	anEmployee.employeeNumber	= 42;
	anEmployee.salary			= 80000;

	std::println(
		"Employee: {}. {}.",
		anEmployee.firstInitial, anEmployee.lastInitial);

	std::println("Number: {}", anEmployee.employeeNumber);
	std::println("Salary: ${}", anEmployee.salary);

	return 0;
}