
// CODE FORCES :  V. Replace Word

//  Given a string 𝑆. Print 𝑆 after replacing every sub-string that is equal to "EGYPT" with space.

// Input
// Only one line contains a string 𝑆 (1≤|𝑆|≤103) where |S| is the length of the string and
// it consists of only uppercase English letters.

// Output
// Print the result as required above.

// Examples

// input : BRITISHEGYPTGHANA
// output: BRITISH GHANA

// input : ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
// output: ITALYKOREA  ALGERIA Z



#include<iostream>
#include<sstream>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (1){
        
        int index = s.find("EGYPT");
        if ( index != -1 ){
            s.erase ( index, 5);
            s.insert ( index, " ");
            
        }else {
            break;
        }
        
    }
    cout << s << endl;
    
    
    return 0;
}
