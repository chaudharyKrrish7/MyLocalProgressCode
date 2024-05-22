#include <iostream>
using namespace std;

int main(){
     int n;
    cout << "Enter the number of Fibonacci terms you want to generate: ";
    cin >> n;

    int first = 0, second = 1, next;
    cout << "Fibonacci Series: ";

    for (int i = 0; i < n+1; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    return 0;
    
}