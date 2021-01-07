// ���
#include <iostream>
#include <vector>

using namespace std;


int N, M;
int ans = 0;
vector<vector<char>> A;
vector<vector<char>> B;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	// ��� A, ��� B �Է�
	char element;
	for (int i = 0; i < N; i++) {
		vector<char> a;
		for (int j = 0; j < M; j++) {
			cin >> element;
			a.push_back(element);
		}
		A.push_back(a);
	}
	for (int i = 0; i < N; i++) {
		vector<char> b;
		for (int j = 0; j < M; j++) {
			cin >> element;
			b.push_back(element);
		}
		B.push_back(b);
	}

	// ��� ��ȯ
	for (int i = 0; i <= N-3; i++) {
		for (int j = 0; j <= M-3; j++) {
			if (A[i][j] != B[i][j]) {
				for (int a = 0; a < 3; a++) {
					for (int b = 0; b < 3; b++) {
						A[i + a][j + b] = (A[i + a][j + b] == '0') ? '1' : '0';
					}
				}
				ans++;
			}
		}
	}

	// A�� B�� �ٲپ��� �� Ȯ��
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (A[i][j] != B[i][j]) {
				ans = -1;
				break;
			}
		}
	}

	cout << ans;
}