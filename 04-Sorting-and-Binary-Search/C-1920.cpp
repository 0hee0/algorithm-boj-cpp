// 수 찾기
/*
# SOLUTION

최대 연산 횟수 = N * M <= 10^5 * 10^5 는 2 * 10^8 (2초) 보다 크므로 완전탐색 불가
-> 이진 탐색 O(M*logN)

이진 탐색을 위해 탐색 대상이 되는 배열 정렬

*/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000000


int N, M;
int x;
int high, low, mid;
int A[MAX + 1];

bool search(int x) {
	high = N-1;
	low = 0;
	while (high >= low) {
		mid = (high + low) / 2;
		if (x == A[mid]) {
			return 1;
		}
		else if (x > A[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A, A + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;

		if (search(x) == 1) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
}