//Delgados Tacos
//Date: 5/1/2020
//Author: Camren Carter

#include <iostream>
#include<string>



int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tacosOrdered = 0, burritosOrdered = 0, enchiladasOrder = 0, tostadasOrdered = 0, drinkOrdered = 0, churroOrdered = 0, supremeBurritoOrdered = 0, potatoOllasOrdered = 0;
	double total;
	double choice = 0;
	double end = 0;
	std::string cont;

	std::cout << "********Welcome to Delgados Tacos***********\n\n\n\n\n\n" << std::endl;
	std::cout << "  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT " << std::endl;
	std::cout << "  T    -----------------------         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    |        O--O          |         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    ----------|------------         TTTTTTT " << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T    OO                              T  OO T" << std::endl;
	std::cout << "  TTTTO  OTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTO  OT " << std::endl;
	std::cout << "       OO                                 OO " << std::endl;

	do {
		std::cout << "\n" << "What would you like to order(number).\n" << " 1.tacos\n 2.burritos\n 3.enchiladas\n 4.tostadas\n 5.churro\n" <<
			" 6.supreme burritos\n 7.potato ollas\n 8.drinks\n Please choose here: ";
		std::cin >> choice;

		
		if (choice == 1) {
			std::cout << "How many tacos would you like? >>>" << std::endl;
			std::cin >> tacosOrdered;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 2) {
			std::cout << "How many burritos would you like? >>>" << std::endl;
			std::cin >> burritosOrdered; 
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 3) {
			std::cout << "How many enchiladas would you like? >>>" << std::endl;
			std::cin >> enchiladasOrder;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 4) {
			std::cout << "How many tostadas would you like? >>>" << std::endl;
			std::cin >> tostadasOrdered;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 5) {
			std::cout << "How many churros would you like? >>>" << std::endl;
			std::cin >> churroOrdered;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 6) {
			std::cout << "How many supreme burritos would you like? >>>" << std::endl;
			std::cin >> supremeBurritoOrdered;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 7) {
			std::cout << "How many potato ollas would you like? >>>" << std::endl;
			std::cin >> potatoOllasOrdered;
			std::cout << "Would you like to continue ordering? Yes or No:\n";
			std::cin >> cont;
			if (cont == "Yes" || cont == "yes") {
				end = 0;
			}
			else if (cont == "No" || cont == "no") {
				end++;
			}
			else {
				std::cout << "ERROR!";
				end++;
			}
		}
		else if (choice == 8) {
		std::cout << "How many drinks would you like? >>>" << std::endl;
		std::cin >> drinkOrdered;
		std::cout << "Would you like to continue ordering? Yes or No:\n";
		std::cin >> cont;
		if (cont == "Yes" || cont == "yes") {
			end = 0;
		}
		else if (cont == "No" || cont == "no") {
			end++;
		}
		else {
				std::cout << "ERROR!";
				end++;
			}
		}

	} while (end == 0);


	total = (tacos * tacosOrdered) + (burritos * burritosOrdered) + (enchiladas * enchiladasOrder) + (tostadas * tostadasOrdered)
		+ (churro * churroOrdered) + (supremeBurrito * supremeBurritoOrdered) + (potatoOllas * potatoOllasOrdered) + (drink * drinkOrdered);
	std::cout << "Your total is >>> " << total << std::endl;

	system("pause");
	return 0;
}