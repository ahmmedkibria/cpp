#include<iostream>
#include<algorithm> // req for min
using namespace std;

int main() {
    int a,b;
    cin>> a>> b;
    
    cout << min(a,b)<< endl;
    cout << max(a,b)<< endl;
    
    cout << "____"<< endl;
    
    cout << " min from many numbers : "<< min ({3, 4 , 5}) << endl;
    cout << " min from many numbers : " <<max ({3, 4 , 5}) << endl;
    
    cout << "swapping" << endl;
    
    // normally we swap
    
    int temp = a;
    a = b;
    b = temp ;
    cout << a << " " << b << endl;
    
    cout << "swapping again using built in swap function" << endl;
    
    swap( a, b );
    cout << a << " "<< b <<endl;
    
    
    return 0;
}
