////BOJ 2748
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//unsigned long long N;
//struct Matric {
//	unsigned long long data[2][2];
//};
//
//Matric multiply(Matric m1, Matric m2) {
//	Matric mul;
//	mul.data[0][0] = (m1.data[0][0] * m2.data[0][0] + m1.data[0][1] * m2.data[1][0]) % 1000000;
//	mul.data[0][1] = (m1.data[0][0] * m2.data[0][1] + m1.data[0][1] * m2.data[1][1]) % 1000000;
//	mul.data[1][0] = (m1.data[1][0] * m2.data[0][0] + m1.data[1][1] * m2.data[1][0]) % 1000000;
//	mul.data[1][1] = (m1.data[1][0] * m2.data[0][1] + m1.data[1][1] * m2.data[1][1]) % 1000000;
//	return mul;
//}
//
//Matric divide(Matric m, unsigned long long n) {
//	if (n <= 1) {
//		return m;
//	}
//	else {
//		m = divide(m, n / 2);
//		m = multiply(m, m);
//		if (n % 2 == 1) {
//			Matric mul;
//			mul.data[0][0] = 1, mul.data[0][1] = 1;
//			mul.data[1][0] = 1, mul.data[1][1] = 0;
//			m = multiply(mul, m);
//		}
//
//		return m;
//	}
//}
//
//int main() {
//	scanf("%llu", &N);
//	
//	Matric m;
//	m.data[0][0] = 1;
//	m.data[0][1] = 1;
//	m.data[1][0] = 1;
//	m.data[1][1] = 0;
//
//	Matric result = divide(m, N);
//	printf("%llu", result.data[0][1]);
//}