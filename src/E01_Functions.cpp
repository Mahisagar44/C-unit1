//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int mid;
	mid = x2 - x1;
	mid = x1 + (mid / 2);

	return mid;
}

//
// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	int sum;
	while (num1 > 10) {
		num1 = num1 / 10;
	}
	while (num2 > 10) {
		num2 = num2 / 10;
	}
	sum = num1 + num2;
    return sum;
}
//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int Counter, add = 0;
	for (Counter = 99; Counter >= 0; Counter--) {
		add = num1[Counter] + num2[Counter];
		if (add > 9) {
			num1[Counter - 1] = num1[Counter - 1] + (add / 10);
			sum[Counter + 1] = add % 10;
		}
		else {
			sum[Counter + 1] = add;
		}
	}
	sum[0] = add / 10;
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
		
}
