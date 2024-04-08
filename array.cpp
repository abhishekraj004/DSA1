/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[5] , b[5], c[5] ,i;
    cout<<"take input for the list a"<<endl;

    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"tale input for the list b"<<endl;
    for(i=0;i<5;i++){
        cin>>b[i];
    }

    for(i=0;i<5;i++){
        c[i] = a[i] + b[i] ;
        cout<<c[i]<<" ";
    }
    return 0;
}*/

//maximimum element and minimum element 
 
 /*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{     int n;
      int i;

       cin>>n;
    int max, a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    cout<<max;
    return 0;
}*/



/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     int arr[5] ={ 1,2,3,4,5};
     int target ;
     cout<<"take input from the user"<<endl;
     cin>>target;
     int n=5;
     bool flag =0;
     for(int i =0;i<n;i++){
        if(arr[i] ==target){
            flag =1;
            break;
        }

    }

    if(flag ==1)
    cout<<"target found "<<endl;

     else 
    cout<<"target not found"<<endl;


    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n =10;
    int arr[10]={0,1,1,1,0,1,0,1,0,1};
    int zerocount=0;
    int onescount =0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }
        else if (arr[i]==1){
            onescount++;
        }
         
    }

    cout<<zerocount<<endl;
    cout<<onescount<<endl;
    return 0;
}*/

/*
#include<iostream>
#include<limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n=7;
    int arr[7]={9,4,2,5,6,5,8};
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            
            min = arr[i];
        }
    }

    cout<<min;
    return 0;
}
*/
/*
#include<iostream>
#include<limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n=7;
    int arr[7]={2,4,2,5,6,5,8};
    int maxt=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxt){
            
            maxt= arr[i];
        }
    }

    cout<<maxt;
    return 0;
}*/


/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"take input n from the user"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int a,b;
        cout<<"take input a,b from the user"<<endl;
        cin>>a>>b;
        if(a%b==0)
        cout<<"0"<<endl;
        
        else {
            int p;
            int sum=0;
            while(p){
                //int sum=0;
                p =a%b;
                if(p!=0){
                    sum=sum+1;
                }
                a++;
            }
            cout<<sum<<endl;
            
            
        }
        i++;
    }
    return 0;
}*/

/*
// reverse of an array using swap function
#include<iostream>
using namespace std;

void reversearray(int arr[] , int size){
    int left =0;
    int right = size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
}

int main(int argc, char const *argv[])
{
     int array[100];
     int item;
     cout<<"take input of the item"<<endl;
     cin>>item;
     for(int i=0;i<item;i++){
        cin>>array[i];
     }

     reversearray(array,item);

    return 0;
}*/



/*#include<iostream>
using namespace std;

int getunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;

}
int main(int argc, char const *argv[])
{
    
    int array[100];
    int n;
    cout<<"take input n from the user"<<endl;
    cin>>n;
    cout<<"take input for the arrray"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int value = getunique(array,n);
    cout<<value<<endl;

    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int array[100];
    int n;
    cout<<"take input n from the user"<<endl;
    cin>>n;
    cout<<"take input for the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<array[i] <<" "<<array[j]<<endl;
        }

    }

    return 0;
}*/ 


/*
#include<iostream>
#include<limits.h>
using namespace std;

int maximum(int ar[] , int a){
    int maximum = INT_MIN;
    for(int i =0; i<a;i++){
        if (ar[i] > maximum){
            maximum = ar[i];
        }
        
    }
    return maximum;
}

int minimum(int ara[] , int b){
    int minimum = INT_MAX;
    for(int i =0; i<b;i++){
        if (ara[i] < minimum){
            minimum = ara[i];
        }
        
    }
    return minimum;
}



int main(){
    int t;
    cout<<"take input t from the user"<<endl;
    cin>>t;
    while(t--){
        int n;
        
        cout<<"take input n from the user"<<endl;
        cin>>n;
        int array[n];
        cout<<"take input of the array"<<endl;
        for(int i =0; i<n;i++){
            cin>>array[i];
        }
        
        int  maxi = maximum(array , n);
        int mini = minimum(array , n);
        cout<< maxi - mini<<endl;
    }
    
    
    
    return 0;
}*/


/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int  array[n];
   for(int i =0;i<n;i++){
    cin>>array[i];
   }
   int arr[2*n];
   
   for(int i=0;i< 2*n;i++ ){
    arr[ i]= array[i];
    arr[ n+i]= array[i];
   }

   for(int i=0;i<2*n;i++){
    cout<<arr;
   }
  return 0;
}*/


/*
#include<iostream>
using namespace std;
void leftshift (int array[],int n){
    int index =0;
    for(int i =0;i<n;i++){
        if(array[i]>0){
            swap(array[i],array[index]);
             index ++;
        }
    }

}
int main(){
    int n;
    cout<<"tale input n from the usere"<<endl;
    cin>>n;
    int arr[n];
    cout<<"take elemet input"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftshift(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/


// #include <iostream>
// using namespace std;

// int main() {
// 	int t;  cin>>t;
// 	int n,k;   
	
// 	while(t--){
// 	    cin>>n>>k;
// 	    int a[n];
// 	    int changeink=k;
	    
// 	    for(int i=0; i<n; i++) 
//          cin>>a[i];
	    
	    
// 	    for(int i=0; i<n; i++){
// 	        if(a[i]<=changeink)   {
//                  cout<<"1"; 
//                  changeink = changeink-a[i]; 
//                  }
// 	        else cout<<"0";
// 	    }
// 	    cout<<endl;
	    
// 	}
// 	return 0;
// }


#include<iostream>
#include<limits.h>
using namespace std;

int FindSECONDMax (int arr[] , int size)
{
    int Maxans = INT_MIN;
    int secondmax = INT_MIN;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]>Maxans)
        {
            secondmax = Maxans;
            Maxans = arr[i];
        }
        else if (arr[i]>secondmax && arr[i] != Maxans)
        {
            secondmax = arr[i];
        }
        
        
    }
    return secondmax ;
}

int main(){
    int arr [] = { 2 , 10 , 55 , 66 , 7};
    int size = 5;

    int max = FindSECONDMax(arr , size);
    cout<<max;
    
return 0;
}