////BOJ 1717
//#define _CRT_SECURE_NO_WARNINIGS
//#define MAX 1000001
//#include <stdio.h>
//
//int N, M;
//int a, b, c;
//int parent[MAX];
//
//int find_group(int x) {
//	if (parent[x] == x) return x;
//	else return parent[x] = find_group(parent[x]);
//}
//
//void union_group(int x, int y) {
//	int x_group = find_group(x);
//	int y_group = find_group(y);
//	
//	if (x_group > y_group) {
//		parent[x_group] = y_group;
//	}
//	else {
//		parent[y_group] = x_group;
//	}
//}
//
//int main() {
//
//
//	scanf("%d %d", &N, &M);
//
//	for (int i = 0; i <= N; i++) { parent[i] = i; }
//
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		if (a == 0) {
//			union_group(b, c);
//		}
//		else {
//			if (find_group(b) == find_group(c)) {
//				printf("YES\n");
//			}
//			else {
//				printf("NO\n");
//			}
//		}
//	}
//}