#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n, m, i , j;
    cout<<"tale input from the user "<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
