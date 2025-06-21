#include<iostream>
#include<vector>
using namespace std;
/*given an array of integrs of size n. answer a queries where you need to
 print the sum of values in a given range of indices from i to r(both included) 
 NOTE:The values of l and r in queries follow 1-based indexing*/
 int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    vector<int>v(n+1,0);
    cout<<"enter values of n:";
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cout<<"enter l and r:";
        cin>>l>>r;
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
 }