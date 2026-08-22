//to check the number is prime or not
#include<iostream>
using namespace std;
void prime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count+=1;
            if(i!=n/i){
                count+=1;
            }
        }
    }
    if(count==2){
        cout<<"the number is prime";
    }
    else{
        cout<<"not prime";
    }

}
int main(){
    int num;
    cout<<"enter the value";
    cin>>num;
    prime(num);
    return 0;
}