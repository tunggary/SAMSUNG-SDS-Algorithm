////BOJ 5557
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N;
//int arr[101];
//int rightValue;
//int result;
//long long dp[101][21];
//
//int main() {
//	scanf("%d", &N);
//	
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	
//	dp[0][arr[0]] = 1;
//	for (int i = 1; i < N - 1; i++) {
//		for (int val = 0; val <= 20; val++) {
//			if (dp[i - 1][val]) {
//				if (val + arr[i] <= 20) dp[i][val + arr[i]] += dp[i - 1][val];
//				if (val - arr[i] >= 0) dp[i][val - arr[i]] += dp[i - 1][val];
//			}
//		}
//	}
//
//	printf("%lld\n", dp[N-2][arr[N-1]]);
//}