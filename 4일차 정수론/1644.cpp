////BOJ 1644
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//bool arr[4000001];
//int prime[4000001];
//
//int main() {
//	for (int i = 2; i <= 4000000; i++) {
//		if (!arr[i]) {
//			for (int j = i + i; j <= 4000000; j+=i) {
//				arr[j] = true;
//			}
//		}
//	}
//
//	int idx = 0;
//	for (int i = 2; i <= 4000000; i++) {
//		if (!arr[i]) {
//			prime[idx++] = i;
//		}
//	}
//
//	int input;
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("0\n");
//		return 0;
//	}
//
//	int first = 0, end = 0;
//	int sum = prime[end];
//	int result = 0;
//	
//	while (first <= end && end < idx) {
//		if (sum == input) {
//			result++;
//			sum += prime[++end];
//		}
//		else if (sum < input) {
//			sum += prime[++end];
//		}
//		else {
//			sum -= prime[first++];
//		}
//	}
//
//	printf("%d\n", result);
//
//}