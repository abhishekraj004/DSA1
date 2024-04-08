/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int a;
    cout<<INT_MAX;
    return 0;
}
*/



class Solution {
public:
    int reverse(int x) {
        int i;
        int sum =0;
        while(x!=0){
            i = x%10;
            if((sum > INT_MAX/10)||(sum< INT_MIN/10)){
                return 0;
            }
            sum=(sum*10) + i;
            x=x/10;
            i++;

        }
        return sum;
        
    }
};