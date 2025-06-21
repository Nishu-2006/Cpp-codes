/*given two vector arr1 and arr2 of size m and n sorted in increasing order.
 merge the two arrays into a single sorted array of size m+n */
 #include<iostream>
 #include<vector>
 using namespace std;
 void sort_2array(vector<int>&v1,vector<int>&v2){
    int arr1=0;
    int arr2=0;
    vector<int>arr;
    while((arr1<v1.size())&&(arr2<v2.size())){
        if (v1[arr1]>v2[arr2]){
            arr.push_back(v2[arr2]);
            arr2++;
        }
        else if (v2[arr2]>v1[arr1]){
            arr.push_back(v1[arr1]);
            arr1++;
        } 
    }
    while (arr1 < v1.size()) {
        arr.push_back(v1[arr1]);
        arr1++;
    }

    // Add the remaining elements from v2, if any
    while (arr2 < v2.size()) {
        arr.push_back(v2[arr2]);
        arr2++;
    }
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
 
    }


 }
 int main(){
    vector <int> v1={2,7,9,12,15};
    vector <int> v2={3,4,8};
    sort_2array(v1,v2);
    
    
 }
