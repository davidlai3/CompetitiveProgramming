#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;


void sol() {
	int n; int k;
	cin >> n >> k;
	string s; cin >> s;
	int count = 0;
	int i = 0;
	while (i < n) {
		if (s[i] == 'B') {
			count++;
			i += k-1;
		}
		i++;
	}
	cout << count << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		sol();
	}
}
