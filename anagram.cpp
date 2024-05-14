#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    cin>>a>>b;
    int L1=strlen(a);
    int L2=strlen(b);
    int i,j,n=0;

    if(L1==L2){
        for(j=0;j<L1;j++){
            for(i=0;i<L1;i++){
                if(a[j]==b[i]){
                    b[i]=0;
                    n++;
                }
            }
        }
        if(n==L1){
           cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        cout<<"No\n";
    }
    return 0;
}
