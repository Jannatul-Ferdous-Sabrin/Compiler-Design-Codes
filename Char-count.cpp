#include <bits/stdc++.h>

using namespace std;

int main()
{
    string user_input;
    char char_to_find;

    cout<<"Enter A String: ";
    getline(cin,user_input);

    cout<<"Enter A Character: ";
    cin>>char_to_find;

    int char_count = 0;
    for(char c : user_input)
    {
        if(c == char_to_find)
        {
            char_count++;
        }
    }

    cout<<"The Character "<<char_to_find<<" appears "<<char_count<<" times in the string."<<endl;

    return 0;
}
