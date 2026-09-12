#include<bits/stdc++.h>
using namespace std;
int  dup(vector<int>& arr){
    int n=arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }

    }
    return i+1;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=dup(arr);
    cout<<"unique count = "<<k<<endl;
    for(int x=0;x<k;x++){
        cout<<arr[x];
    }

    return 0;
}