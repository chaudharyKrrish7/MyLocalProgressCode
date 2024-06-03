//array
#include <array>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

int main(){
    //-------------array-------------

    array<int , 3> ar1{{1,2,3}};
    array<int , 3> ar2 = {3,4,2};
    array<string , 3> ar3 = {{string("a"),"b" , "k"}};
    array<int , 3 > arNew = {2 , 3 , 7};
    cout << ar2[0] << ar2[2]; 
    cout << ar1.front() << ar1.back();
    cout << ar1.size();
    ar2.swap(arNew);
    cout << ar2.front() << ar2.back();
    array<int , 3> arrDemo = {1 , 2 , 3};
    bool x = arrDemo.empty();
    cout << boolalpha << x;
    array <int , 2> arr = {1,2};
    cout << arr.at(1);
    array<int , 3> arr ;
    arr.fill(1);
    for(auto i : arr)
        cout << i;
    array<int , 4> arr = {1,2,3,4};
    cout << sizeof(arr); --16
    cout << arr.max_size(); --4
    
};