/*
 * Problem2.cpp
 *
 *  Created on: Jan 26, 2016
 *      Author: Sarah
 */


#include <iostream>


int main()
{
	int square = 0; //Assign variable to square of number
	int cube = 0; //Assign variable to cube of number

	std::cout <<"integer" <<"	" <<"square" <<"	" <<"cube" <<std::endl; //Print categories for table
																			//with appropriate spacing
		for ( int a = 0 ; a < 11 ; a = a + 1 ){ // Going through all integers from 0 to 10 inclusive
												// and applying the following statements for each integer
			square = a * a; //Assign the square of integers to the variable "square"
			cube = a * a * a; //Assign the cube of integers to the variable "cube"

			std::cout <<a <<"	" <<square <<"	" <<cube <<std::endl; //Print every integer, its square
																	// and cube on a single line each
	}
}


