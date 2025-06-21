#include <iostream>
using namespace std;

int main() {
    // Printing pattern of
    /*
    ******
    ******
    ******
    */

    int i, n; // Declare both variables here
    for (i = 1; i <= 3; i++) {
        for (n = 1; n <= 6; n++) { // Change n<6 to n<=6
            cout << "*";
        }
        cout << endl; // Use endl instead of "endl"
    }
    
    return 0; // Return 0 at the end of main
}
