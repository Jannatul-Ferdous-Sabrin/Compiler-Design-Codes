#include <bits/stdc++.h>

using namespace std;

int main()
{
    string user_input;
    cout<<"Enter A String: ";
    getline(cin,user_input);

    int length_with_spaces = user_input.length();
    int length_without_spaces = 0;
    int space_count = 0;

    for(char c : user_input)
    {
        if(c != ' ')
        {
            length_without_spaces++;
        }
        else
        {
            space_count++;
        }
    }

    cout<<"Length With Spaces: "<<length_with_spaces<<endl;
    cout<<"Length Without Spaces: "<<length_without_spaces<<endl;
    cout<<"Number of Spaces: "<<space_count<<endl;

    return 0;
}
