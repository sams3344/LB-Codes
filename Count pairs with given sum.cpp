/*
mf=7  ms=1
mf=-1  ms=1
mf=1  ms=1
mf=5  ms=2
 m[sum-arr[i]] =2
count =2
 m[sum-arr[i]] =1
count =3
 m[sum-arr[i]] =1
count =4
 m[sum-arr[i]] =1
count =5
 m[sum-arr[i]] =1
count =6
Count of pairs is 3
*/

// C++ implementation of simple method to find count of 
// pairs with given sum. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns number of pairs in arr[0..n-1] with sum equal 
// to 'sum' 
int getPairsCount(int arr[], int n, int sum) 
{ 
	unordered_map<int, int> m; 

	// Store counts of all elements in map m 
	for (int i=0; i<n; i++) 
		m[arr[i]]++; 
    for (auto i : m)
        cout << "mf=" << i.first << "  "<< "ms="<< i.second << endl; 


	int twice_count = 0; 

	// iterate through each element and increment the 
	// count (Notice that every pair is counted twice) 
	for (int i=0; i<n; i++) 
	{   cout << " m[sum-arr[i]] =" <<  m[sum-arr[i]] << endl;
		twice_count += m[sum-arr[i]]; 
		cout << "count =" << twice_count << endl;

		// if (arr[i], arr[i]) pair satisfies the condition, 
		// then we need to ensure that the count is 
		// decreased by one such that the (arr[i], arr[i]) 
		// pair is not considered 
		if (sum-arr[i] == arr[i]) {
		cout << "arr[i] =" << arr[i] << endl;           
			twice_count--; }
	} 
	// ex: sum =10, let map has 5 5 5 ,if we check for 5,10-5 =5,  then m[sum - arr[i]] = 3, but you should only cosnider 2 5s not 3 5s

	// return the half of twice_count 
	return twice_count/2; 
} 

// Driver function to test the above function 
int main() 
{ 
	int arr[] = {1, 5, 7, -1, 5} ; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int sum = 6; 
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, sum); 
	return 0; 
} 
