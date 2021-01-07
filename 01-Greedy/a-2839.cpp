// º≥≈¡ πË¥ﬁ
#include <iostream>

using namespace std;

// 3a + 5b = N
int N;
int a = 0;
int b;
int ans = -1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	
	b = N / 5;

	if (N % 5 == 0) {
		ans = b;
	}
	else {
		int num;
		while (3 * a + 5 * b != N) {
			num = N - 5 * b;
			if (num % 3 == 0) {
				a = num / 3;
				ans = a + b;
				break;
			}
			else {
				if (b == 0) {
					if (num % 3 != 0) {
						break;
					}
				}
				else {
					b = b - 1;
				}
			}
		}
	}

	cout << ans;
}