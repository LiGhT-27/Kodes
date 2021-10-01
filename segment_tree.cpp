#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_ll.hpp>
//using boost::multiprecision::cpp_ll; // use cpp_ll as data type for large                                                                       numbers 
using namespace std;

#define ll long long
#define pb push_back
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); 
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define vi vector<ll>
#define vll vector<long long ll>
#define log2(x) (63ll - __builtin_clzll(x))
#define test ll t; cin>>t; while(t--)
#define modInv(n) po(n,mod-2)%mod
#define ncr(n,r) (((fact[n]*modInv(fact[r]))%mod)*modInv(fact[n-r]))%mod



void buildtree(int *tree,int *a,int index,int s,int e){
    ///Base Case
    if(s==e){
        tree[index] = a[s];
        return;
    }
    if(s>e){
        return;
    }

    ///Recursive Case
    int mid = (s+e)/2;
    buildtree(tree,a,2*index,s,mid);
    buildtree(tree,a,2*index+1,mid+1,e);
    tree[index] = min(tree[2*index],tree[2*index+1]);
    return;
}

int query(int *tree,int index,int s,int e,int qs,int qe){
    ///No Overlap
    if(qs>e || qe<s){
        return INT_MAX;
    }
    ///Complete Overlap
    if(qs<=s && qe>=e){
       return tree[index];
    }

    ///Partial Overlap
    int mid = (s+e)/2;
    int leftAns = query(tree,2*index,s,mid,qs,qe);
    int rightAns = query(tree,2*index+1,mid+1,e,qs,qe);

    return min(leftAns,rightAns);
}


int main()
{
   fast()
   //test
   {
      int n,q;
      cin>>n>>q;
      int a[n];
      
      for(int i=0; i<n; i++) cin>>a[i];
      
      int *tree=new int[4*n+4];
      
      buildtree(tree,a,1,0,n-1);
      
      while(q--)
      {
          int l,r;
          cin>>l>>r;
          cout<<query(tree,1,0,n-1,l-1,r-1)<<"\n";
      }
      
   }       
   return 0;
}
