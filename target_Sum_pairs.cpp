#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,5,6,1};
    int size=5;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]+array[j]==7){
                pairs++;
            }
        }
    }
    cout<<pairs;
}  