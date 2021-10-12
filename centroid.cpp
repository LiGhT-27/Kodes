#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//                             Centroids of a tree
//                    ( number of centroids can be 1 or 2)

vector<ll> adj[100005],centroid;
ll visit[100005],sub[100005];

void dfs(ll node, ll par){
    visit[node]=sub[node]=1;
    ll flag=1;
    for(auto i : adj[node]){
        if(i!=par){
            dfs(i,node);
            sub[node]+=sub[i];
            if(sub[i]>n/2)  flag=0;
        }
    }
    if(n-sub[node]>n/2) flag=0;
    if(flag)    centroid.pb(node);
}
