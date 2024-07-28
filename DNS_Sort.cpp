#include<bits/stdc++.h>
using namespace std;
void swap(int array[],int i,int j){
int temp=array[i];
array[i]=array[j];
array[j]=temp;
 }
void DnfSrt(int array[],int n){
int low=0;
int mid=0;
int high=n-1;
while(mid<=high){
    if(array[mid]==0){
        swap(array,low,mid);
        low++;mid++;
    }
    else if(array[mid]==1){
        mid++;
    }
    else{
        swap(array,mid,high);
        high--;
}
    }
  }
int main (){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    DnfSrt(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
}


    return 0;
}
