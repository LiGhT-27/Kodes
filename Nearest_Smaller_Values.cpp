//--------------------VOLT^*^(6869)------------------//
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long int lli;
typedef vector<int> vi;
typedef vector<lli> vll;
typedef pair<int, int> pii;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ff first    
#define rep(a, b, c) for (int a = b; a < c; ++a)
#define repn(a, b, c) for (int a = b; a <= c; ++a)
#define repr(a, b, c) for (int a = b; a >= c; --a)
#define repeach(itr, data_st) for (auto itr : data_st)
#define MAX(a, b, c) max(a, max(b, c))
#define MIN(a, b, c) min(a, min(b, c))

#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)


#define sq(x) ((ll)(x) * (x))
#define gcd(a, b) __gcd(a, b)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ins insert
#define vecsize(v) v.size()
#define arrsize(arr) (sizeof(arr) / sizeof(arr[0]))
#define init(arr, val) memset(arr, val, sizeof(arr))
#define vecsort(v) sort(v.begin(), v.end())
#define arrsort(arr, len) sort(arr, arr + len)
#define w(t) while (t--)
#define nl "\n"
#define mod 1000000007

inline string getString(void)
{
    char x[1000005];
    scanf("%s", x);
    return (string)x;
}

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

void dug(auto a){
    cout<<a<<" ";
}

void dnl(){
    cout<<nl;
}

void solve(){
    lli n,k;
    cin>>n;
    lli a[n];
    vector<pair<lli,lli>> v;
    stack<pair<lli,lli>> s;

    rep(i,0,n){
        cin>>a[i];

        while(!s.empty() && (s.top()).fi >= a[i]){
            s.pop();
        }
        if(s.empty()){
            dug("0");
            s.push({a[i],i+1});
        }else{
            dug((s.top()).se);
            s.push({a[i],i+1});
        }
    }
}


int main()
{
    fastIO();
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    // #endif
    
    int test = 1;
    // cin>>test;
    w(test) {
        solve();
    }
}
