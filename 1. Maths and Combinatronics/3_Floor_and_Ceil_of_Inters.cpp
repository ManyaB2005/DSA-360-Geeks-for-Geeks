#include <iostream>
#include <vector>
using namespace std;

// Function to compute floor of a / b
int floorDiv(int a, int b) {
    int q = a / b;

    // adjust down if signs differ and not divisible
    if ((a ^ b) < 0 && a % b != 0){
        q--; 
    }
    return q;
}

// Function to compute ceil of a / b
int ceilDiv(int a, int b) {
    int q = a / b;

    // adjust up if signs same and not divisible
    if ((a ^ b) > 0 && a % b != 0){
        q++; 
    }
    return q;
}

vector<int> divFloorCeil(int a, int b){

    vector<int> res;

    res.push_back(floorDiv(a,b));
    res.push_back(ceilDiv(a,b));

    return res;

}

int main() {

    int a = -7, b = 2;

    vector<int> res = divFloorCeil(a, b);
    cout << res[0] << ' ' << res[1] << endl;

    return 0;
}