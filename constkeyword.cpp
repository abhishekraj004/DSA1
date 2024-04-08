/*#include<iostream>
using namespace std;
int main(){
    //const with pointer(cwp)
    // int *a = new int;
    // *a=2;
    // cout<<a<<endl;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;

    //next part(cwp)
     
    //  const int *a = new int(20); //const data , non const pointer
    
    // cout<<*a<<endl;
    // int b=2;
    // a=&b;
    // cout<<*a<<endl;


    // const pointer but non const data
    // int *const a= new int(2);
    // *a=20
    // cout<<*a<<endl;

    // const pointer and const data
    const int*const a = new int(2);



    
    return 0;
}*/

#include<iostream>
using namespace std;
class abc {
   int x;
   int *y;
   public:

   abc(){
    x=0;
    y=new int(0);

   }

   int getx() const
   {
    return x;
   }

    void setx(int _val){
        x=_val;
    }

    int gety() const 
    {
    return *y;
   }

    void sety(int _val){
        *y=_val;
    }
    
};

int main(){
    abc a;

    return 0;
}