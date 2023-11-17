#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string here: ";
    getline(cin,str);

    int uppercase = 0;
    int lowercase = 0;
    int vowel = 0;
    int consonent = 0;
    int digits = 0;
    int spch = 0;

    for(char c:str)
    {
        if(isalpha(c))
        {
            if(isupper(c))
            {
                uppercase++;
            }
            else if(islower(c))
            {
                lowercase++;
            }
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                vowel++;
            }
            else
            {
                consonent++;
            }
        }
        else if(isdigit(c))
        {
            digits++;
        }
        else
        {
            spch++;
        }
    }

    cout<<"Number of uppercase letters: "<<uppercase<<endl;
    cout<<"Number of lowercase letters: "<<lowercase<<endl;
    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"Number of consonants: "<<consonent<<endl;
    cout<<"Number of digits: "<<digits<<endl;
    cout<<"Number of special characters: "<<spch<<endl;

}
