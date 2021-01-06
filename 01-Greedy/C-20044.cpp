// Project Teams
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n;
vector<int> abilities;
vector<int> teams;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	int students = 2 * n;

	int ability;
	for (int i = 0; i < students; i++) {
		cin >> ability;
		abilities.push_back(ability);
	}

	sort(abilities.begin(), abilities.end());

	int team;
	int minVal = 200000;
	for (int i = 0; i < n; i++) {
		team = abilities[i] + abilities[(students - 1) - i];
		minVal = min(minVal, team);
	}

	cout << minVal;
}