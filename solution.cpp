# A---creep-codeforces-sulotion
Codeforces Round 800 | | Div.2 | | C++

// Crescent 
void solve() {
	int t;
	cin >> t;
 
	while(t--) {
		int z, o;
		cin >> z >> o;
 
		string ans;
		int x = min(o, z);
		for(int i = 1; i <= x; i++) {
			ans += "01";
		}
 
		if(z > o) {
			for(int i = 1; i <= (z - o); i++) {
				ans += '0';
			}
		}
 
		else {
			for(int i = 1; i <= (o - z); i++) {
				ans += '1';
			}
		}
 
		cout << ans << endl;
	}
}
