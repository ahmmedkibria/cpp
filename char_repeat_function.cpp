

// code forces : H. N Times
// Given a number 𝑁 and a character 𝐶. Print the character(𝐶) 𝑁 times.

// Note: Solve this problem using function.

// input
// The first line contains a number 𝑇 (1≤𝑇≤50) the number of test cases.
// Next 𝑇 lines contains a number 𝑁 and a character 𝐶 (1≤𝑁≤100).

// Output
// Print 𝑇 lines, for every line print the character(𝐶) 𝑁 times separated by space.


// input :

// 2
// 1 n
// 5 O

// output :
// n
// O O O O O

// input :
// 1
// 8 z

// output :
// z z z z z z z z


#include<iostream>
using namespace std;

void print_character ( int N, char C){
    for ( int i=0; i<N; i++){
        cout << C << " ";
    }
    cout << endl;
    
    
    
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--){
        int N;
        cin >> N;
        
        char C;
        cin >> C;
        
        print_character( N, C);
        
        
    }
    
    
    
    return 0;
}

// coded another way , both got accepted by codeforces

//include<iostream>
//using namespace std;
// 
//int main() {
// int t;
// cin >> t;
//while (t --){
// 
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
// 
//    for (int i= 0; i<n; i++){
//      cout << s << " ";
//    }
//    cout << endl;
//}
//return 0;
