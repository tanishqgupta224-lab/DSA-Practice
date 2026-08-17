//fabonaci
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    int a=0;
    int b=1;
    int c;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n;i++){
        
        c=a+b;
        a=b;
        b=c;
        cout<<b<<endl;
        
    }
}