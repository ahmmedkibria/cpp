#include<iostream>
using namespace std;

// Make a class named Student. Write a program to take a positive integer N as input
//and make an Student array of size N.
// Your task is to reverse the array and print the array of Student.

class Student {
    public :
    string name;
    int roll ;
    int marks;
};

int main() {
    int n;
    cin >> n;
    
    Student arr[n];
    
    for (int i=0; i<n; i++){
        
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        
    }
    
    int left = 0;
    int right = n-1;
    while ( left < right){
        
        Student temp = arr[left];
        arr[left] = arr [right];
        arr[right] = temp;
        left++;
        right--;
    }
    
    for (int i=0; i<n; i++){
        cout << arr[i].name << " " << arr[i].roll<<" "<<arr[i].marks<<" " << endl;
    }
    
    return 0;
}
