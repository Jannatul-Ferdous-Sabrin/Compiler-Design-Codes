#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name, uni, studentid, section;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter University: ";
    getline(cin, uni);
    cout << "Enter ID: ";
    cin >> studentid;
    cout << "Enter Section: ";
    cin >> section;

    cout << endl;

    cout << "Full Name: " << name << endl;
    cout << "University: " << uni << endl;
    cout << "ID: " << studentid << endl;
    cout << "Section: " << section << endl;

}
