#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 5;
    cout << "Value of a: " << a;
    cout << "    " << typeid(a).name();
    cout << "     Size of int: " << sizeof(a) << " byte" << endl;

    string str = "Hello, World!";
    cout << "Value of b: " << str;
    cout << "    " << typeid(str).name();
    cout << "     Size of char: " << sizeof(str) << " byte" << endl;

    float c = 5.96;
    cout << "Value of c: " << c;
    cout << "    " << typeid(c).name();
    cout << "     Size of float: " << sizeof(c) << " byte" << endl;

}
