#include<iostream>
float a, b, c, d, e;    
float avg;              
int main10() {
	avg = a = b = c = d = e = 0.0f;
	std::cout <<"NUMBERS BOI"<< std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	avg = (a + b + c + d + e) / 5;
    std::cout << "Your Average is " << avg << std::endl;
	return 0;

}