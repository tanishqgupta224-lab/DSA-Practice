#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>arr={1,1,2,2,3,3,4,4};
    vector <int>arrt={5,6,6,7,8,8};
    set<int>st;
    int n=arr.size();
    int m=arrt.size();
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int j=0;j<m;j++){
        st.insert(arrt[j]);

    }
    for(int x:st){
        cout<<x<<" ";
    }


    return 0;
}