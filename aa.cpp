#include <iostream>

using namespace std;

int main()
{
    int input;
    cin>>input;
    
    for (int i = 0; i < input; i++) {
        for (int j = 1; j <= input-i; j++) {
            cout<<j<<" ";
        }
        for (int j = 0; j < 2*i; j++) {
            cout<<"* ";
        }
        for (int j = input-i; j >= 1; j--) {
            cout<<j<<" ";
        }
        cout<<"\n";
    }


}