//************************************************************
// Jay Rosen
// This program creates a randomly generated math problem, intended to help young students learn addition.
//************************************************************

#include <iostream>
#include <cstdlib>																	    //  Directive to use random function
#include <ctime>																   	    //  Directive to use time function
#include <iomanip>																	    //  Directive to use spacing function
using namespace std;

int main()
{
	unsigned RandomTime = time(0);														// Assign RandomTime to use system time
	srand(RandomTime);																// and generate random numbers from time

	int Num1 = 1 + rand() % 999;														// Assign integer variables for Num1 & Num2, 
	int Num2 = 1 + rand() % 999;														// with a value of any random number from 1 - 999;
	int Sum = Num1 + Num2;																// Assign integer variable for Sum to calculate the sum of the previously assigned numbers

	cout << "\n     Solve the math problem. To check your answer, press ENTER.\n\n";	// Line 1: Display explanation of program and prompts the user to press ENTER when ready to continue
	cout << setw(10) << Num1 << endl;													// Line 2: Display randomly generated value with extra spacing for alignment
	cout << "     + " << setw(3) << Num2 << endl;										// Line 3: Display addition operator with randomly generated value and extra spacing for alignment
	cout << "     -----";																// Line 4: Display a line break to symbolize equal operator
	cin.get();																		// Function to pause program until user presses ENTER key to continue
	cout << setw(10) << Sum << endl;													// Line 5: Display the sum of the randomly generated numbers
	cout << "\n     ";																	// Extra spacing for alignment of closing prompt.
	system("pause");
	return 0;
}