#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;

void sol() {
	string s; cin >> s;
	string res = "";
	if (s.size() > 10) { 
		res += s.at(0) + to_string((s.size()-2)) + res += s.at(s.size()-1);
		cout << res << endl;
	} else {
		cout << s << endl;
	}
}


int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		sol();
	}
}

