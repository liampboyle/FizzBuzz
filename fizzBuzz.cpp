/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment:
 * Filename:
 *
 * Purpose:	"Write a program that prints the numbers from 1 to 100.
 * But for multiples of three print “Fizz” instead of the number and for
 * the multiples of five print “Buzz”. For numbers which are multiples
 * of both three and five print “FizzBuzz”."
 *
 * Compiled for:	Ubuntu Linux 11.10
 * Compiled with:	g++ 4.6.1
 * IDE:				Geany 0.20
 * 15 Jan 2012
 * *********************************************************************
 */
 
// Include and Using Statements
#include<iostream>
// #include<cstdlib> //this include was not needed for this program

using namespace std;

// Global Variable Declarations
int ExitStatusVar = 0;

int main()
{
	// Main function variable declarations
		// pass
	
	// Main function code body
	
	for (int i=1; i<=100; i++)
	{
		if (i%3==0 && i%5==0)
			cout << "FizzBuzz" << endl;
		else if (i%5==0)
			cout << "Buzz" << endl;
		else if (i%3==0)
			cout << "Fizz" << endl;
		else
			cout << i << endl;
	}
	
	return ExitStatusVar;
}
