#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    int bin=0;
    int place=1;
    while (n>0){ 
        int rem=n%2;
        bin+=rem*place;
        place*=10;
        n/=2;        
    }
    cout<<bin;

}
