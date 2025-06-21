/*given a vector arr[]started in increasing order of n size and an integer x,
find if there exist a pair in the array whose absolute difference is exactly x.*/
 #include<iostream>
 #include<vector>
 using namespace std;
 void pair_sum(vector<int>&v,int x){
    int flag=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if (abs(v[i]-v[j])==x){
                flag=1;
            }

        }
    }
    if (flag==0){
        cout<<"no";
    } 
    else {
        cout<<"yes"; }
 }
 int main(){
    vector<int>v1={4,5,6,8,10,17};
    int x=7;
    pair_sum(v1,x);
 }

 