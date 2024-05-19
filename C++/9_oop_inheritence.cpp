#include <iostream>
using namespace std;

/*
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.
*/

class vehicle{
    public : 
    string brand = "maruti";
};

class car:public vehicle{
    public :
    string model = "swift";
    int modelYear = 2006;
};

int main(){
    car obj;
  cout << "car name is " << obj.brand << " model name is " << obj.model << " and model year is " << obj.modelYear;   
}