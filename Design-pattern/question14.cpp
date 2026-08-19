#include <iostream>
using namespace std;

void pat14(int num){
    for(int i=0;i<=num;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=2*(num-i);j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }

    cout<<endl;

    }

}
int main(){
    int n;
    cin>>n;
    pat14(n);


    return 0;
}

