#include<bits/stdc++.h>
using namespace std;
void move(vector<int>& arr){
    int n=arr.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return ;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move(arr);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}
