/*given an array 'a' sorted in non decreasing order return an array 
of the squares of each number sorted in non decreasing order*/
#include<iostream>
#include<vector>
using namespace std;
void running_sum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    }

int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    running_sum(v);
    
    return 0;
   }

