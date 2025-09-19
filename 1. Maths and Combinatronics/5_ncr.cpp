#include<iostream>
using namespace std;

class Solution {
public:
    int ncr(int n,int r){
        double res=1;
        for(int i=1;i<=r;i++){
            res=(res*(n-r+i))/i;
        }
        return res;
    }
};
int main(){
    int n,r;
    cout<<"Enter n and r:"<<endl;
    cin>>n>>r;
    Solution obj;
    cout<<obj.ncr(n,r)<<endl;
    return 0;
}