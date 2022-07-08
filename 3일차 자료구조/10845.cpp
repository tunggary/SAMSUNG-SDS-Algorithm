////BOJ 10845
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int heap[10001];
//int first = 0;
//int end = 0;
//int N;
//char command[10];
//
//int main() {
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%s", command);
//		if (strcmp(command, "push") == 0) {
//			int input;
//			scanf("%d", &input);
//			heap[end++] = input;
//		}
//		else if (strcmp(command, "pop") == 0) {
//			if (end == first) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", heap[first++]);
//			}
//		}
//		else if (strcmp(command, "size") == 0) {
//			printf("%d\n", end - first);
//		}
//		else if (strcmp(command, "empty") == 0) {
//			if (end == first) {
//				printf("1\n");
//			}
//			else {
//				printf("0\n");
//			}
//		}
//		else if (strcmp(command, "front") == 0) {
//			if (end == first) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", heap[first]);
//			}
//		}
//		else if (strcmp(command, "back") == 0) {
//			if (end == first) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", heap[end-1]);
//			}
//		}
//	}
//}