//Triangle
//Author: Camren Carter
//Date: 5/5/2020

#include <iostream>;
#include <math.h>;

double rightTriangleSlope(double b, double a) {
	double r;
	r = sqrt(b * b + a * a);
	return r;
}
double rightTriangleHeight(double b, double a) {
	double r;
	r = sqrt(b * b / a * a);
	return r;
}
double rightTriangleBase(double b, double a) {
	double r;
	r = sqrt(b * b / a * a);
	return r;
}

int main() {
	std::string more;
	std::string choice;
	std::string rightBase;
	std::string rightHeight;
	std::string rightSlope;
	double base;
	double height;
	double slope;
	double squareroot;
	int end = 0;


	do {
		std::cout << "What side of a right triagle do you want to solve for?" << std::endl
			<< " A side Height\nB side base\nC side slope" << std::endl;
		std::cin >> choice;
	
		if (choice == "Slope" || choice == "C") {
			std::cout << "Please enter the base ";
			std::cin >> base;
			std::cout << "Please enter the height: ";
			std::cin >> height;

			slope = rightTriangleSlope(base, height);

			std::cout << "The answer is " << slope;
		}
		else if (choice == "Height" || choice == "A") {

			std::cout << "Pleae enter the base: ";
			std::cin >> base;
			std::cout << "Please enter the slope: ";
			std::cin >> slope;

			height = rightTriangleHeight(base, slope);

			std::cout << "The answer is " << height;
		}
		else if (choice == "base" || choice == "B") {

			std::cout << "Please enter the height: ";
			std::cin >> height;
			std::cout << "Please enter the slope: ";
			std::cin >> slope;

			base = rightTriangleBase(height, slope);

			std::cout << "The answer is " << base;
		}
		std::cout << "Do you wish to continue yes/no";
		std::cin >> more;
		if (more == "yes") {

		}
		else {
			end++;
		}

	} while (end == 0);


	return 0;

}