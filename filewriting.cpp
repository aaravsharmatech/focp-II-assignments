#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream fout ("num.txt") ;

fout << 10 << " " << 20 << " " << 30;

fout. close();
ifstream fin("num.txt");
int a, b, c;
fin >> a >> b >> c;
cout << a + b + c;
fin.close();
}