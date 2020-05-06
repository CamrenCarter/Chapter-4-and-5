//Pizza
//Author: Camren Carter

#include <iostream>
#include <string>



int main() {
	double priceSmall = 7.99;
	double priceMedium = 11.99;
	double priceLarge = 15.99;
	double total = 0;
	std::string first;
	std::string size;
	std::string toppings;
	int end = 0;
	std::string more;

	std::cout << "would you like a pizza: yes/no" << std::endl;
	std::cin >> first;
	if (first == "yes") {
		do {
			std::cout << "What size pizza do you want:\nSmall \nMedium \nLarge" << std::endl;
			std::cin >> size;
			if (size == "small") {

				std::cout << "What toppings would you like:\npepperoni \nsausage(who gets sausage?) \ncheese \npineapple" << std::endl;
				std::cin >> toppings;
				total = 1 * priceSmall + total;
				std::cout << "Your total is " << total << std::endl;

				std::cout << "Do you wish to continue: yes/no\n" << std::endl;
				std::cin >> more;
				if (more == "no") {
					end++;
				}
		
			}
			else if (size == "medium") {
				std::cout << "What toppings would you like:\npepperoni \nsausage(who gets sausage?) \ncheese \npineapple" << std::endl;
				std::cin >> toppings;
				total = 1 * priceMedium + total;
				std::cout << "Your total is " << total << std::endl;

				std::cout << "Do you wish to continue: yes/no\n" << std::endl;
				std::cin >> more;
				if (more == "no") {
					end++;
				}

			}
			else if (size == "large") {
				std::cout << "What toppings would you like:\npepperoni \nsausage(who gets sausage?) \ncheese \npineapple" << std::endl;
				std::cin >> toppings;
 				total = 1 * priceLarge + total;
				std::cout << "Your total is " << total << std::endl;

				std::cout << "Do you wish to continue: yes/no\n" << std::endl;
				std::cin >> more;
				if (more == "no") {
					end++;
				}

			}
		} while (end == 0);
		return 0;
	}

}