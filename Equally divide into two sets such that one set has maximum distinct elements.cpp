// C++ program to equally divide n elements 
// into two sets such that second set has 
// maximum distinct elements. 
#include <algorithm> 
#include <iostream> 
using namespace std; 

int distribution(int arr[], int n)    
{ 
	sort(arr, arr + n); 
	int count = 1; 
	for (int i = 1; i < n; i++) 
		if (arr[i] > arr[i - 1]) 
			count++; 
	
	return min(count, n / 2);           
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 1, 2, 1, 3, 4 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << distribution(arr, n) << endl; 
	return 0; 
} 



/*
if we have 1 1 1 2 2 2, distinct elts = 2, but half = 3, we can only take 2 as all elts mustt be unique
*/
