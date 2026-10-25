#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

// 型エイリアス
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

// 定数
const ll INF = 1e18;
const int INF32 = 1e9;
const int MOD = 998244353;

// 汎用マクロ
#define rep(i, s, n) for (ll i = (ll)(s); i < (ll)(n); i++)
#define rrep(i, s, n) for (ll i = (ll)(n) - 1; i >= (ll)(s); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())

// 更新用ユーティリティ
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// デバッグ用
#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << endl;
#else
#define debug(x)
#endif
      
int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    
    return 0;
}
