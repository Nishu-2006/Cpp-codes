//Rotate the given array 'a' by k steps,where k is non negative NOTE: k can be greater than n as well where n is the size of array 'a'.
#include<iostream>
using namespace std;
int main(){
    int array[]={3,6,7,8,3,3};
    int n=6;
    int k=2;
    int j=0;
    k=k%n; 
    int ansarray[6];
    for (int i=n-k;i<n;i++){
        ansarray[j++]=array[i]; 
    }
    for (int i=0;i<n-k;i++){
        ansarray[j++]=array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";


    }
}




