#include<iostream>
#include<vector>
using namespace std;
/*check if we can partition the array into two sub array with equal sum.more formally,
check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array*/
bool partition(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum=0,suffix_sum;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        suffix_sum=total_sum-prefix_sum;
        if (prefix_sum==suffix_sum){
            return true;
        }   
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    if (partition(v)) {
        cout << "Partition possible" << endl;} 
    else {
        cout << "No partition possible" << endl;
    }
    return 0;
}

