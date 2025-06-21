#include<iostream>
using namespace std;
int main(){
    int array[]={1,9,8,7,2,3,5,6,4};
    int size=9;
    int triplets=0;
    int tsum=9;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if (array[i]+array[j]+array[k]==tsum){
                    cout<<"("<<array[i]<<","<<array[j]<<","<<array[k]<<")"<<endl;

                    triplets++;
                   }
            }
        } 
    }
    cout<<triplets;
}  