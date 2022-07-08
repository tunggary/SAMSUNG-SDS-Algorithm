////BOJ 2960
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int n, k;
//bool arr[1001];
//int main() {
//	scanf("%d %d", &n, &k);
//	int result = 0;
//	for (int i = 2; i <= n; i++) {
//		int mul = 1;
//		for (int j = i; j <= n; j = mul * i) {
//			if (!arr[j])
//			{
//				arr[j] = true;
//				result++;
//				if (result == k) {
//					printf("%d\n", j);
//					return 0;
//				}
//			};
//			mul++;
//		}
//	}
//}