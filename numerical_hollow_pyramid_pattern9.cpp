#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=m;j>i;j--){
            cout<<" ";
           }
        for(int j=1;j<=(2*i)-1;j++){
            if(j==1||j==2*i-1||i==m){
                cout<<i;
            }
            else{
                cout<<" ";
            }
           
        }
        cout<<endl;

        }
    }
