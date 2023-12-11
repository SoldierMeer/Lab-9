/* Task 3 : 
Fundamentals of Programming  
This code is written by Meer Muhammad Ansari  
BS-1(AI) 
Week 9
Date: 4th November, 2023 */
#include <iostream>
using namespace std;
int main() {
    int array[10];

    cout << "Enter 10 numbers for the array:\n";
    
    for (int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
    }

    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (array[j] < array[j + 1]) {
            	
                swap(array[j],array[j+1]);
            }
        }
    }

   cout << "Sorted Array: ";
    for (int i = 0; i < 10; i++) {
       cout << array[i] << " ";
    }
    
    return 0;
}

