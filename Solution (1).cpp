#include <bits/stdc++.h>
using namespace std;

void solve(int testcase){
	int n; cin >> n;
	int m; cin >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int ans = 0;
	for(int i = 1; i < m; i++){
		ans += 2*a[n - i];
	}
	int r = n - m + 1;
	if(r&1){
		ans += 2*a[r/2];
	}else{
		ans += a[r/2] + a[r/2 - 1];
	}
	cout << "Case #" << testcase << ": " << (ans/2);
	if(ans&1)cout << ".5";
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		solve(i);
	}

	return 0;
}