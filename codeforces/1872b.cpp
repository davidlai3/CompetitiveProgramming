#include <iostream>
#include <set>
#include <vector>
#include <tuple>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;

void sol() {
	vector<tuple<int>> rooms = {}
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; int b;
		cin >> a >> b;
		v.pb(make_tuple(a, b));
	}
	sort(v.begin(), v.end());
	int k = 0;
	for (tuple<int> r : v) {
		if (get<0>(r)%2 ) {

	// 1 2 x x x x x 
}


int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		sol();
	}
}

