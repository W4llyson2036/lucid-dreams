#include <iostream> 
#include <string>

static void doNothing(int&) { /*  Don't worry about what & is for now, we're just using it to trick
the compiler into thinking variable x is used */
}

[[maybe_unused]] static void whitespace_and_basic_formatting()
{
	std::cout << "read this guide later when need: "
		"http:/ /isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-introduction";
}

static void introduction_to_literals_and_operators()
{
	std::cout << "## introduction_to_literals_and_operators! ##\n";
	std::cout << "A literal  is a fixed value that has been inserted directly into the source code" << "\n";

	int ope { 5 + 4 };  
	std::cout << "sum 5 + 4 = " << ope << "\n"; // print the value of a literal
}

// lets do math
static int perimeter_of_rectangle(int width, int length) 
{
	int perimeter = 2 * (width * length);
	return perimeter;
}

static int area_of_rectangle(int width, int length) 
{
	return width * length;
}

static void menu() 
{
	std::cout << "Hello World!\n";
	std::cout << "6 - lets do math" << "\n";
	std::cout << "1.6 - Uninitialized variables and undefined behavior" << "\n";
	std::cout << "1.8 - whitespace andbasic formatting" << "\n";
	std::cout << "1.9 - introduction to literals and operators\n";
}

int main()
{
	menu();

	int userAnswer{};
	std::cout << "type the number to view subject: ";
	std::cin >> userAnswer;

	if (userAnswer == 6) {
		int answer{};
		int width{};
		int length{};

		std::cout << "1 - perimeter of rectangle: " << "\n";
		std::cout << "2 - area of rectangle: ";
		std::cin >> answer;

		if (answer == 1) {
			std::cout << "type the WIDTH of rectangle: ";
			std::cin >> width; 

			std::cout << "type the LENGTH of rectangle: ";
			std::cin >> length;

			std::cout << "the result " << perimeter_of_rectangle(width, length) << " units^2" << "\n";
		}

		if (answer == 2) {
			std::cout << "type the WIDTH of rectangle: ";
			std::cin >> width;

			std::cout << "type the LENGTh of rectangle: ";
			std::cin >> length;

			std::cout << "Area of rectangle is: " << area_of_rectangle(width, length) << " units^2" << "\n";
		}
	}

	if (userAnswer == 16) {
		std::cout << "1.6 - Uninitialized variables and undefined behavior" << "\n\n";

		int wall; // this variable is uninitialized

		doNothing(wall); // make the compiler think we're assigning a value to this variable

		std::cout << "what is the value of X: " << wall << "\n";
		std::cout << "size ok: " << sizeof("wallysonwallysonwallyson") << "\n";
	}

	if (userAnswer == 18) {
		whitespace_and_basic_formatting();
	}

	if (userAnswer == 19) {
		introduction_to_literals_and_operators();
	}
}

// back here 
// class => https://www.learncpp.com/cpp-tutorial/introduction-to-expressions/
//
// https://www.quora.com/What-is-the-correct-usage-of-come-across-in-a-sentence 

//. It ultimately comes down to personal preference. Either way. We will follow these conventions throughout this tutorial.