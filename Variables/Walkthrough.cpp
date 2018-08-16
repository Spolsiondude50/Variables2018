#include<iostream>
int main2()
{
	int weightLbs = 240;
	int userWeight = -1;

	std::cout << "I weigh " << weightLbs << std::endl;
	weightLbs = weightLbs + 1;
	std::cout << "How much do you weigh in Lbs friemd"  << std::endl;
	std::cin >> userWeight;
	std::cout << "Wow you're " << userWeight;
	return 0;
}