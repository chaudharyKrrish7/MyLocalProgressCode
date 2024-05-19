#include <iostream>
using namespace std;
/*
C++ Exceptions
When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).
*/

int main (){
    //C++ try and catch
    
    try
    {
        int age ;
        cin >> age;
        if(age > 18){
            cout << "old enough!!";
        }else{
            throw(age);
        }
    }
    catch(int age)
    {
        cout << "access denied - u must be 18 atleast";
        cout << "age is " << age; 
    }
    
}
