//BOJ 1837
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;
bool prime[1000001];

string P;
int K;

int main() {
	
	for (int i = 2; i <= sqrt(1000000); i++) {
		if (!prime[i]) {
			for (int j = i + i; j <= 1000000; j += i) {
				prime[j] = true;
			}
		}
	}

	cin >> P >> K;
	int ans;

	for (int i = 2; i <= K; i++) {
		int ret = 0;
		if (prime[i]) continue;
		for (int j = 0; j < P.size(); j++)
			ret = (ret * 10 + P[j] - '0') % i;
		if (!ret) { ans = i; break; }
	}
	if (ans < K) cout << "BAD" << ' ' << ans;
	else cout << "GOOD";
}