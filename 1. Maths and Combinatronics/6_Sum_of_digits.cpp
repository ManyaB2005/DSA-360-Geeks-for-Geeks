#include<iostream>
using namespace std;
class Solution {
public:
    int sumofdigits(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
};
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    Solution obj;
    cout<<obj.sumofdigits(n)<<endl;
    return 0;
}