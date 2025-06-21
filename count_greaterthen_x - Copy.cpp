//count the number of  element strictly greater than X 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int x,count=0;
    cout<<"enter a number";
    cin>>x;
    for(int i=0;i<5;i++){
        if (v[i]>x){
            count+=1; 
        }
    }
    if(count!=0){
        cout<<count;}
    else cout<<"not found";    
    




}