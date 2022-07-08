////BOJ 2042
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N, M, K;
//long long A, B, C;
//
//long long tree[1024 * 1024 * 2];
//int tmpN;
//
//void update(long long b, long long c) {
//	b = tmpN + b - 1;
//	tree[b] = c;
//
//	b >>= 1;
//	while (b > 0) {
//		tree[b] = tree[b * 2] + tree[b * 2 + 1];
//		b >>= 1;
//	}
//}
//
//long long getSum(long long b, long long c) {
//	b = tmpN + b - 1;
//	c = tmpN + c - 1;
//	long long sum = 0;
//
//	while (b <= c) {
//		if ((b & 1) == 1) sum += tree[b];
//		if ((c & 1) == 0) sum += tree[c];
//		b = (b + 1) >> 1;
//		c = (c - 1) >> 1;
//	}
//	return sum;
//}
//
//int main() {
//
//	scanf("%d %d %d", &N, &M, &K);
//
//	for (tmpN = 1; tmpN < N; tmpN <<= 1); // tmpN의 위치 찾아줌
//
//	for (int i = 0; i < tmpN * 2; i++) tree[i] = 0; // tree 초기화
//
//	// leaf 채우기
//	for (int i = tmpN; i < tmpN + N; i++) {
//		scanf("%lld", &tree[i]);
//	}
//
//	// internal 채우기
//	for (int i = tmpN - 1; i >= 1; i--) {
//		tree[i] = tree[i * 2] + tree[i * 2 + 1];
//	}
//
//	for (int i = 0; i < M + K; i++) {
//		scanf("%lld %lld %lld", &A, &B, &C);
//		if (A == 1) {
//			//update
//			update(B, C);
//		}
//		else {
//			// b~c 구간합 구하기
//			printf("%lld\n", getSum(B, C));
//		}
//	}
//}