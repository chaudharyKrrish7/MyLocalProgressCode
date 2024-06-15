#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s = "hello";
    int i = 0;
    int sumCalc = 0;
    while (i < s.length()-1)
    {
        int sum = abs(int(s[i]) - int(s[i+1]));
        i++;
        sumCalc += sum;
    }
    cout << sumCalc << endl;
}