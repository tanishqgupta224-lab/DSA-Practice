#include<iostream>
using namespace std;
void divisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }

}
int main(){
    int num;
    cout<<"enter the value ";
    cin>>num;
    divisor(num);
    return 0;
}//time complexity of the solution is O(sqrt(n))
