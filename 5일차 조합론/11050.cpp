////BOJ 11050
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int array[11][11];
//
//int main() {
//	int N, K;
//	scanf("%d %d", &N, &K);
//
//	for (int i = 1; i <= N; i++) {
//		array[i][0] = 1;
//		array[i][i] = 1;
//	}
//
//	for (int i = 2; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
//		}
//	}
//	printf("%d\n", array[N][K]);
//}