#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    switch (x%2){  // we get only two cases here, so
        case 0:
            cout << "even\n" << endl;
            break;
        case 1:
            cout << "odd\n" << endl;
            break;
            
    }
    
    return 0;
}
