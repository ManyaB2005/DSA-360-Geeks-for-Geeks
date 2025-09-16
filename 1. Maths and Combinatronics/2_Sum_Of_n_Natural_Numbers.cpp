#include<iostream>
using namespace std;
class Solution{
    public:
    int findSum(int n){
        if(n==0)
        return 0;
        else
        return (n*(n+1))/2;
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Solution obj;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<obj.findSum(n)<<endl;
}