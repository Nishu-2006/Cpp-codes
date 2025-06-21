#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for (int  i = 1; i <=m; i++){
        for (int j = 1; j <=n; j++){
            if ((i+j)%2==1){
                cout<<"2";}
            else{
                cout<<"1";
            }
            
        }
        cout<<endl;
    
        
    }

    
    
}