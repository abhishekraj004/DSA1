#include<iostream>
using namespace std;
 class student{
    string gf;
    public:

    int id;
    int age;
    bool present;
    int nos;
    string name;

    student(){
        cout<<"ctor default called"<<endl;
    }
    
    student(int id,int age, bool present, string name,int nos,string gf){
        this->id=id;
        this->age =age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->gf=gf;
        cout<<"parematrised ctor called"<<endl;
    }
    void study(){
        cout<<"study"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    private:
    void chating(){
        cout<<"chating"<<endl;
    }
 };
int main(){
    student s1;
    student s2;
    student *s = new student(2345,5,1,"chintu",6,"dj");
    cout<<s->id<<endl;
    cout<<(*s).name<<endl;
    delete s; //no leak of memory because if locate on heap , we need to delete
    return 0;
}