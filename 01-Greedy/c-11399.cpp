// ATM
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int N;
int ans = 0;
vector<int> times;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int time;
	for (int i = 0; i < N; i++) {
		cin >> time;
		times.push_back(time);
	}

	sort(times.begin(), times.end());

	for (int i = 0; i < N; i++) {
		ans += times[i] * (N-i);
	}

	cout << ans;
}