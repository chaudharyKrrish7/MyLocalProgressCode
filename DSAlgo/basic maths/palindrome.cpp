#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int revNum = 0;
    int dup = x;
    while (x > 0) {
        int n = x % 10;
        revNum = (revNum * 10) + n;
        x = x / 10;
    }
    if (dup == revNum){
        return true;
    }else{
        return false;
    }
    
};
int main(){
    bool val = isPalindrome(-121);
    cout << val;
}