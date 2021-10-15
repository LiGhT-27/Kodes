#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 100005

stack<ll> st;
vector<ll> adj[MAX],adj2[MAX];
ll visit[MAX];
void dfs(ll node){				
    visit[node]=1;
    for(auto i:adj[node]){
      if(!visit[i]){
        dfs(i);
      }
    }
    st.push(node);
}

void dfs2(ll node){
  visit[node]=1;
  cout<<node<<" ";
  for(auto i:adj2[node]){
    if(!visit[i]){
      dfs2(i);
    }
  }
}

// put all of the below in int main()

// {
//   memset(visit,0,sizeof(visit));
//   // m is number of edges
//   for(int i=0;i<m;i++){
//     ll a,b;
//     cin>>a>>b;
//     adj[a].pb(b);
//   }
//   for(int i=1i<=n;i++){
//     if(!visit[i])	dfs(i);
//   }
//   memset(visit,0,sizeof(visit));
//   for(int i=1;i<=n;i++){
//     for(auto j:adj[i]){
//       adj2[j].pb(i);
//     }
//   }
//   while(!st.empty()){
//     while(!st.empty() and visit[st.top()])	st.pop();
//     if(st.empty())	break;
//     cout<<"Strongly Connected Component :";
//     dfs2(st.top());
//     st.pop();
//     cout<<endl;
//   }
// }
