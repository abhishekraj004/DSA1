/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    string name;
    cin>>n;
    cout<<endl;
    getline (cin,name);
    // string length(name.siz() ,'a')
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string name ;
    name = "hello world";
    string length (name.size(),'*');
    return 0;
}*/


// 2d array
// transpose of matrix  , sum of boundary element  , roatate the array by 90 degree clockwise and anticlockwise , wave traversal
/*#include<iostream>
using namespace std;
int main(){
    int n;
    int sum1=0 ,sum2=0;
    cout<<"take input n from the user"<<endl;
    cin >>n;
    int arr[n][n];
    cout<<"take input of the array element"<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0) ||  (i==n-1) ){
                sum1= sum1 +arr[i][j];
            }
            else if((j==0) || (j==(n-1))){
                sum2=sum2 + arr[i][j];
            }
        }
    }
    cout<<sum1 +sum2;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int m,n;
    
    cout<<"take input n ,mfrom the user"<<endl;
    cin >>m>>n;
    int arr[m][n];
    cout<<"take input of the array element"<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}*/
