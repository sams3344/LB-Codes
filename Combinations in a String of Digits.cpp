// CPP program to find all combination of 
// numbers from a given string of digits 
// using bit algorithm used same logic 
// as to print power set of string 
#include <bits/stdc++.h> 
using namespace std; 


int z =1;
// function to print combinations of 
// numbers in given input string 
void printCombinations(char s[]){ 
	
	// find length of char array 
	int l = strlen(s); 

	// we can give space between characters 
	// ex. ('1' & '2') or ('2' & '3') or 
	// ('3' & '4') or ('3' & '4') or all 
	// that`s why here we have maximum 
	// space length - 1 
	for(int i = 0; i < pow(2, l - 1); i++){ 
		int k = i, x = 0; 
		
		// first character will be printed 
		// as well 
		cout << s[x]; 
		x++; 
		for(int j = 0; j < strlen(s) - 1; j++){ 
			cout <<endl << "enter j " << z++; 
			// if bit is set, means provide 
			// space 
			if(k & 1){
			    cout << endl << "en" << endl;
				cout << " "; 
			}
			cout <<endl<< "ok = " << k  <<endl;
			k = k >> 1; 
			cout << "nk = " << k <<endl ;
			cout << s[x]; 
			
			// always increment index of 
			// input string 
			x++; 
			cout << endl << "x= " << x << endl;
		} 
		cout << "\n"; 
	} 
} 

// driver code 
int main() { 

	char input[] = "1214"; 
	printCombinations(input); 
	
	return 0; 
} 
// This code is contributed by PRINCE Gupta 2 
