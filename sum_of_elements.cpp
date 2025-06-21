#include<iostream>
using namespace std;
int main(){
    int numb[]={2,3,4,4,3};
    int sum=0;
    for(int idx=0;idx<5;idx++){
        sum+=numb[idx];
    }
    cout<<sum;
}