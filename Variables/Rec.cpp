#include<iostream>
float rectWidth = 0.0f;
float rectHeight = 0.0f;
float rectArea = 0.0f;
int main9() {
	std::cout << "What is the Height" << std::endl;
	std::cin >> rectHeight;
	std::cout << "What is the Width" << std::endl;
	std::cin >> rectWidth;
	rectArea = rectWidth * rectHeight;
	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;
	return 0;
}