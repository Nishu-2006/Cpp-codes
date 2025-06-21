//find the last occurence of an element X in a given array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int x,idx=-1;
    cout<<"enter a number";
    cin>>x;
    for(int i=0;i<5;i++){
        if (v[i]==x){
            idx=i; 
        }
    }
    if(idx!=-1){
        cout<<idx;}
    else cout<<"not found";    
    




}