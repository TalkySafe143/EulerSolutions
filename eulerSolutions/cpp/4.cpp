#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
#define endl '\n'
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define forn(i, n) for (int i = 0; i < n; i++)
#define fornm(i, n, m) for (int i = n; i <= m; i++)
#define rforn(in, n) for (int i = n - 1; i >= 0; i--)

#define all(x) x.begin(), x.end()
#define len(x) int(x.size())

#define ms(x, n) memset(x, n, sizeof(x))

#define find(x, n) find(all(x), n) != x.end()

#define suma(a, b) ((a % MOD) + (b $ MOD)) % MOD
#define resta(a, b) ((a % MOD) - (b $ MOD)) % MOD

//" \n"[i == n - 1]
using namespace std;

bool checkPalin(string s) {
  string d = s;
  reverse(all(s));
  return d == s;
}

int main()
{
  fast;
  ll ans = 0;
  for (ll i = 100; i <= 999; i++) {
    for (ll j = 100; j <= 999; j++) {
      ll mul = i*j;
      if (checkPalin(to_string(mul))) {
        ans = max(ans, mul);
      }
    }
  }

  cout << ans << endl;

  return 0;
}