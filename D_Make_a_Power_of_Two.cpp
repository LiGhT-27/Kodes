//--------------------VOLT^*^(6869)------------------//
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
template <typename T>
    using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
    
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
#define all(x) x.begin(), x.end()



// map<lli,string> m;
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

void decToBinary(int n)
{
	for (int i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
			cout << "1";
		else
			cout << "0";
	}
}

void dnl(){
    cout<<nl;
}

int lcs(string X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;
  
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
  
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
  
            else
                L[i][j]=max(L[i - 1][j], L[i][j - 1]);
        }
    }
  
    return L[m][n];
}

                // L[i][j] = max(L[i - 1][j], L[i][j - 1]);
  




ll cal(string s1,string s2,ll n,ll m)
{
    if(n==0||m==0){
        return abs(n-m);
    }
    if(s1[0]==s2[0]){
        return cal(s1.substr(1,n-1),s2.substr(1,m-1),n-1,m-1);
    }
    else{
        return 1+cal(s1.substr(1,n-1),s2,n-1,m);
    }
}
ll countN(ll a,ll b)
{

    string s1="";
    string s2="";
    while(a>0){
        int temp = a%10;
        s1+=(char)temp+'0';
        a/=10;
    }
    while(b>0){
        int temp = b%10;
        s2+=(char)temp+'0';
        b/=10;
    }
    // deb2(a,b);
    int n = s1.length();
    int m = s2.length();
    reverse(all(s1));
    reverse(all(s2));
    
    int ans =  cal(s1,s2,n,m);
    return ans;
}

void solve(){
    ll i,j,k,m,n,x,y,z,mi,mx,count=0,ans=0,sum=0;
    cin>>n;
    vector<ll> v;
    ans = 1;
    while(ans<1e18*1LL)
    {
        v.pb(ans);
        ans*=2;
    }
    auto temp = lower_bound(v.begin(),v.end(),n)-v.begin();
    if(v[temp]==n){
        cout<<0<<endl;
        return;
    }
    x=n;
    ans=INT_MAX;
    for(int i=0;i<v.size();i++){
        
        ans = min(ans,countN(n,v[i]));
    }
    cout<<ans<<endl;

    
}



int main()
{
    fastIO();
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    // #endif
    
    int test = 1;
    cin>>test;
    
    // decToBinary(2);  dnl();
    // decToBinary(4);dnl();
    // decToBinary(8);dnl();
    // decToBinary(16);dnl();

    // rep(i,0,33){
    //     m[i]=to_string((lli)pow(2,i)) ;
    // }

    w(test) {
        solve();
    }
}