// 캠핑
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
		
		int cycleNum = V / P; // V일 휴가 중 연속하는 P일의 반복 횟수
		int remainder = V % P; // V일 휴가 중 <연속하는 P일>을 빼고 남은 날
		int addNum = (remainder > L) ? L : remainder;
		ans = cycleNum * L + addNum;

		cout << "Case " << num << ": " << ans << '\n';

		num++;
	}
}