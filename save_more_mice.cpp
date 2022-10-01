#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define PI 3.1415926535897932384626
#define si(x) scanf("%lld", &x)
#define sii(x, y) scanf("%lld%lld", &x, &y)
#define siii(x, y, z) scanf("%lld%lld%lld", &x, &y, &z)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) \
    fo(i, n) { cout << a[i] << " "; }
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
#define w(t)                \
    t == 1 ? t = 1 : si(t); \
    while (t--)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
const int mod = 1e9 + 7;
const int N = 3e5;
const int INF = 1e9;

void solution()
{
    int n , k , mx = INT_MIN , mn = INT_MAX;
    cin>>n>>k;
    int a[k];
    fo(i,k)cin>>a[i];
    sort(a,a+k);
    int cat = 0;
    int cnt = 0;
    for(int i=k-1;i>=0;i--){
        if(cat>=a[i])break;
        cnt++;
        cat+= (n-a[i]);
    }
    cout<<cnt<<endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 0;
    //t=1;
    w(t)
    {
        //cout << "Case #" << t  << ": ";
        solution();
    }
   // solution();
    return 0;
}