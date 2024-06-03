#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{
    vector<int> vec = {1,2,3} ;
    for (auto i : vec)
        cout << i;
}