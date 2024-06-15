#include <bits/stdc++.h>
using namespace std;

int countDigits(int N){
    int count = 0;
    int n=N;
        while(N>0){
           int dig = N%10;
           if(dig!=0 && n%dig==0 ){
            count++;
           }
           N = N * 0.1;
        }  
    return count; 
        
}

int main (){
    int dig = countDigits(23);
    cout << dig;
}