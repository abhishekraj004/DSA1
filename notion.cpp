// #include <iostream>
// using namespace std;
// int main() {
// 	int t;
//     cout<<"take t"<<endl;
// 	cin>>t;
// 	while(t--){
// 		long long n,m;
//         cout<<"take m,n"<<endl;
// 		cin>>n>>m;
// 		long long a[n];
// 		long long b[m+n];
//         cout<<"take  array"<<endl;
// 		for(long long i=0;i<m+n;i++){
// 			cin>>b[i];
// 		}
// 		for(long long i=0;i<n;i++){
// 			a[i]=b[i];
// 		}
// 		long long flag =0;
// 		for(long long i=n;i<m+n;i++){
// 			for(long long j=0;j<n;j++){
// 				if(b[i]==a[j]){
// 					flag=1;
// 				}
// 			}
// 			if(flag==1)
// 			cout<<"YES"<<endl;
// 			else
// 			cout<<"NO"<<endl;
// 		}
// 	}
// }

#include<iostream>
using namespace std;
int isprime(int s){
		for(int i=2;i<=s;i++){
			if(s%i==0)
			return 0;
		}
		 return 1;
}


int main(){
	int s;
	cin>>s;
	cout<<2%2<<endl;
	cout<<isprime(s)<<endl;
	return 0;
}