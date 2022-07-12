////BOJ 15663
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int N, M;
//int arr[10001];
//bool check[8];
//int save[8];
//
//void dfs(int n) {
//	if (n == M) {
//		for (int i = 0; i < M; i++) {
//			printf("%d ", save[i]);
//		}
//		printf("\n");
//	}
//
//	int tmp = -1;
//	for (int i = 0; i < N; i++) {
//		if (!check[i] && tmp != arr[i]) {
//			save[n] = arr[i];
//			tmp = arr[i];
//			check[i] = true;
//			dfs(n + 1);
//			check[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr, arr + N);
//	dfs(0);
//}