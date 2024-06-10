						
				/* Program to Read Until Age validate --> example Between 18 and 45  */

#include <iostream>
#include <cmath>
using namespace std;



int main()

{
	int Age;

	while (true) {

		cout << "Enter your age(must be between 18 and 45) : " << endl;
		cin >> Age;

		if (Age >= 18 && Age <= 45) {

			cout << "Valid Age Entered " << endl;

			break;
		}

		else {

			cout << "Invalide Age Entered ! " << endl;
		}

	}

	return 0;

	// Created by @ilyes_Trabelsi

}