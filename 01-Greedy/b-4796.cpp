// ķ��
#include <iostream>

using namespace std;


int L, P, V;
int ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num = 1;
	for(;;) {
		cin >> L >> P >> V; 

		if (L == 0 && P == 0 && V == 0) break;
		
		int cycleNum = V / P; // V�� �ް� �� �����ϴ� P���� �ݺ� Ƚ��
		int remainder = V % P; // V�� �ް� �� <�����ϴ� P��>�� ���� ���� ��
		int addNum = (remainder > L) ? L : remainder;
		ans = cycleNum * L + addNum;

		cout << "Case " << num << ": " << ans << '\n';

		num++;
	}
}