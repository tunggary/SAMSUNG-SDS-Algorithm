////BOJ 2252
//#define _CRT_SECURE_NO_WARNINIGS
//#include <stdio.h>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int N, M;
//int indegree[32001];
//vector<int> graph[32001];
//
//int main() {
//	scanf("%d %d", &N, &M);
//
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		graph[a].push_back(b);
//		indegree[b]++;
//	}
//
//	queue<int> q;
//	for (int i = 1; i <= N; i++) {
//		if (!indegree[i]) q.push(i);
//	}
//
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//		printf("%d ", now);
//
//		for (int i = 0; i < graph[now].size(); i++) {
//			indegree[graph[now][i]]--;
//			if (!indegree[graph[now][i]]) q.push(graph[now][i]);
//		}
//	}
//}