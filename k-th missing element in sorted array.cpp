#include <bits/stdc++.h> 
using namespace std; 

// Function to find k-th 
// missing element 
int missingK(int a[], int k, 
			int n) 
{ 
	int difference = 0, 
		ans = 0, count = k; 
	bool flag = 0; 
	
	// interating over the array 
	for(int i = 0 ; i < n - 1; i++) 
	{ 
		difference = 0; 
		
		// check if i-th and 
		// (i + 1)-th element 
		// are not consecutive 
		if ((a[i] + 1) != a[i + 1]) 
		{ 
			
			// save their difference 
			difference += 
				(a[i + 1] - a[i]) - 1; 
			cout <<"d=" << difference << endl;
			
			// check for difference 
			// and given k 
			if (difference >= count) 
				{ 
					ans = a[i] + count; 
					cout << a[i] << " + " << count << endl;
					cout << "ans " << ans << endl;
					flag = 1; 
					break; 
				} 
			else{
				count -= difference; 
				cout<< "c=" << count << endl;}
				
		} 
	} 
	
	// if found 
	if(flag) 
		return ans; 
	else
		return -1; 
} 

// Driver code 
int main() 
{ 
	// Input array 
	int a[] = {1, 5, 11, 19}; 
	
	// k-th missing element 
	// to be found in the array 
	int k = 11; 
	int n = sizeof(a) / sizeof(a[0]); 
	
	// calling function to 
	// find missing element 
	int missing = missingK(a, k, n); 
	
	cout << missing << endl; 
	
	return 0; 
} 
