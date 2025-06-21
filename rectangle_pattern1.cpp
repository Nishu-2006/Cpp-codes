#include <iostream>
using namespace std;

int main() {
    // Printing pattern of
    /*
    ******
    ******
    ******
    */
    int c,r;
    cout<<"enter no. of row and column"<<endl;
    cin>>r;
    cin>>c;

    int i, n; // Declare both variables here
    for (i = 1; i <= r; i++) {
        for (n = 1; n <= c; n++) { // Change n<6 to n<=6
            cout << "*";
        }
        cout << endl; // Use endl instead of "endl"
    }
    
    return 0; // Return 0 at the end of main
}
