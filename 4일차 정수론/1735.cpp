////BOJ 1735
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int a1, b1;
//int a2, b2;
//
//int main() {
//	scanf("%d %d", &a1, &b1);
//	scanf("%d %d", &a2, &b2);
//
//	int b = b1 * b2;
//	int a = a1 * b2 + a2 * b1;
//
//	int max, min;
//
//	if (a > b) {
//		max = a;
//		min = b;
//	}
//	else {
//		max = b;
//		min = a;
//	}
//
//	while (min != 0) {
//		int n = max % min;
//		max = min;
//		min = n;
//	}
//
//	printf("%d %d\n", a / max, b / max);
//
//}