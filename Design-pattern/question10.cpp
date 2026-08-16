// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// *   *
// *   *
// *   *
// *****
#include <iostream>
using namespace std;

void pat10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n ||j==n||i==1||j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }

}
int main(){
    int num;
    cout<<"enter the value";
    cin>>num;
    pat10(num);
    return 0;
}