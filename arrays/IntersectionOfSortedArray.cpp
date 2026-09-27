#include<bits/stdc++.h>
using namespace std;
vector<int>result(vector<int>&a1,vector<int>&a2){
    vector<int> ans;
    int n=a1.size();
    int m=a2.size();
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            i++;
        }
        else if(a1[i]>a2[j]){
            j++;
        }
        else{
            ans.push_back(a1[i]);
            i++;
            j++;


        }
    }
    return ans;


}
int main(){
    vector<int>a1={1,2,2,3,4,5};
    vector<int>a2={1,2,2,4,6,7};
    vector<int>r=result(a1,a2);
    for(int x:r){
        cout<<x<<" ";
    }    
    return 0;
}