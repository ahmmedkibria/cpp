#include<iostream>
using namespace std;

class Student{
public:
    string nm;
    int cls;
    char s;
    int id;
    
    
};


int main()
{
  
    int N;
    cin >> N;
    
    Student arr[N];
    
    for (int i=0; i<N; i++){
        
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }
    
    int i=0 , j= N-1;
    
    while (i<j){
        swap( arr[i].s,arr[j].s);
        i++;
        j--;
    }
    
    for( int i=0; i<N; i++){
        cout <<arr[i].nm <<" "<< arr[i].cls << " "<< arr[i].s<< " " << arr[i].id << endl;
    }
    

    return 0;
}
