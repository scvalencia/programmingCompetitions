/*
ID: sc.vale2
PROG: test
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char const *argv[]) {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}