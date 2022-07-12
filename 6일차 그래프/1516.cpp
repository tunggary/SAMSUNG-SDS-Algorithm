//BOJ 1516
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <deque>
#include <vector>
#define MAX 501
using namespace std;


int N;
int input;
vector<int> graph[MAX];
int cost[MAX];
int indegree[MAX];
int answer[MAX];

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &input);
		cost[i] = input;
		while (true) {
			scanf("%d", &input);
			if (input == -1) break;
			graph[input].push_back(i);
			indegree[i]++;
		}
	}

	deque<int> q;

	for (int i = 1; i <= N; i++) {
		if (!indegree[i]) { 
			answer[i] = cost[i];
			q.push_back(i);
		}
	}

	while (!q.empty()) {
		int cur = q.front();
		q.pop_front();

		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (answer[next] < answer[cur] + cost[next]) {
				answer[next] = answer[cur] + cost[next];
			}
			indegree[next]--;
			if (!indegree[next]) q.push_back(next);
		}
	}

	for (int i = 1; i <= N; i++) {
		printf("%d\n", answer[i]);
	}
}