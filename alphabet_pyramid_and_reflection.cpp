#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int s=1;s<=(n-i); s++){
            cout<<" ";
        }
        for(int k=0; k<((2*i)-1); k++){
            char a=(char)('A' + k);
            cout<<a;
        }
        cout<<endl;
        }
    for (int i=n-1; i>=1; i--){
        for(int s=(n-i);s>=1; s--){
            cout<<" ";
        }
        for(int k=0; k<((2*i)-1); k++){
            char a=(char)('A' + k);
            cout<<a;
        }
    
        cout<<endl;
    }
        


    }


