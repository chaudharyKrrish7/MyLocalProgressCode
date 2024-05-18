#include <iostream>
using namespace std;
int main(){
    std::cout << "variable" << std::endl;   
    int myNum = 15;
    std::cout << myNum << std::endl; //15
    myNum = 29;
    std::cout << myNum << std::endl;//29
    double myfloat = 34.89;
    char letter = 'a';
    string demoString = "hello";
    bool mybool1 = 0;
    bool mybool2 = true;
    std::cout << myfloat << std::endl;
    std::cout << letter << std::endl;
    std::cout << demoString << std::endl;
    std::cout << mybool1 << std::endl;
    std::cout << bool(mybool2) << std::endl;

    //using vars as addition
    std::cout << "my age is "<< myNum<<"and my marks are" << myfloat<< std::endl;
    
    //devclaring many variables
    int x = 5 , y = 6 , z = 8;
    std::cout << x+y-z << std::endl;

    //constants
    const int mymarks = 84;
    //mymarks = 89 //error
    std::cout << mymarks << std::endl;
    // this also error
    // const float pi;
    // pi = 3.14;
    // std::cout << pi << std::endl;

}
