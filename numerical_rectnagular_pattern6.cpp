#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if (((i==1)||(j==1))||(j==m)||(i==n)){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
        
    }
    return 0;
} 