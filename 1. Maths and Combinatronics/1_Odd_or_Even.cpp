//Given a number n, check whether it is even or odd. Return true for even and false for odd.
#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
    }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}
