#include <iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int amari,kaisuu = 0;
	for (int i = a; i < 1000000; i+=d) {
		amari = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)amari++;
		}
		if (amari == 2)kaisuu++;
		if (kaisuu == n)return i;
	}
}

int main() {

	std::cout << nth_prime(367, 186, 151) << std::endl;

	return 0;
}