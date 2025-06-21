#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=m;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;  
            }
        for(int k=i-1;k>=1;k--){
            cout<<k;
        }
        cout<<endl;

        }
    }
