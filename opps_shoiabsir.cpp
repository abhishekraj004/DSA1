 #include<iostream>
using namespace std;


class building {
    int building_number;
    int total_floor ;
    int room_number;
    string room_state;

    public:

    void set (int b_n , int t_f , int r_n , string r_s){
     building_number = b_n;
     total_floor = t_f ;
     room_number = r_n;
     room_state = r_s ;
    }

    void get (){
        cout<<building_number<<endl;
        cout<<total_floor<<endl;
        
    }
};

int main(){
    building astro;
    astro.set(9,3,2,"ram");
    astro.get();
       return 0;

}

/*#include<iostream>
using namespace std;
class Stack {
    int stk[10];
    int top;
    public:
    Stack(){
        top =-1;
        cout<<"cons"<<endl;
    }
    ~Stack(){
        cout<<"destructor"<<endl;
    }

};
int main(){
    Stack s1,s2;

}*/
/*
// static member in class 
#include<iostream>
using namespace std;
class abc{
    int a;
    static int b;
    public:
    void init ( int i , int j){
        a =i;
        b=j;
    }

    void show (){
        cout<<a<<" "<<b<<endl;
    }

};


#include<iostream>
using namespace std;
class Bank{
    string username;
    int userbalance;
   static int totalbalance;
   void openaccount (string name , int sd){

   }
   void deposit (int m);
   void withdraw(int m);
   void totalbal(); 
    
    

};
int Bank :: totalbalance =0;

 int main(){
    return 0;
 }*/

 