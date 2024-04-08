#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"take input for the number of the string"<<endl;
    cin>>n;
    string s[n];
    cout<<"take input for the string array"<<endl;
    for(int i=0;i<5;i++){
        cin>>s[i];
    }
    // for(int i=0;i<5;i++){
    //     cout<<s[i]<<" ";
    // }

    string p;
    int b=INT_MIN,c=0;
    int q=0;
    for(int i =0;i<5;i++){
        int a=s[i].size();
        if(a>b){
            p=s[i];
            b=a;
            q=i;
        }
    }
    cout<<p<<" "<<q<<endl;
}

//  #include<iostream>
//   using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     int borowedbook[n];
//     int returnedbook[n];
//     for(int i =0; i<n;i++){
//         cin>>borowedbook[i];
//     }

//     for(int i =0; i<n;i++){
//         cin>>returnedbook[i];
//     }
//     int flag =0;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n;i++){
//             if(borowedbook[i]==returnedbook[j]){
//                 flag=1;
//             }
//         }
//         if(flag==0){
//             cout<<borowedbook[i]<<" ";
//         }
//         flag=0;
//     }

// }