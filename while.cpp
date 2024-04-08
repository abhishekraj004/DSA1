/*
//sum upto n integer 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ,i=1,sum=0;
    cout<<"take a input from the user"<<"\n";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;

    return 0;
}
*/

/*
//prime number 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i =2 , n;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";

        }
        i++;
    }
    return 0;
}
*/

/*
// another way of primeno.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=2 , b, n ;
    cout<<"take a input from the user ";
    std::cin>>n;
    while(i<n){
        b=n%i;
        i++;
    }
    
    if(b==0){
        cout<<"not prime";
    }
    else
    cout<<"prime";


    return 0;
}*/




