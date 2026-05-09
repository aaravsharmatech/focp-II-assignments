#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("C:/Users/buddy/Desktop/demo focp");
 fout << "Lets try new data\n";
 fout << "This is file handling in C++ where ios::out truncates";
 
 fout.close();

 cout <<"Data written successfully";



    return 0;
}

