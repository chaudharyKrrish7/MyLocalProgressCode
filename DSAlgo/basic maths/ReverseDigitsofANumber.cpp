#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int revNum = 0;
    bool isNegative = x < 0;
    
    if (isNegative) {
        x = -x;
    }

    while (x > 0) {
        int n = x % 10;
        revNum = (revNum * 10) + n;
        x = x / 10;
    }

    if (isNegative) {
        revNum = -revNum;
    }

    return revNum;
};


int main(){
    int val = reverse(-23);
    cout << val;
}