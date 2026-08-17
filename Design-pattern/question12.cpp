// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
#include<iostream>
using namespace std;
void pat11(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=n-i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<"*";
        }
    cout<<endl;
        
    }




}
void pat11nx(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }


}
int main(){
    int num;
    cin>>num;
    pat11(num);
    pat11nx(num);
    return 0;
}
