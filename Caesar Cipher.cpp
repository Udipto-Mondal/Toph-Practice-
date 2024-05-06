/**
 *    author:  Udipto
 *    created: Monday
6 May 2024
Dhaka, Bangladesh
**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    string s, t="";
    getline(cin, s);
    n=n%26;
    for(int i=0; i<s.size(); i++){
        if(s[i]-n<97 && s[i]!=' ') t+=s[i]-n+26;
        else if(s[i]==' ') t+=s[i];
        else t+=s[i]-n;
    }
    cout<<t<<endl;
return 0;
}
