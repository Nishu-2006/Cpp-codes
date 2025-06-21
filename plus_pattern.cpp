#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an odd number:";
    cin>>n;
    if (n%2!=0){
        int m=n/2;
        for (int i=1;i<=n;i++){
            for(int k=1;k<=n;k++){
                if (i==(m+1)||k==(m+1)){
                    cout<<"*";}
                else{
                    cout<<" ";
                    }

                }
            cout<<endl;}
        }
    else{
        cout<<"error!!please enter odd number";
    }
    
    
    } 