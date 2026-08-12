// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
void pat5(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
    cout<<endl;
    }

}
int main(){
    int val;
    cout<<"enter the  value";
    cin>>val;
    pat5(val);
    return 0;
    

    return 0;
}

