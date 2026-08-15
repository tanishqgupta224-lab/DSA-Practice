// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
void pat9(int n){
    for (int i=1;i<=2*n-1;i++){
        int star=i;
        if(n>star){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        
        }
        else{
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
    cout<<endl;

    }

}
int main(){
    int num;
    cout<<"enter the value";
    cin>>num;
    pat9(num);


    return 0;
}