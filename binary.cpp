#include<iostream>
using namespace std;
int binarysearch(int arr[] ,int n , int target){
    int s=0;
    int e=n-1;
    int m= s+(e-s)/2;
    while(s<=e){
        if(arr[m] == target){
            return m;

        }
        else if(target>arr[m]){
            s = m+1;
        }
        else if(target<arr[m]){
            e=m-1;
        }
        m= s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n =9; 

    int arr[n] = {1,2,3,4,5,6,7,8,9};
    int target = 67;
    int answer = binarysearch(arr, n,target);
    cout<<answer;
  return 0;
}

