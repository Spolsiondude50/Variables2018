#include<iostream>
int numberC = 3;
int somethingC = 23;
int main4() {
	numberC = 7;
	numberC = 1;
	somethingC = 21;

	numberC = somethingC;
	std::cout << "C) " << numberC << std::endl;
	return 0;
}