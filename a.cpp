#include<iostream>

using namespace std;

int main(){
    
    
    
    int n,p;
    
    
    cout<<"Enter the value of n : ";
    cin>>n;
    
    cout<<"Enter the value of p : ";
    cin>>p;

    for(int i=1;i<=n;i++){
        int pass[50];
        pass[0] = (i*5000);
        
        if(pass[0] == p){
                 
                 cout<<"\nOutput : "<<(1);
                 
                 return 0;
                 
             }
        for(int j=1;j<49;j++){
             pass[j] = pass[j-1] + (5000) + j;
             
             
             if(pass[j] == p){
                 
                 cout<<"\nOutput : "<<(j+1);
                 
                 return 0;
                 
             }
            
        }
        
    }
    
    return 0;
    
}
