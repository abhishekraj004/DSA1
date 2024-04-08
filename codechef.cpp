#include <iostream>
using namespace std;

int main() {
	int n ,i=1;
	cin>>n;
	while(i<=n){
	    int x, y,r, a, b,c ,d;
	    cin>>x>>y>>r;
	    a= r/30 ;
	    b= x+a ;
	    c= b%y ;
	    
	    if(c==0){
	        cout<<c/y<<endl;
	    }
	    else if(c!=0){
	        d=(c/y) +1;
	        cout<<d<<endl;
	    }
	    
	    i++;
	}
	return 0;
}
