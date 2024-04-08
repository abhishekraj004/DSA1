
/*
Pattern
1
23
345
4567
*/
/*#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<i){
             cout<<j;
            j = j + 1;
            count = count + 1;
        }
         cout<<"\n";
        i = i + 1;
    }
}*/


#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int i =1;
    int n;
    cout<<"take input frim the user";
    cin>>n;
    while(i<=n){
        int j =1 ;
        int count =i;
        while(j<=i){
            cout<<count;
            count++;
            j++;

        }
        cout<<endl;
        i++;




    }

    return 0;
}
