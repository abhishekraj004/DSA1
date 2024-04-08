#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n;
    cout<<"take input from the user"<<endl;
    cin>>n;
    int i=2;
    int a;
    while(i<n){
        
        a= n%i;
        if(a==0)
        break;
        
        i++;
    }

    if(a==0)
    cout<<"not prime";
    else
    cout<<"prime";
    return 0;
}
