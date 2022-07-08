////BOJ 6588
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<cmath>
//using namespace std;
//
//int input;
//int arr[1000001];
//
//int main() {
//
//	for (int i = 2; i < sqrt(1000000); i++) {
//		if (!arr[i]) {
//			for (int j = i + i; j <= 1000000; j += i) {
//				arr[j] = true;
//			}
//		}
//	}
//
//	while (true) {
//		scanf("%d", &input);
//		if (input == 0) break;
//
//		for (int i = 2; i < input; i++) {
//			if (!arr[i] && !arr[input - i]) {
//				printf("%d = %d + %d\n", input, i, input - i);
//				break;
//			}
//			if (i == input - 1) {
//				printf("Goldbach's conjecture is wrong.\n");
//			}
//		}
//
//
//	}
//}