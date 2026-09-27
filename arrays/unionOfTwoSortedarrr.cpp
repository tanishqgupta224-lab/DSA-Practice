#include <bits/stdc++.h>
using namespace std;
vector<int> uniont(vector<int>&a1,vector<int>&a2){
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    vector<int>unionarr;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            if(unionarr.size()==0 || unionarr.back()!=a1[i]){
                unionarr.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0 || unionarr.back()!=a2[j]){
                unionarr.push_back(a2[j]);
            }
            j++;
            
        }
    }
    while(i<n1){
        if(unionarr.size()==0 || unionarr.back()!=a1[i]){
            unionarr.push_back(a1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionarr.size()==0 || unionarr.back()!=a2[j]){
            unionarr.push_back(a2[j]);
        }
        j++;
        
    }
    return unionarr;
}

int main() {
	vector<int>a1={1,2,3,3,4,4,5};
	vector<int>a2={1,2,3,3,4,5,6};
    vector<int>result=uniont(a1,a2);
    for(int val:result){
        cout<<val<<" ";
    }
	return 0;

}
