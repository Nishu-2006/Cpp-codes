/*given an array of integer 'a',move all the even integer at the beggining of the array followed by 
all the odd integers.The relative order of odd or even integer does not matter return any array that
satisfy the condition*/
#include<iostream>
#include<vector>
using namespace std;
void sort_odd_even(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if((v[left_ptr]%2!=0)&&(v[right_ptr]%2==0)){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        else if(v[left_ptr]%2==0){
            left_ptr++;
        }
        else if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort_odd_even(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}