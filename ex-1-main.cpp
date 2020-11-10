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

	std::cout << "367 ,186 ,151 : 92809 : "<< nth_prime(367, 186, 151) << std::endl;
	std::cout << "179 ,10 ,203 : 6709 : "<< nth_prime(179, 10, 203) << std::endl;
	return 0;
}