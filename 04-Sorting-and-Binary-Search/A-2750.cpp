// �� �����ϱ�
/*
���� ���� ���� �����غ���!
- ���� ����
- ���� ����
- ���� ����
- �� ����
- �պ� ����

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