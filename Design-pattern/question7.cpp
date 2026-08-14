// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;

void pat7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }

    cout<<endl;

    }

}
int main(){
    int num;

    cout<<"enter the value ";
    cin>>num;
    pat7(num);

    return 0;
}