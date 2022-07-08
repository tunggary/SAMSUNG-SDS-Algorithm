////BOJ 10828
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int stack[10001];
//int end = -1;
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
//			stack[++end] = input;
//		}
//		else if (strcmp(command, "pop") == 0) {
//			if (end == -1) {
//				printf("-1\n");
//			}
//			else {
//				printf("%d\n", stack[end]);
//				end--;
//			}
//		}
//		else if (strcmp(command, "size") == 0) {
//			printf("%d\n", end + 1);
//		}
//		else if (strcmp(command, "empty") == 0) {
//			if (end > -1) {
//				printf("0\n");
//			}
//			else {
//				printf("1\n");
//			}
//		}
//		else if (strcmp(command, "top") == 0) {
//			if (end > -1) {
//				printf("%d\n", stack[end]);
//			}
//			else {
//				printf("-1\n");
//			}
//		}
//	}
//}