/* Task 1 : 
Fundamentals of Programming  
This code is written by Meer Muhammad Ansari  
BS-1(AI) 
Week 9
Date: 4th November, 2023 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int n;
	cout << "Enter Size of Array : ";
	cin >> n;
	
	int array[n];
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	
	cout << "Enter " << n << " elements of Array ";
	
	for ( int i = 0; i < n; i++){
		cout << "\nEnter " << i+1 << " element : ";
		cin >> array[i];
		
		sum+=array[i];
		if ( array[i] > max ){
			max = array[i];
		}
		
		if ( array[i] < min ){
			min = array[i];
		}
	}
	
	float avg = static_cast<float> (sum) / n;
	cout << "\nSum : " << sum;
	cout << "\nAverage : " << avg;
	cout << "\nMaximum : " << max;
	cout << "\nMinimum : " << min;
	
return 0;
}


