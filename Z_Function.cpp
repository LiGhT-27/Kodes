#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vll;

vll makeZ(string s){
        ll n=s.size(),l=0,r=0,ind;
        vll z(n);
        z[0]=0;
        for(int i=1;i<n;i++){
            if(i>r){
                l=r=i;
                while(r<n and s[r]==s[r-l]) r++;
                r--;
                z[i]=r-l+1;
            }
            else{
                ind=i-l;
                if(i+z[ind]-1<r)    z[i]=z[ind];
                else{
                    l=i;
                    while(r<n and s[r]==s[r-l]) r++;
                    r--;
                    z[i]=r-l+1;
                }
            }
        }
        return z;
    }
    
    int main(){
        string s="abc$xabcabzabc";
        vll temp=makeZ(s);
        for(auto i:temp)    cout<<i<<" ";
    }
