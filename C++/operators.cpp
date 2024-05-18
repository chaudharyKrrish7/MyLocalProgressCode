#include <iostream>
using namespace std;
int main(){
    int x = 5 ;
    int y = 7;
    //arthimetic
    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x % y << std::endl;
    std::cout << x / y << std::endl;
    std::cout << x * y << std::endl;
    //assignment
    //+= , = , ?= etc
    //comparison
    std::cout << bool(x > y) << std::endl;
    std::cout << bool(x < y) << std::endl;
    std::cout << bool(x != y) << std::endl;
    //logical
    // &&  and
    // ||  or
    // !   not
}