/* Task 2 : 
Fundamentals of Programming  
This code is written by Meer Muhammad Ansari  
BS-1(AI) 
Week 9
Date: 4th November, 2023 */
#include <iostream>
using namespace std;


int main() {
    const int size = 10;
    int originalArray[size];
    
    cout << "Enter Numbers of Array \n";
    for ( int i = 0; i < 10; i++){
    	cout << "Enter Number " << i+1 << " : ";
    	cin >> originalArray[i];
	}
    

    int middle = size / 2; 

    int leftArray[middle];
    int rightArray[size - middle];

   
    for (int i = 0; i < middle; i++) {
        leftArray[i] = originalArray[i];
    }

    for (int i = middle; i < size; i++) {
        rightArray[i - middle] = originalArray[i];
    }

    
    cout << "Left Array: ";
    for (int i = 0; i < middle; i++) {
        cout << leftArray[i] << " ";
    }
    cout << endl;

    cout << "Right Array: ";
    for (int i = 0; i < size - middle; i++) {
        cout << rightArray[i] << " ";
    }
    cout << endl;

    return 0;
}

