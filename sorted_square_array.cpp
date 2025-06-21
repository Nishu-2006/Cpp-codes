/*given an array 'a' sorted in non decreasing order return an array 
of the squares of each number sorted in non decreasing order*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorted_square_array(vector<int> &v){
    vector<int>ans(v.size());
    int left_ptr=0;
    int right_ptr=v.size()-1;
    int index = v.size() - 1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])>abs(v[right_ptr])){
            ans[index--]=(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        else{
            ans[index--]=(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }   
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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
    sorted_square_array(v);
    
    return 0;
   }

