#include <iostream>
using namespace std;

void myFunc(string country = "argentina"){
    cout << country << "\n";
}

//Recursion ----> "calling a function itself"
int sum(int k){
    if (k > 0)
    {
        return k + sum(k-1);
    }else{
        return 0;
    }
}

int main(){
    //Default Parameter Value
    myFunc("india");
    myFunc("brazil");
    myFunc();

    int result = sum(10);
    cout << result;
    return 0;
    
}


