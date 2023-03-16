#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("Ofast")

using namespace std;
using namespace __gnu_pbds;
using namespace std::chrono;

const double pi = 3.1415926535;
 
//#ifndef ONLINE_JUDGE
//#define dbg(x) cerr << #x<<" "; _print(x); cerr << endl;
//#else
//#define dbg(x);
//#endif
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define vll vector<long long>
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define ms(st)          multiset<ll> st
#define st(s)           set<ll> s
#define inmap(mp)       map<ll,ll> mp
#define chmap(mp)       map<char,ll> mp
#define mod            1000000007
#define max(a)   *max_element(a.begin(), a.end());

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

/*________________________________________________*/
 
vll sieve(ll n){vector<bool> prime(n+1, true); for (ll p = 2; p * p <= n; p++) if (prime[p] == true) for (ll i = p * p; i <= n; i += p) prime[i] = false; vll v;
for (ll p = 2; p <= n; p++){if (prime[p]) v.push_back(p);} return v;}
ll gcd(ll a, ll b){ if(b == 0){ return a;} return gcd(b, a%b);}
ll nCr(int n, int r){ll p = 1, k = 1;if (n - r < r) {r = n - r;} if (r != 0) {while (r) {p *= n;k *= r; ll m = gcd(p, k);p /= m;k /= m;n--;r--;}}else {p = 1;} return p;}
void google(int t){cout << "Case #" << t << ":" << " ";}
void precision(int x){cout << fixed << setprecision(x);}
ll fastexpo(ll x, ll y){ll res = 1; while (y) {if (y % 2 == 1)res = (res * x);y = y >> 1ll;x = (x * x);}return res;}
ll fastexpomod(ll x, ll y, ll p) { ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0) { if (y & 1ll) res = (res*x) % p; y = y>>1ll;x = (x*x) % p; } return res; } 
// ll nfactors(ll n){for(ll i = 2; i <= n; i++){for(ll j = i; j <= n; j += i)fact[j]++;}}
ll modpar(ll a){return ((a%mod) + mod) % mod; }
ll modadd(ll a,ll b){ return modpar(modpar(a)+modpar(b)); }
ll modmul(ll a,ll b){ return modpar(modpar(a)*modpar(b)); }


void solve() {
    int n;
    cin>>n;
    if(n==1){cout<<'1'; return;}
    if(n<=3) {cout<<"NO SOLUTION"; return;}
    for(int i=2; i<n+1; i=i+2) cout<<i<<" ";
    for(int j=1; j<n+1; j=j+2) cout<<j<<" ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
        cout<<endl;
    }
}
