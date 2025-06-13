#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int T; 
    cin >> T; 
    
    for (int i=0; i<T; i++) {
        string S, X; 
        cin >> S >> X; 
        
        int index =S.find(X); 
        
        while ( index !=-1){
            S.erase ( index, X.size());
            S.insert (index, "#");
            index = S.find(X);
        }
          cout << S << endl; 
    }
   


    return 0;
}
