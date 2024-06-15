#include <bits/stdc++.h>
using namespace std;

int chckPrime(int x){
    int i = 1;
    int count = 0;
    while(i<x){
        if(x%i == 0){
            count++;
        }
        i++;
        
    }
    if (count < 2){
        return true;
    }else{return false;}
}

int main(){
    bool val = chckPrime(13);
    cout << val;
}