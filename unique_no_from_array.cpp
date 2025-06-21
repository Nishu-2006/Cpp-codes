#include<iostream>
using namespace std;
int main(){
    int array[]={2,2,5,3,5,6,1,3,1};
    int size=9;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]==array[j]){
                array[i]=-1;
                array[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if (array[i]>0){
            cout<<array[i];
        }


    }
}