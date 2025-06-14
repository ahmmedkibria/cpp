

// set precission sets the digits after decimal

#include<iostream>
#include<iomanip> // required for set precission
using namespace std;

int main() {

    double d = 23.45678;
    cout << fixed << setprecision(3) << d << endl;

    return 0;
}
