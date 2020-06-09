#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
int a[mxN], b[mxN], n;

void decode() {
	cin >> n;
	while(n != 0) {
		for(int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		for(int i = 1; i <= n; ++i) {
			b[a[i]] = i;
		}
		int cnt = 0;
		for(int i = 1; i <= n; ++i) {
			if(a[i] == b[i]) {
				cnt++;
			}
		}
		if(cnt == n) {
			cout << "ambiguous";
		}
		else {
			cout << "not ambiguous";
		}
		cout << "\n";
		cin >> n;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
