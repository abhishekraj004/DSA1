#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b,c;
	    cin>>a>>b>>c;
	    cout<<max(a,max(b,c))<<endl;
	}
	return 0;
}
