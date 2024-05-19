#include <iostream>
using namespace std;
//basic class
 class myClass { 
        public : 
        int myNum;
        string myString;
        //creating a method
        void myMethod(){
            cout << "hello world!!";
        }
    };


int main(){
   myClass myobj;

   myobj.myNum = 15;
   myobj.myString = "hello!!";

   cout << myobj.myNum <<"\n";
   cout << myobj.myString;

   //calling a method
   myobj.myMethod();
}