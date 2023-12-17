#include<iostream>
#include<cmath>

import Math;
using namespace Math;
int main()
{
	int y;
	std::cout << "Z";
	std::cin >> y;
	std::cout << f((Math::Complex)y) << std::endl;
	std::cout << f((Math::Rational)y) << std::endl;
	double f3 = f(y);
	std::cout << f3;
	return 0;

}