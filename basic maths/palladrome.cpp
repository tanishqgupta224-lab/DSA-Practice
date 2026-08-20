//palladrome of number
#include <iostream>
using namespace std;
void pall(int n){
    int dup=n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        rev=(rev*10)+lastdigit;
    }
    if(rev==dup){
        cout<<"it's a palladrome";
    }
    else{
        cout<<"not a palladrome";
    }

    
    
}
int main(){
    int num;
    cout<<"enter the number of ";
    cin>>num;
    pall(num);
    return 0;
}