#include<bits/stdc++.h>
using namespace  std;
int slargest(vector<int>arr,int n){
    int largest=arr[0];
    int slarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slarge=largest;
            largest=arr[i];
        }
        else if(arr[i]>slarge && arr[i]!=largest){
            slarge=arr[i];
        }
    }
    
    return slarge;


}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<slargest(arr,n);

    return 0;
}
