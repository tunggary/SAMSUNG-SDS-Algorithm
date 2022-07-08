////BOJ 2805
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//long long N, M;
//long long trees[1000001];
//
//int main() {
//	scanf("%d %d\n", &N, &M);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &trees[i]);
//	}
//
//	sort(trees, trees+N);
//
//	long long start = 0;
//	long long end = trees[N-1];
//	long long result = 0;
//
//
//	while (start <= end) {
//		long long mid = (start + end) / 2;
//		
//		long long sum = 0;
//		for (int i = 0; i < N; i++) {
//			if (trees[i] > mid) {
//				sum += (trees[i] - mid);
//			}
//		}
//
//		if (M <= sum) {
//			result = mid;
//			start = mid + 1;
//		}
//		else {
//			end = mid - 1;
//		}
//	}
//
//	printf("%lld\n", result);
//}