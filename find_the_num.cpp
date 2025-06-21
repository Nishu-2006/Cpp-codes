#include<iostream>
using namespace std;
int main(){
    int n=9,flag=0;
    int numb[]={2,3,9,4,3};
    int index=0;
    int size=(sizeof(numb)/sizeof(numb[0]));
    for(int idx=0;idx<size;idx++){
        if (numb[idx]==n){
            cout<<idx;
            flag=1;
            break;}
        

        
    if (flag==0){
        cout<<-1;
    }
}

}