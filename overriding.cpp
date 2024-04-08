// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//    virtual void sound(){
//         cout<<"making sound"<<endl;
//     }
//    virtual ~Animal(){
//         cout<<"animal dtor called"<<endl;
//     }
// };

// class Dog:public Animal{
//     public:
//     void sound() override {
//         cout<<"barking"<<endl;
//     }
//     ~Dog(){
//         cout<<"dog dtor called"<<endl;
//     }
// };

// class Cat:public Animal{
//     public:
//     void sound() override {
//         cout<<"mewing"<<endl;
//     }
//     ~Cat(){
//         cout<<"cat dtor called"<<endl;
//     }
// };

// void sound(Animal *animal){
//     animal->sound(); // polymorphic 
//     // animal sound is behaving as per required object alloacted at run time 

// }

// int main(){
//     // Dog *dog =new Dog();
//     // dog->sound();

//     Animal *animal=new Dog();
//     sound(animal);
//     animal=new Animal();
//     sound(animal);
    

//     delete animal;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Vechile{
    public:
    virtual void start() const =0;
    Vechile(){}

};
class Bus:public Vechile {
    public:
  void start() const override{
        cout<<"bus start"<<endl;
    }
};

class Truck: public Vechile{
    public:
   void start() const override{
        cout<<"truck start"<<endl;
    }
};

class Car:public Vechile{
    public:
   void start() const override {
        cout<<"car start"<<endl;
    }
};

void start(Vechile * vechile){
    vechile->start();
}

int main(){
    int t;
    cout<<"take input t from the user "<<endl;
    cin>>t;
    if(t==2){
        Vechile *abc=new Bus();
        start(abc);
        abc=new Truck();
        start(abc);

        
        
    }
    return 0;
}