//count the number in the digit
#include<iostream>
using namespace  std;
int count(int  n){
    int count=0;
    int ldigit;

    while(n!=0){
        ldigit=n%10;
        n=n/10;
        count+=1;

    }
    
    return count;


}

int main(){

    int num;
    cout<<"enter the value";
    cin>>num;
    
    cout<<count(num);
    return 0;
}