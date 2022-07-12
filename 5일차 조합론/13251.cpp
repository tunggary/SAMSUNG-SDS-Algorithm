////BOJ 13251
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//double array[2501][2501];
//
//int main() {
//	int M,K;
//	int rock[51];
//	int sum = 0;
//
//	scanf("%d", &M);
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d", &rock[i]);
//		sum += rock[i];
//	}
//
//	scanf("%d", &K);
//
//	
//	array[0][0] = array[1][0] = array[1][1] = 1;
//	for (int i = 2; i <= 2500; i++) {
//		array[i][0] = array[i][i] = 1;
//		for (int j = 1; j <= i; j++) {
//			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
//		}
//	}
//
//	double bottom = array[sum][K];
//	double top = 0;
//	for (int i = 0; i < M; i++) {
//		top += array[rock[i]][K];
//	}
//
//	printf("%.18lf", top / bottom);
//	
//}