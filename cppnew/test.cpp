#include <iostream>
using namespace std;

int main(){
    string name;
    name = "Benedek Kaibas";
    int newNname;
    newNname = stoi(name);
    long a;
    a = 123;
    long long b;
    b = 984324;
    int c;
    c = 43;
    cout << "Size of name " << sizeof(name) << endl;
    cout << "Size of long a " << sizeof(a) << endl;
    cout << "Size of long long b " << sizeof(b) << endl;
    cout << "Size of int c " << sizeof(c) << endl;

    //TODO: make this more readable
    if (a >= newNname ){
        cout << "Size of long a " << sizeof(a) << endl;
    } else{
        cout << "not working";
    }

}