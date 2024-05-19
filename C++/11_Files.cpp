#include <iostream>
#include <fstream> //file library
using namespace std;

/*

ofstream --> Creates and writes to files
ifstream --> Reads from files
fstream	 --> A combination of ofstream and ifstream: creates, reads, and writes to files

*/



int main() {
//Create and Write To a File
    ofstream myfile("file.txt");
    myfile << "this is a demo file";
    myfile.close();

//Read a File
    string mytext;
    ifstream myreadfile("file.txt");

    while(getline(myreadfile , mytext)){
        cout << mytext;
    }
    myreadfile.close();
}