#include<iostream>
using namespace std;
int main(){
    long long n;
    cout<<"enter the number";
    cin>>n;
    int d=0;
    long long reverse=0;
    while (n>0){
        reverse*=10;
        d=n%10;
        n/=10;
        reverse+=d;
    }
    cout<<reverse;

}
