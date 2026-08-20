//You are given an integer n. 
//Return the integer formed by placing the digits of n in reverse order.
#include<iostream>
using namespace std;
int rev(int n){
    int reverse=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        reverse=(reverse*10)+lastdigit;

    }
    return reverse;

}
int main(){
    int c;
    cout<<"no. of cases ";
    cin>>c;
    for(int i=1;i<=c;i++){
        int num;
        cout<<"enteer the number";
        cout<<endl;
        cin>>num;
        
    
        cout<<rev(num);
    }

    return 0;

}