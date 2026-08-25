//finding factorial using pparametric form
#include<iostream>
using namespace std;
void f(int n,int fact){
    if(n<1){
        cout<<fact;
        return;
    }
    f(n-1,fact*n);
}
int main(){
    int n;
    cin>>n;
    f(n,1);
    return 0;
}