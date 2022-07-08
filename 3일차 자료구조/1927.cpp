//////BOJ 1927
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N;
//int pq[100001];
//int end = 1;
//
//void swap(int *left, int *right) {
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		int input;
//		scanf("%d", &input);
//
//		if (input == 0) {
//			if (end == 1) {
//				printf("0\n");
//			}
//			else {
//				//pop
//				printf("%d\n", pq[1]);
//				pq[1] = pq[--end];
//				int cur = 1;
//				int left_child = cur * 2, right_child = cur * 2 + 1;
//				while (cur * 2 + 1 < end) {
//					left_child = cur * 2; 
//					right_child = cur * 2 + 1;
//					if (pq[cur] <= pq[left_child] && pq[cur] <= pq[right_child]) break;
//					else if (pq[left_child] < pq[right_child]) {
//						swap(&pq[left_child], &pq[cur]);
//						cur = left_child;
//					}
//					else {
//						swap(&pq[right_child], &pq[cur]);
//						cur = right_child;
//					}
//				}
//				left_child = cur * 2;
//				if (left_child < end && pq[left_child] < pq[cur]) {
//					swap(&pq[left_child], &pq[cur]);
//				}
//			}
//		}
//		else {
//			pq[end++] = input;
//			
//			int cur = end - 1;
//			int par = cur >> 1;
//			while (cur > 1 && pq[par] > pq[cur]) {
//				swap(&pq[cur], &pq[par]);
//				cur = par;
//				par = (cur >> 1);
//			}
//		}
//	}
//}