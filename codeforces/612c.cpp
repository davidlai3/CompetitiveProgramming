#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define ll long long
#define pb push_back
using namespace std;

void sol() {
	string s; cin >> s;
	stack<char> st = {};
	unordered_map<char, char> umap;
	umap['('] = ')'; umap['['] = ']';
	umap['{'] = '}'; umap['<'] = '>';
	ll int k = 0;
	for (char c : s) {
		if (umap.find(c) == umap.end()) { 
			if (st.size() != 0 && umap.find(st.top()) != umap.end()) {
				if (umap[st.top()] == c) { 
					st.pop(); 
				} else { 
					st.pop();	
					k++;
				}
			} else { 
				cout << "Impossible" << endl;
				return;
			}
		} else { 
			st.push(c);
		}
	}
	cout << k << endl;
}

int main() {
	int t = 1;
	//  cin >> t;
	while (t--) {
		sol();
	}
}

