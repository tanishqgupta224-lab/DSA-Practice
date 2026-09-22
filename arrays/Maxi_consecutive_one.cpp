#include<bits/stdc++.h>
using namespace std;
int maxnum(vector<int>& arr){
    int n=arr.size();
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            
            maxi=max(maxi,count);


        }
        else{
            count=0;
        }

    }
    return maxi ;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxnum(arr);
    
    return 0;

}