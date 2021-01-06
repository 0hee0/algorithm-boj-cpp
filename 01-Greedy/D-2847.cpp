// 게임을 만든 동준이
#include <iostream>
#include <vector>

using namespace std;


int N;
int ans = 0;
vector<int> scores;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int score;
	for (int i = 0; i < N; i++) {
		cin >> score;
		scores.push_back(score);
	}

	for (int i = N - 1; i > 0; i--) {
		while (scores[i] <= scores[i - 1]) {
			scores[i - 1] = scores[i - 1] - 1;
			ans = ans + 1;
		}
	}

	cout << ans;
}