////BOJ 1103
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int N, M;
//int map[50][50];
//int visited[50][50];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//bool is_cycle = false;
//
//int dfs(int x, int y);
//int main() {
//	scanf("%d %d\n", &N, &M);
//
//	char c;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%c", &c);
//			if (c == 'H') {
//				map[i][j] = -1;
//			}
//			else {
//				map[i][j] = c - '0';
//			}
//			visited[i][j] = -1;
//		}
//		scanf("%c", &c); //\n
//	}
//	
//	is_cycle = false;
//	int result = dfs(0, 0);
//
//	if (!is_cycle) {
//		printf("%d", result);
//	}
//	else printf("-1");
//}
//
//int dfs(int x, int y) {
//	if (x < 0 || x >= N || y < 0 || y >= M || map[x][y] == -1 || is_cycle) {
//		return 0;
//	}
//
//	int cal = -1;
//	if (visited[x][y] == -1) {
//		visited[x][y] = 0;
//		for (int d = 0; d < 4; d++) {
//			int r = dfs(x + dx[d] * map[x][y], y + dy[d] * map[x][y]) + 1;
//			if (cal < r) cal = r;
//		}
//		visited[x][y] = cal;
//		return cal;
//	}
//	else if (visited[x][y] == 0) {
//		is_cycle = true;
//		return 0;
//	}
//	else {
//		return visited[x][y];
//	}
//}