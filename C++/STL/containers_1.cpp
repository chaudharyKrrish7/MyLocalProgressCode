//array
#include <bits/stdc++.h>
using namespace std;

int main(){
    //-------------array-------------

    // array<int , 3> ar1{{1,2,3}};
    // array<int , 3> ar2 = {3,4,2};
    // array<string , 3> ar3 = {{string("a"),"b" , "k"}};
    // array<int , 3 > arNew = {2 , 3 , 7};
    // cout << ar2[0] << ar2[2]; 
    // cout << ar1.front() << ar1.back();
    // cout << ar1.size();
    // ar2.swap(arNew);
    // cout << ar2.front() << ar2.back();
    // array<int , 3> arrDemo = {1 , 2 , 3};
    // bool x = arrDemo.empty();
    // cout << boolalpha << x;
    // array <int , 2> arrd = {1,2};
    // cout << arrd.at(1);
    // array<int , 3> arr ;
    // arr.fill(1);
    // for(auto i : arr)
    //     cout << i;
    // array<int , 4> arr1 = {1,2,3,4};
    // cout << sizeof(arr1); --16
    // cout << arr1.max_size(); --4

    //-------------vector-------------
    
    vector<int> vec = {1,2,3} ;
    for (auto i : vec)
        cout << i ;

    vector<int>v1;
    v1.push_back(2);
    for(int x: v1)
        cout << endl << x << endl;

    int n = 3;
    vector<int> v2(n,n); //first n is no of times second is value
    for(int x : v2)
        cout <<x ;
    cout << endl;

    //initalizinf from an array
    int arr[] = {2,3,4,5};
    int num = sizeof(arr) / sizeof(arr[0]) ;
    vector<int> v3(arr , arr + num); //here n is the no of elements in array
    for(int x : v3)
        cout << x ;
    cout << endl;

    int fillVal = 6;
    vector<int>v4(6);
    fill(v4.begin() , v4.end() , fillVal);
    for(int x : v4)
        cout << x;
    cout <<endl;


    vector<string> v5{"hello " , "Good " , "Morning!"};
    for(auto it = v5.begin();
        it != v5.end();++it)
        cout << *it;
    cout <<endl;

    int sum = 0 ;
    vector<int>v6{2,3,4,5,6};
      //vector size
    cout << v6.size();
    //clculating sum
    while (!v6.empty()){
        sum = sum + v6.back();
        v6.pop_back();
    }
    cout <<sum;
    cout <<endl;

    vector<int>v7;
    v7.push_back(6);
    v7.push_back(8);
    v7.push_back(10);
    cout << v7.front();
    cout << v7.back();
    cout <<endl;

    //insert
    vector<int>v8{3,4,5};
    v8.insert(v8.begin() + 1,2);
    for(int x : v8)
        cout << x;
    cout <<endl;

    //emplace
    vector<int>v9{1,2,3};
    v9.emplace(v9.begin() , 78);
    for (int x:v9)
        cout << x;
    cout <<endl;

    //assign
    vector<int>v10{1,2,3};
    v10.assign(6,50);
    for (int x:v10)
        cout << x;
    cout <<endl;

    //clear
    vector<int>v11{1,2,3};//123
    v11.clear();// cleard and size 0

    //erase
    vector<int>v12{1,2,3};
    v12.erase(v12.begin());
    for (int x:v12)
        cout << x;//23
    cout <<endl;

    //--------stack--------
    stack<int> stk;
    stk.push(3);
    stk.push(4);
    stk.push(5);
    int numStk = 90;
    stk.push(numStk);
    stk.pop();

    while(!stk.empty()){
        cout << stk.top();
        stk.pop();
    }
    cout <<endl;
    //swap
    stack<int>stk1;
    stk1.push(6);
    stk1.push(6);
    stk1.push(6);
    stk1.push(6);
    stack<int>stk2;
    stk2.push(7);
    stk2.push(7);
    stk2.push(7);
    stk2.push(7);

    stk1.swap(stk2);
    cout<<stk1.top();
    cout<<stk2.top();
    cout << endl;

    //Queue
    queue<int>q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    queue<int> cpq = q1;
    
    while(!q1.empty()){
        // cout << cpq.front();
        cpq.pop();
    }
    
    cout << endl;
    // //-------set-----------
    // set<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    
    // //on prinitng gives 12  instead of 122 coz it has unique values 
    // //erase
    // s.erase(s.end());

   
};