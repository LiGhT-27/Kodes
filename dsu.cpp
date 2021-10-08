#include<bits/stdc++.h>
using namespace std;

void initialize(ll n)
{
    for(ll i=0;i<=n;i++)
    {
        arr[i]=i ;
        siz[i]=1;
    }
}

ll root (ll i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]]; 
        i=arr[i]; 
    }
    return i;
}

void weighted_union(ll a, ll b)
{
    ll root_a=root(a);
    ll root_b=root(b);
    if(siz[root_a]<siz[root_b])
    {
        arr[root_a]=arr[root_b];
        siz[root_b]+=siz[root_a];
    }
    else
    {
        arr[root_b]=arr[root_a];
        siz[root_a]+=siz[root_b];
    }

}
