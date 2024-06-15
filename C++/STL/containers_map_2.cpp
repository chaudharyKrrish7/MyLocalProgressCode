#include <bits/stdc++.h>
using namespace std;


// function that accept map by reference and make changes to
// some of its values
void pass_by_reference(map<int, int>& passed_map)
{
    // change 1st and 3rd value
    passed_map[1] = 200;
    passed_map[3] = 300;
}



int main(){
     //--------maps------------
    //its key value pair
    map<string , int>mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    map<string , int>::iterator it= mp.begin();

    while(it != mp.end()){
        cout << it->first << it->second <<endl;
        ++it;
    }

    //initialize
     map<string, string>New_Map;
    New_Map = {{"Ground", "Grass"}, 
              {"Floor", "Cement"}, 
              {"Table", "Wood"}};
    for(auto x: New_Map)
   {
      cout << x.first << "->" << 
              x.second <<endl;
   }

   //offset
    map<char, int> m;
    m.insert({ 'a', 3 });
    m.insert({ 'g', 2 });
    m.insert({ 'f', 4 });
    m.insert({ 'e', 5 });
    m.insert({ 'd', 4 });
    m.insert({ 'b', 3 });
 
    int offset = 3;
    auto itr = m.begin();
 
    int k = 0;
    while (k < offset) {
        k++;
        itr++;
    }
    cout << itr->first << " " << itr->second << endl;

    //Passing Map as Reference in C++ STL
    // empty map container
    map<int, int> gfg;
 
    // insert elements in map
    gfg[1] = 25;
    gfg[2] = 45;
    gfg[3] = 35;
    gfg[4] = 65;
    gfg[5] = 55;
    gfg[6] = 25;
 
    // printing original map gfg
    cout << "Original Map\n";
    cout << "\tKEY\tELEMENT\n";
    for (auto i : gfg) {
        cout << '\t' << i.first << '\t' << i.second << '\n';
    }
 
    // passing map to a function by reference
    pass_by_reference(gfg);
 
    // printing map gfg after passing it to a function by
    // reference
    cout << "Map After passing to a function by reference\n";
    cout << "\tKEY\tELEMENT\n";
    for (auto i : gfg) {
        cout << '\t' << i.first << '\t' << i.second << '\n';
    }
}