////BOJ 2003
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N, M;
//int array[10001];
//
//int main() {
//	scanf("%d %d\n", &N, &M);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &array[i]);
//	}
//
//	int i = 0, j = 0;
//	int sum = array[0];
//	int result = 0;
//
//	while (j < N) {
//		if (sum == M) {
//			result++;
//			sum += array[++j];
//		}
//		else if (sum < M) {
//			sum += array[++j];
//
//		}
//		else {
//			sum -= array[i++];
//
//			if (i > j) {
//				j = i;
//				sum = array[j];
//			}
//		}
//	}
//	printf("%d\n", result);
//}