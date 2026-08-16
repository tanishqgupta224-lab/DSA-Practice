// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1
#include <iostream>
using namespace std;
void pat11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
    cout<<endl;
    }

}
int main(){
    int num;
    cout<<"enter the value ";
    cin>>num;
    pat11(num);
    return 0;
}