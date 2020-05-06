//DieRolling
//Camren Carter 

#include <iostream>
#include <string>
#include <cstdlib>

int main() {
	int die = rand() % 6 + 1;
	int score = 0;
	score = die + score;
	std::cout << score;
	
	for (int i = 0; i < 7; i++) {
		std::cout << "The dice rolled\n";
		std::cout << die;
	}

}