#include<bits/stdc++.h>
using namespace std;
int linearSearch(int array[],int n,int key){
for(int i=0;i<n;i++){
    if(array[i]==key){
        return i;
    }

 }
return -1;
}

int main (){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    int output = linearSearch(array,n,key);
    if (output!=-1)
    {
        cout<<output<<endl;
    }
    else cout<<"NULL"<<endl;


return 0;
}
