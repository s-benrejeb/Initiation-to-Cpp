/*
 * Assignment.cpp
 *
 *  Created on: Jan 22, 2016
 *      Author: Sarah
 */
#include <iostream>

int main()
{
	int number = 0; //variable naming
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	int digit4 = 0;
	int digit5 = 0;

	std::cout <<"Enter five-digit number: "; //prompt user to enter appropriate value
	std::cin >> number; //user enters a value

	if ( number < 10000 ){ //the number contains 4-digits or less

		std::cout <<"The number is too small!" << std::endl; //display error message
	}
	else if (number >= 100000 ) { //the number contains 6-digits or more

			std::cout <<"The number is too big!!" << std::endl; //display error message
		}
	else { //the number contains exactly 5-digits
	digit1 = number / 10000; //find first digit of the number
	digit2 = (number / 1000) % 10; //find second digit of the number
	digit3 = (number / 100) % 10; //find third digit of the number
	digit4 = (number / 10) % 10; //find fourth digit of the number
	digit5 = number % 10; //find fifth digit of the number

	std::cout <<digit1 <<"   " <<digit2 <<"   " <<digit3 <<"   " <<digit4 <<"   " <<digit5 <<std::endl;
	} //print out the five digits separated by 3 spaces each


}
