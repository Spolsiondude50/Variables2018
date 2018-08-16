#include<iostream>
int t = 0;
int s = 0;
int dumbNumber1 = 0;
int dumbNumber2 = 0;
int main() {
	std::cout << "x is " << std::endl;
	std::cin >> t;
	std::cout << "y is " << std::endl;
	std::cin >> s;
	dumbNumber1 = s;
	dumbNumber2 = t;
	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << dumbNumber1 << std::endl;
	std::cout << "y is " << dumbNumber2 << std::endl;
	return 0;
}