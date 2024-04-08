
// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int acctualarray(vector<int> a , int n){
//     for(int i =0; i<n; i++){
//         for(int j =i+1; j<n;j++){
//             if(a[i] == a[j]){
//                // int p = a[i];
//                // int q= a[j];
//                 a.pop_back();
//                 //a.pop_back();
//             }
//         }
//     }
//     return a.size();

// }
// int main(){
//     vector<int> a={ 3 ,6,3,6,6,6,2};
//     int n = 7;
//     int p = acctualarray(a, n);
//     cout<<p;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;


// void Rotate(int arr[], int d, int n)
// {
	
// 	int temp[n];
// 	int k = 0;


// 	for (int i = d; i < n; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

	
// 	for (int i = 0; i < d; i++) {
// 		temp[k] = arr[i];
// 		k++;
//         }

	
// 	for (int i = 0; i < n; i++) {
// 		arr[i] = temp[i];
// 	}
// }


// void PrintTheArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}
// }


// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	int d = 2;

	
// 	Rotate(arr, d, N);
// 	PrintTheArray(arr, N);

// 	return 0;
// }



// #include<iostream>
// using namespace std;

// int findunmatchedSocks(int arr[],int n){
//     int unmatchedSock = 0;
//     for(int i=0;i<n;i++){
//         unmatchedSock = arr[i];
//     }
//     return unmatchedSock;
// }

// int main(){
//     int n;
// 	cout<<"take input from the user"<<endl;
//     cin>>n;
//     int arr[n];
// 	cout<<"take input of the array from the user"<<endl;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int unmatchedSock = findunmatchedSocks(arr ,n);

//     cout<<"the unmatched socks is: "<<unmatchedSock<<endl;

// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	int ans =0;
// 	for(int i =0; i<n; i++){
// 		cin>>a[i];
// 	}

// 	for(int i =0; i<n; i++){
// 		ans = ans^a[i] ;
// 	}

// 	cout<<ans;
// 	return 0;
// }
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i =0; i<n; i++){
//         cin>>a[i];
//     }

//     int temp1 [n];
//     int temp2 [n];
//     int p=0;
//     int q =0;
//     sort(a , a+n);
     
    

//     return 0;
// }

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void transpose (int a[][3], int r, int c){
//     for(int i =0; i<r;i++){
//         for(int j =i; j<c; j++){
//             swap(a[i][j] ,a[j][i]);
//         }
//     }
//     for(int i =0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }


// int main(){
//     int ar[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
//     int r =3;
//     int c =3;
//     transpose (ar, r,c);
//     return 0;
// }


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i =0; i<n; i++){
//         cin>>a[i];
//     }

//     bool ispalindrome = true;
//     int p=n-1;
//     for(int i =0; i<n; i++){
//         if(a[i] != a[p]){
//             ispalindrome = false;
//             break;
//         }
//         p--;
//     }

//     if(ispalindrome)
//     cout<<"yes";
//     else
//     cout<<"np";
//     return 0;
// }


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void rotatearray(int a[ ] , int k , int n){
//     int b[n];
//     int j =0;
//     for(int i =k;i<n;i++){
//         b[j] = a[i];
//         j++;
//     }
//     for(int i =0; i<k; i++){
//         b[j] =a[i];
//         j++;
//     }

//     for(int i =0; i<n; i++){
//         cout<<b[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"take input from the user"<<endl;
//     cin>>n;

//     int k;
//     cout<<"take input from the user how many time you want too rotate"<<endl;
//     cin>>k;

//     int arr[n];
//     cout<<"take input of the array "<<endl;
//     for(int i =0; i<n; i++){
//         cin>>arr[i];
//     }

//     rotatearray(arr , k, n);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void mergearay(int a[] , int b[] , int n , int k){
//     int q=n+k;
//     int c[q];
//     int p=0;
//     for(int i=0; i<n; i++){
//         c[p]=a[i];
//         p++;
//     }
//     for(int i=0; i<k; i++){
//         c[p] = b[i];
//         p++;
//     }

//     sort(c, c+q);
//     for(int i=0; i<q;i++){
//         cout<<c[i]<<" ";
//     }
// }
// int main(){
//     int n= 4;
//     int k =4;
//     int a[n] = {4,6,2,3};
//     int b[k] = {1,9,8,7};
//     mergearay(a,b,n,k);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int duplicateno(int a[] ,int n){
//     for(int i=0; i<n;i++){
//         int value= abs(a[i]);
//         if(a[value]<0){
//             return value;
//         }

//         a[value] = -1*a[value];
//     }
//     return -1;
// }
// int main(){
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void bubblesort(int a[] , int n){
//     for(int i =0; i<n-1;i++){
//         for(int j=0; j<n-i-1;j++){
//             if(a[j] > a[j+1]){
//                 swap(a[j] , a[j+1]);
//             }
//         }
//     }

//     for(int i =0; i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int n =5;
//     int a[n] ={ 4 ,1,20,3,5};
//     bubblesort(a,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void sortedarray(int a[],int n){
//     int i=1;
//     int j=0;
//     while(i<n){
//         if(a[j]==a[i]){
//             i++;
//         }
//         else{
//             j++;
//             a[j]=a[i];
//             i++;
//         }
//     }
//     for(int i =0; i<j+1;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int n=10;
//     int a[10] = {1 ,1,1,2,2,3,3,3,4,4};
//     sortedarray(a,n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s ;
//     getline(cin ,s);
//     for(int i =0; i<s.length();i++){
//         if(s[0]>='a' && s[0] <='z')
//         s[0] = s[0]-'a' +'A';
//         char ss= s[i];
//         if(ss ==' '){
//             if(s[i+1]>='a' && s[i+1] <='z')
//             s[i+1]=s[i+1] -'a' +'A';

//         }
//     }
//     cout<<s;



//  return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[3][3];
//     int r=3;
//     int c=3;
//     cout<<"take input for the array"<<endl;
//     for(int i =0 ; i<r; i++){
//         for(int j=0; j<c;j++){
//             cin>>a[i][j];
//         }
//     }
//     int sum1 =0 , sum2=0;
//     for(int i=0; i<r;i++){
//         for(int j = i; j<c; j++){
//             sum1= sum1+a[i][j];
//         }
//     }
//     cout<<sum1<<endl;

//     for(int i=0; i<r;i++){
//         for(int j = 0; j<i+1; j++){
//             sum2= sum2+a[i][j];
//         }
//     }
//     cout<<sum2<<endl;
// }

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> a;
    
//     cout<<"takek "<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             int t;
//             cin>>t;
//             a[i].push_back(t);
            
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<a[i][j]<<" ";
            
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int n;
// 	cin>>n;
// 	int a[n],b[n];
// 	int c=0 ;
// 	int e=-1;
// 	int d=0 ;
// 	int f=-1;
// 	for(int i=0;i<n;i++){
// 	    cin>>a[i]>>b[i];
// 	}
	
// 	for(int i=0;i<n;i++){
// 	    if(a[i]>b[i]){
// 	        int p = a[i]-b[i];
// 	        c=c+p;
// 	        if(p>e){
// 	            e=p;
// 	        }
// 	    }
// 	    else{
// 	        int q=b[i]-a[i];
// 	        d=d+q;
// 	        if(q>f){
// 	           f=q; 
// 	        }
	        
// 	    }
// 	}
// 	if(c>d){
// 	    cout<<1<<e<<endl;
// 	}
// 	else{
// 	    cout<<2<<f<<endl;
// 	}
	
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cout<<"take input"<<endl;
	cin>>n>>k;
	int a[n];
	cout<<"input for the arrray"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i =0;i<k;i++){
		sort(a, a+n);
		sum = sum+a[n-1];
		a[n-1] = a[n-1]/2;
	}
	cout<<sum<<endl;
}