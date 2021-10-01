#include <bits/stdc++.h>
#define ll long long int
#define sp(x,y) fixed<<setprecision(x)<<y

using namespace std;

int main() {
	ll tt;
	cin>>tt;
	while(tt--)
	{
	    int h,t;
	    int degree;
	   //  cin>>h>>t>>degree;
	     scanf("%d %d %d",&h,&t,&degree);
	    double x = (degree*3.1415926535897932384626)/180;
	    double v2 = 20*h;
	    double v = sqrt(v2);
	    double s = (v*sin(x)*t) + (10*cos(x)*t*t)/2;
	    
	    double T = (v*cos(x))/(10*sin(x));
	    
	    int re = t / T;
	    double rem = t - T*re;
	    
	   
	    double ss = (v*cos(x)*rem) - (10*sin(x)*rem*rem)/2;
	    
	    double c = s*s + ss*ss;
	    c = sqrt(c);
	   printf("%.12lf\n",c);
	    // cout<<sp(12,c)<<endl;

	}
	return 0;
}
