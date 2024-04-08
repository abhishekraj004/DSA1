/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    if( a-- > 0 || ++b > 2 ){
        cout<<"ram"<<endl;
    }
    else {
        cout<<"sita"<<endl;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}*/


 /* 
 #include<iostream>
using namespace std;

int main(){

int arr[10] = {1,2,3,4,1,2,3,5,6,7};
int n = 10;

int visited[n];
for(int i=0;i<n;i++){
    if(visited[i]!=1){
    int count = 1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            visited[j] = 1;
        }
    }
    if(count==1){
    cout<<arr[i]<<" ";
    }
      }

}

    return 0;
}*/

