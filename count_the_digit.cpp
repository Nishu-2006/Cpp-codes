#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter";
    cin>>n;
    int digit=0;
    while (n>0){
        n=n/10;
        digit+=1;

    }
    return 0;

}
