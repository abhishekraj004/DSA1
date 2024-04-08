//fibonaaci number

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0, b=1;
    int n , i =1;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    while(i<=n-2){
        
         int nxtno = a+b;
         cout<<nxtno<<" ";
         a=b;
         b=nxtno;
         i++;
         
         
         

    }
        return 0;
}


/*
// prime number
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i=2,a;
    cin>>n;
    while(i<n){
         a=n%i ;
         if(a==0){
         cout<<"not prime";
         break;}

         else 
         cout<<"prime";
         break;
        i++;
    }
    //if(a==0)
   // cout<<"not prime";
   // else
   // cout<<"prime";
    return 0;
}*/


/*
//decimal to binary 
#include<iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"take a input from the user "<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while( n != 0){
        int bit = n & 1;
        ans=(bit * pow(10 , i) ) + ans ;
        n = n >> 1;
        i++;
    }
    cout<<ans;
    return 0;
}*/

/*
//binary to decimal 
#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{        int n;
     cin>>n;
    int i =1, ans =0;
    while(n!=0){
        int digit = n %10;
        if(digit==1){
            ans = ans + pow(2, i );

        }
        n=n/10;
        i++;
    }
    cout<<ans;
    return 0;
}*/


