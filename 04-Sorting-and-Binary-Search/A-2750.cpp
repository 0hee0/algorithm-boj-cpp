// 수 정렬하기
/*
여러 가지 정렬 구현해보자!
- 선택 정렬
- 삽입 정렬
- 버블 정렬
- 퀵 정렬
- 합병 정렬

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int num;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i] << endl;
	}
}