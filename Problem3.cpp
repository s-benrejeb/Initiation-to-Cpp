/*
 * Problem3.cpp
 *
 *  Created on: Jan 26, 2016
 *      Author: Sarah
 */

#include <iostream>


int main()
{
	using namespace std;

	int method = 0; //Assign variable to choice of measurement user will make
	float weight = 0;  //Assign variable to weight of user
	float height = 0; //Assign variable to height of user
	float BMI = 0; // Assign variable to BMI value of user
	std::cout<<"Enter your preferred measurement method (1 for lbs/in or 2 for kg/m): ";
	//prompt user to enter the method of measurement
	std::cin>> method; // User chooses method of measurement (1=lbs&in , 2=kg&m)

	if (method == 1) // If the user chooses lbs&in measurement
	{
		std::cout << "Enter your weight in pounds: "; // Prompt user to enter weight
		std::cin >> weight; // User enters weight
		std::cout <<"Enter your height in inches: "; // Prompt user to enter height
		std::cin >> height; // User enters height
		BMI = (weight * 703) / (height * height); // BMI value is calculated
		std::cout <<"Your BMI value is: " << BMI << std::endl; // Indicate BMI value to user

		if ( BMI < 18.5 )
			{
				std::cout <<"You are considered underweight." <<std::endl;
			}
		else if ( BMI < 25.0 )
			{
				std::cout <<"You are considered normal." <<std::endl;
			}
		else if ( BMI < 30.0 )
			{
				std::cout <<"You are considered overweight." <<std::endl;
			}
		else
			{
				std::cout <<"You are considered obese." <<std::endl;
			}

	}
	else if ( method == 2 ) // If the user chooses kg&m measurement
	{
		std::cout <<"Enter your weight in kilogrammes: "; // Prompt user to enter weight
		std::cin >> weight; // User enters weight
		std::cout <<"Enter your height in meters: "; // Prompt user to enter height
		std::cin >> height; //User enters height
		BMI = (weight)/(height * height); // BMI value is calculated
		std::cout << "Your BMI value is: " << BMI <<std::endl; // Indicate BMI value to user

		if ( BMI < 18.5 )
			{
				std::cout <<"You are considered underweight." <<std::endl;
			}
		else if ( BMI < 25.0 )
			{
				std::cout <<"You are considered normal." <<std::endl;
			}
		else if ( BMI < 30.0 )
			{
				std::cout <<"You are considered overweight." <<std::endl;
			}
		else
			{
				std::cout <<"You are considered obese." <<std::endl;
			}

	}
	else // If the user entered a value other than 1 or 2 for method of measurement
	{
		std::cout <<"Please retry." <<std::endl; // Prompt user to start over with correct value (1 or 2)
	}


}


