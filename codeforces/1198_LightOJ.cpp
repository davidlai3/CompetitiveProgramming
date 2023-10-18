#include <bits/stdc++.h>    
#include <iostream>    
#include <unordered_map>    
#include <vector>    
#include <algorithm>    
#define ll long long    
#define pb push_back    
using namespace std;    
    
int helper(vector<int> &t1, vector<int> &t2, int i, int j, vector<vector<int>> &dp) {    
  if (i == t1.size() || j == t2.size()) return 0;    
  if (dp[i][j]) return dp[i][j];    
  if (t1[i] > t2[j]) {    
    return dp[i][j] = 2 + helper(t1, t2, i + 1, j + 1, dp);    
  }    
  if (t1[i] < t2[j]) {    
    return dp[i][j] = helper(t1, t2, i, j + 1, dp);    
  }    
  else {    
    return dp[i][j] = max(1 + helper(t1, t2, i + 1, j + 1, dp), helper(t1, t2, i, j + 1, dp));    
  }    
}    
    
    
void sol(int cs) {    
  int n; cin >> n;    
  vector<int> t1(n), t2(n);     
  for (auto &i : t1) {    
    cin >> i;    
  }    
  for (auto &i : t2) {    
    cin >> i;    
  }    
    
  sort(t1.begin(), t1.end(), greater<int>());    
  sort(t2.begin(), t2.end(), greater<int>());    
  vector<vector<int>> dp(n, vector<int>(n, 0));    
    
  cout << "Case " << cs << ": " << helper(t1, t2, 0, 0, dp) << endl;    
    
}    
    
    
int main() {    
  int t = 1;    
  cin >> t;    
  for (int i = 1; i <= t; i++) {    
    sol(i);    
  }    
}    


