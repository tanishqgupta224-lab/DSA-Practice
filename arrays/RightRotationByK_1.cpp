//best case solution

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=1;
    vector<int>arr={1,2,3,4,5,6};
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}