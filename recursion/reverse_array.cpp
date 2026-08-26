//reverse array using recursion and two pointer
#include <iostream>
using namespace std;
int arr[]={1,2,3,4,5,6};
void f(int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    f(l+1,r-1);
}
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    f(0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}