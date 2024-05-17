#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int pass;
    pass=toupper(str[0]);
    for (int i=0; str.length(); i++)
    {
        if(str[i]=='s'){
            pass=pass+'$';
        }else if(str[i]=='i'){
            pass=pass+'!';
        }
        else if(str[i]=='0'){
            pass=pass+'()';

        }
        else
            pass=pass+str[i];

    }
    pass=pass+'.';
    cout<<pass<<endl;

    return 0;
}
