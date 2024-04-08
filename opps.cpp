#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    string name;

    void eat(){
        cout<<"he is eating"<<endl;

    }
    void sleep(){
        cout<<"he is sleeping"<<endl;
    }

};

int main(){
    animal ramesh;
    ramesh.eat();







    return 0;
}