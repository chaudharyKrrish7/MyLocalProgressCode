#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    for(int i = 1 ; i <= min(a,b) ; i++){
        if(a%i == 0 && b%i == 0){
            cout<< i<< endl;
        }
    }

}

int main(){
    int val = gcd(15,20);
    cout << val;
}