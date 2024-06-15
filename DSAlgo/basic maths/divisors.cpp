#include <bits/stdc++.h>
using namespace std;

int div(int x){
    int i = 1;
    while(i<x){
        if(x%i == 0){
            cout << i << endl;
        }
        i++;
    }    
}

int main(){
    int val = div(36);
    cout << val;
}