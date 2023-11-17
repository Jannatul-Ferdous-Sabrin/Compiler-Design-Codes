#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    int num1=0, num2=0, num3=0;
    char op1, op2;
    int pos1=-1, pos2=-1;

    for(int i=0; i<st.size(); i++)
    {
        if(st[i] == '+' || st[i] == '-' || st[i] == '*' || st[i] == '/')
        {
            if(pos1==-1)
            {
                pos1 = i;
                op1=st[i];
            }
            else
            {
                pos2 = i;
                op2=st[i];
            }

        }
        else if(pos1==-1)
        {
            num1 = num1*10+(st[i] - 48);
        }
        else if(pos2==-1)
        {
            num2 = num2*10 + (st[i] - 48);
        }
        else
        {
            num3 = num3*10 + (st[i] - 48);
        }

    }

    cout<<num1<<endl<<op1<<endl<<num2<<endl<<op2<<endl<<num3<<endl<<endl;

    if(op2=='*')
    {
        if(op1=='+')
            cout<<num1+(num2*num3);
        else if(op1=='-')
            cout<<num1-(num2*num3);
        else if(op1=='/')
            cout<<num1/(num2*num3);
        else if(op1=='*')
            cout<<num1*num2*num3;
    }
    else if(op2=='/')
    {
        if(op1=='+')
            cout<<num1+(num2*num3);
        else if(op1=='-')
            cout<<num1-(num2*num3);
        else if(op1=='/')
            cout<<num1/(num2*num3);
        else if(op1=='*')
            cout<<num1*num2*num3;
    }
    else
    {
        if(op1=='+')
            num1+=num2;
        else if(op1=='-')
            num1-=num2;
        else if(op1=='/')
            num1/=num2;
        else if(op1=='*')
            num1*=num2;

        if(op2=='+')
            num1+=num3;
        else if(op2=='-')
            num1-=num3;
        else if(op2=='/')
            num1/=num3;
        else if(op2=='*')
            num1*=num3;

        cout<<num1;
    }

    return 0;
}
