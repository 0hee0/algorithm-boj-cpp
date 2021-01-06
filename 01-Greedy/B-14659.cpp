// 한조서열정리하고옴ㅋㅋ
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int N;
int ans = 0;
vector<int> peaks;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int peak;
	for (int i = 0; i < N; i++) {
		cin >> peak;
		peaks.push_back(peak);
	}

	int maxPeak = peaks[0];
	int count = 0;
	for (int i = 1; i < N; i++) {
		if (maxPeak > peaks[i]) {
			count = count + 1;
		}
		else {
			maxPeak = peaks[i];
			ans = max(ans, count);
			count = 0;
		}
	}

	ans = max(ans, count);
	cout << ans;
}