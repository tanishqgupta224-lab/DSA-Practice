//check the numnber is armstrong or not
#include <iostream>
using namespace std;
void check(int n){
    int dup=n;
    int arms=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        arms=arms+(lastdigit*lastdigit*lastdigit);

    }
    if(arms==dup){
        cout<<"the number is armstrong ";
    }
    else{
        cout<<"not armstrong";
    }


}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    check(num);


    return 0;
}