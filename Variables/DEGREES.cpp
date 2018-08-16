#include<iostream>
float degCelsius = 78.0f;
float degFahrenheit = 0.0f;
int main8() {
	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	std::cout << "How hot are you right now friemd" << std::endl;
	std::cin >> degCelsius;
	degFahrenheit = ((degCelsius *9) / 5 + 32);
	std::cout << "Wow you're " << degFahrenheit;
	return 0;
}