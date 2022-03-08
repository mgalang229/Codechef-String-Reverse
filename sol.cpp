#include <bits/stdc++.h>
using namespace std;

void test_case() {
	string s;
	cin >> s;
	string r = s;
	reverse(r.begin(), r.end()); // reverse the string
	long long i = 0, j = 0, ans = 0;
	while(i < (int) s.size()) {
		if(s[i] == r[j]) { // these are the characters that we don't need to move
			j++;
		} else { // these are the characters that are needed to be moved
			ans++;
		}
		i++;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		test_case();
	}
}

