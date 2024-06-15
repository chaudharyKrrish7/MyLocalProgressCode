#include <bits/stdc++.h>
using namespace std;

int ecd(int a , int b){
    if (a == 0)
        return b;
    return ecd(b % a, a);

};


int main(){
    int val = ecd(100 , 20);
    cout << val ; 
}