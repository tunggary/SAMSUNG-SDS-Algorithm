////BOJ 1655
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//priority_queue<int, vector<int>, less<int>> pq1; // max_heap
//priority_queue<int, vector<int>, greater<int>> pq2; // min_heap
//int N;
//int input;
//int mid;
//int pq1_size;
//int pq2_size;
//
//int main() {
//	scanf("%d", &N);
//
//	scanf("%d", &input);
//
//	mid = input;
//	printf("%d\n", mid);
//
//	for (int i = 1; i < N; i++) {
//		scanf("%d", &input);
//		if (mid <= input) {
//			pq2.push(input);
//			pq2_size++;
//		}
//		else {
//			pq1.push(input);
//			pq1_size++;
//		}
//
//		if (pq2_size - pq1_size >= 2) {
//			pq1.push(mid);
//			pq1_size++;
//			mid = pq2.top();
//			pq2.pop();
//			pq2_size--;
//		}
//		else if (pq1_size - pq2_size >= 1) {
//			pq2.push(mid);
//			pq2_size++;
//			mid = pq1.top();
//			pq1.pop();
//			pq1_size--;
//		}
//
//		printf("%d\n", mid);
//	}
//}
