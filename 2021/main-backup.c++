#include <bits/stdc++.h>

using namespace std;

// B buget
// n houses
int n, b;
int a[1000000];

void solve() {

  cin >> n >> b;

  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a, a + n);

  int ans = 0;
  for(int i = 0; i < n; ++i) {
    if(b >= a[i]) {
      ++ans;
      b -= a[i];
    }
  }

  cout << ans << "\n";

}

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, i = 1;
  cin >> t;

  while(t--) {
    cout << "Case #" << i << ": ";
    solve();
    ++i;
  }

}
