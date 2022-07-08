////BOJ 9663
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int N;
//int visited[16];
//int result = 0;
//
//bool check(int row, int col) {
//	for (int x = 0; x < row; x++) {
//		if (visited[x] == col || (abs(visited[x] - col) == abs(x - row))) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs(int row) {
//	if (row == N) {
//		result++;
//		return;
//	}
//
//	for (int col = 0; col < N; col++) {
//		if (check(row, col)) {
//			visited[row] = col;
//			dfs(row + 1);
//			visited[row] = -1;
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	
//	for (int i = 0; i < N; i++) {
//		visited[i] = -1;
//	}
//
//	dfs(0);
//	printf("%d", result);
//
//}