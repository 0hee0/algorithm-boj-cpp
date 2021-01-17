// N�� M (2)
/*
# SOLUTION

N�� M (1)�� �ٸ� ��
**��������**

function solution(level, num)
	Ż������
	for (i=num~N)
		answer
		solution(level+1, i+1)
*/

#include <iostream>
using namespace std;
#define MAX 9

int N, M;
int ans[MAX];

void sol(int level, int num) {
	if (level == M) {
		for (int i = 0; i < M; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = num; i <= N; i++) {
		ans[level] = i;
		sol(level + 1, i + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	sol(0, 1);
}