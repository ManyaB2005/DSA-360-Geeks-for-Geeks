#include <iostream>
#include <cmath>  
using namespace std;

class Solution {
public:
    int mySqrt(int n) {
        return sqrt(n);   
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    cout <<obj.mySqrt(n) << endl;

    return 0;
}
