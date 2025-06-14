#include<iostream>
using namespace std;

int main() {
    //int x;
    //cin >> x;
    //cin.ignore();
    char s[100];
    cin>> s;
    cout << " input : Hello world "<< endl;
    cout << " output: " << s << "    ---> didn't print after space "<<endl;
    cout <<"to handle this we will use cin.getline( char, size) "<< endl;
    cout << " use cin.ignore() if there are inputs in two lines  "<< endl;
    
    return 0;
}
