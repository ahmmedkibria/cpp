
#include<iostream>
using namespace std;

int main() {
   
    int day;
    cin >> day;
    
    switch ( day ){
            
        case 1:// this works like   if( day == 1)
            cout << "Saturday\n";
            break ;// otherwise , It will keep running all cases below the matched one
            
        case 2:// this line works like else if ( day == 2)
            cout << "Saturday\n";
            break;
        case 3:
            cout << "Saturday\n";
            break;
            
        default:// like else ( when it doesn't match any cases  ( handled unexpected inputs )
            cout << "no match\n";
    }
    return 0;
}
// notes : * switch only works with integers, char, or enum types. Not strings.

/*Use switch when:
•    You have one variable
•    You want to match it against multiple specific values
•    Each case does a different thing */

