// 수 정렬하기 4
/*
# SOLUTION

STL sort의 시간복잡도: O(NlogN) = 10^6 * 약 20

*/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000000


int N;
int arr[MAX + 1];

bool compare(const int &a, const int &b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+N, compare);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
}