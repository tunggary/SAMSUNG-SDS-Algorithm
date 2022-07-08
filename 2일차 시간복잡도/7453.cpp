////BOJ 7453
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//long long a[4001];
//long long b[4001];
//long long c[4001];
//long long d[4001];
//long long ab[16000001];
//long long cd[16000001];
//long long N;
//
//
//int main() {
//	scanf("%lld", &N);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%lld %lld %lld %lld", &a[i], &b[i], &c[i], &d[i]);
//	}
//
//	int idx = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			ab[idx] = a[i] + b[j];
//			cd[idx] = c[i] + d[j];
//			idx++;
//		}
//	}
//
//	sort(ab, ab + idx);
//	sort(cd, cd + idx);
//
//	long long ab_idx = 0;
//	long long cd_idx = idx - 1;
//	long long result = 0;
//
//	while (ab_idx < idx && cd_idx >= 0) {
//		if (ab[ab_idx] + cd[cd_idx] == 0) {
//			long long orig_idx = ab_idx;
//			long long ab_count = 0;
//			long long cd_count = 0;
//			
//			while (ab[ab_idx] + cd[cd_idx] == 0) {
//				if (ab_idx >= idx) break;
//				ab_idx++;
//				ab_count++;
//			}
//
//			while (ab[orig_idx] + cd[cd_idx] == 0) {
//				if (cd_idx < 0) break;
//				cd_idx--;
//				cd_count++;
//			}
//
//			result += ab_count * cd_count;
//		}
//		else if (ab[ab_idx] + cd[cd_idx] < 0) {
//			ab_idx++;
//		}
//		else {
//			cd_idx--;
//		}
//	}
//	printf("%lld\n", result);
//}