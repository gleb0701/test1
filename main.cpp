#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    cout << "Hello, World!" << endl;
    cout << "Bye-bye, World!" << endl;

    ifstream file("source1.txt");
    string s;
    file >> s;

    cout << s << endl;

    return 0;
}