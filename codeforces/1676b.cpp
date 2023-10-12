#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;


void sol() {
	int n; cin >> n;
	int min = -1;
	int t = 0;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (min == -1 || a < min) {
			min = a;
		}
		t += a;
	}
	cout << t - min * n << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while (t--) {
		sol();
	}
}
