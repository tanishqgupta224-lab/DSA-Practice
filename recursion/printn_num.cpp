//print n number using recursion>
#include <iostream>
using namespace std;
int count=0;
void print(){
    if(count==5){
        return;
    }
    cout<<count<<endl;
    count++;
    print();
}
int main(){
    print();
    return 0;
}