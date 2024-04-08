// #include<iostream>
// using namespace std;
// class marks{
//     int intmark;
//     int extmark;
//     public:
//     marks(){
//         intmark=0;
//         extmark=0;
//     }
//     marks(int im, int em){
//         intmark=im;
//         extmark=em;
//     }

//    void display(){
//         cout<<intmark<<endl<<extmark<<endl;
//     }

//     marks operator +(marks m){
//         marks temp;
//         temp.intmark=intmark + m.intmark;
//         temp.extmark= extmark + m.extmark;
//         return temp;
//     }
// };
// int main(){
//     marks m1 (1,1);
//     marks m2 (1,1);
//     marks m4(1,1);
//     marks m3= m1+m2+m4;
//     m3.display();

// }

#include<bits/stdc++.h>
using namespace std;
class mystring{
    string str;
    public:
    mystring(const string &s): str(s){}
    bool operator >(const mystring & other) const{
        return str.length() > other.str.length();
    }

    bool operator <(const mystring & other) const{
        return str.length() < other.str.length();
    }

    bool operator ==(const mystring & other) const{
        return str == other.str;
    }

    friend ostream &operator << (ostream & os , const mystring & mystr){
        os<<mystr.str;
        return os;
    }
};

int main(){
    mystring str1("hello");
    mystring str2("world");
    mystring str3("hi");
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
}