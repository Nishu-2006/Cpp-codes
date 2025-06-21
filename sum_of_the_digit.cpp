
#include <iostream>
using namespace std;

int main() {
    long long n;
    int digit;
    cin>>n;
    int sum=0;
    while (n>0){
        digit=n%10;
        n/=10;
        sum+=digit;
    }
    cout<<sum;

    return 0;
}