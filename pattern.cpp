/*
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=1,n; 
    cout<<"enter the number"<<"\n";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }

    return 0;
}*/

/*

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}
*/

/*
#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;
}
*/

/*
#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user"<<endl;
    cin>>n;
    int count =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count ++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    
    return 0;

}
*/

/*
#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user "<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    return 0;
}*/

/*
#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user "<<endl;
    cin>>n;
   int  count =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    return 0;
}
*/



/*#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1,n;
    cout<<"take input from the user "<<endl;
    cin>>n;
   
    while(i<=n){
        int j=1, value=i;
        while(j<=i){
            
            cout<<i+j-1;                    // it can bbe print by two method
            
            
            
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
    return 0;
}
*/


/*


#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n , i =1;
    cout<<"take input from the user"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A' +j-1;                      //'a' +i-1 ,for different pattern 
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
*/


/*
#include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
    int n , i =1;
    cout<<"take input fron the user"<<endl;
    cin>>n;
    char ch ='A';
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
 }
 
 */



/*
 #include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
    
    int n , i=1;
    cout<<"take input from the user"<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        char ch='A'+i-1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;

        }
        cout<<endl;
        i++;
    }
    return 0;
 }
*/




/*
 #include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
    
    int n , i =1;
    cout<<"take input from the user"<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch='A' + i -1;
        while(j<=i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    }
*/



/*
   #include<iostream>
   using namespace std;
   int main(int argc, char const *argv[])
   {
    int n , i =1;
    cout<<"take input from the user "<<endl;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch ='A' +i-1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
   }
*/



/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n , i =1;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch = 'A'+n-i;
        while(j<=i){

        
        cout<<ch;
        ch++;
        j++;}
        cout<<endl;
        i++;
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i =1;
    cin>>n;
    while(i<=n){
       int space=n-i;
       while(space){
        cout<<" ";
        space--;
       }

       int j =1;
       while(j<=i){
        cout<<"*";
        j++;
       }
       cout<<endl;
       i++;
    }
    return 0;
}*/



/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i =1;
    cin>>n;
    while(i<=n){
       int space=n-i;
       while(space){
        cout<<" ";
        space--;
       }

       int j =1;
       while(j<=i){
        cout<<j;
        j++;
       }
       
       int p=2;
       while(p<=i){
        cout<<i-p+1;                //there is another way also , int start=i-1;  while(start) ,cout start , start--;
        p++;
       }
       cout<<endl;
       i++;
    }
    return 0;
}
*/




/*
 #include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i =1;
    cin>>n;
    while(i<=n){
        int s =i-1;
       while(s){
            cout<<" ";
            s--;
        }

        int j =1;
        while(j<=n-i+1){
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;

    }
    return 0;
}*/




/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int n , i=1 ;
    cout<<"take input from the user "<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n-i+1){
            cout<<j;
            j++;
             }

             int k=2;
             while(k<=i){
                cout<<"*";
                k++;

             }
             int m =2;
             while(m<=i){
                cout<<"*";
                m++;
             }

             int l =1;
             while(l<=n-i+1){
                cout<<n-i-l+2;
                l++;
             }
             cout<<endl;
             i++;
        
        
    }

    return 0;
}*/



/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i =1;
    cout<<"take input from the user , what size of rhombus want"<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n-i+1){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=n){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ,  i=1;
    cin>>n;
    while(i<=n){
        int j;
        j=1;
        while(j<=i){
            cout<<j;
            j++;

        }
        cout<<endl;
        i++;
    }

    i=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            cout<<n;
            k++;
        }
    cout<<endl;
    i++;
    }
    
    return 0;
}*/



/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , i =1;
    cin>>n;
    while(i<=n){
        int s;
        s=i-1;                                       // draw a pattern of damru
                                                                 
                                                                    
        while(s){                                                       
            cout<<" ";
            s--;
        }
        int j=1;

    }
    return 0;
}*/



