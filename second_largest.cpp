#include<iostream>
using namespace std;
int largestindex(int array[],int size){
    int maxindex=0;
    for(int i=1;i<size;i++){
        if (array[i]>array[maxindex]){
            maxindex=i;
        }   
    }
    return maxindex;
}
int main(){
    int array[]={3,4,5,6,7,3,4};
    int largestind=largestindex(array,7);
    array[largestind]=-1;
    int secondlargestind=largestindex(array,7);
    cout<<array[secondlargestind];

}