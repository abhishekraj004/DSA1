/*#include <iostream>
using namespace std;

void maxi(int a,int b, int c){
    int ans=max(max(a,b),c);
    cout<<ans<<endl;

}
int main(int argc, char const *argv[])
{   int p,q,r;
     cin>>p>>q>>r;
    maxi(p,q,r);
    return 0;
}*/

#include<iostream>
using namespace std;

void primeno(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            break;
            
        }
        i++; 
        
        
    }

    cout<<"prime";
}
int main(int argc, char const *argv[])
{     int p;
       cout<<"tale input";
       cin>>p;
    primeno(p);
    return 0;
}

