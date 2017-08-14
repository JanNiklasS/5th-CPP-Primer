#include <iostream>

int main() {

	unsigned u = 10;
	unsigned u2 = 42;

	std::cout << u2 - u << std::endl;	// 32
	std::cout << u - u2 << std::endl;	// 4,294,967,264 

	int i = 10;
	int i2 = 42;

	std::cout << i2 - i << std::endl;	// 32
	std::cout << i - i2 << std::endl;	// -32
	
	std::cout << i - u << std::endl;	// 0
	std::cout << u - i << std::endl;	// 0
	
	return 0;
	
}
