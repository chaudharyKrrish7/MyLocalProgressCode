#include <bits/stdc++.h>
using namespace std;
bool armStrong(int x){
    int sum = 0;
    int num = x;
    while(x>0){
        int n = x%10;
        sum = sum + ( n*n*n );
        n = n / 10;
    }
    if (sum == num){
        return true;
    }
}
int main(){
    int val1 = armStrong(23);
    cout << val1 << endl;
}