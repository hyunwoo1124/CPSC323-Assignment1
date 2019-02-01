/*
CPSC 323 Compilers
Assignment 1
Author: Mike Cheng, Raymond Laurente, Hyun Woo Kim
Professor: Anthony Le
Description: Authors will create a lexical analysis tester
			 that detects tokens from the analysis and display
			 lexemes using C++
*/

//libraries
#include <iostream>
#include <string>
using namespace std;
/*
probably need a struct to old tokens
	1. keyword
	2. separator
	3. identifier
	4. operator
	5. real
	6. keyword
	8. maybe more
*/
//Function Prototype
void displayOutput();
int main() {

	system("pause");
	return 0;
}

void displayOutput() {
	cout << " token_________________Lexeme\n";
	cout << "keyword\n";
	cout << "separator\n";
	cout << "identifier\n";
	cout << "operator\n";
	cout << "real\n";
}