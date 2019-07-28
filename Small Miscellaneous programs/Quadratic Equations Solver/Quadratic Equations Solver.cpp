// Quadratic Equations Solver.cpp : Defines the entry point for the console application.
// This program solves Quadratic equations

//Include all necessary headers 
#include "stdafx.h"//Visual studio thing.
#include <iostream>//Allows Input and Output
#include <cmath>//This allows you to use the sqrt() function (SQUARE ROOTS) 

using namespace std; //Use the standard namespace so you don't have to use "std::" behind every cout and cin statement

int main()//Main program
{
	//Initialize variables. (Assigned zero to all of them to avoid having a random value assigned to them by the compiler).
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;

	cout << "This program solves quadratic equations. Using the Quadratic Formula" << endl;//Letting the user know what does the program do

	//Next line asks the user to rearrange the equation to standard form to be able to identify the values to plug in
	//into the quadratic formula later.
	cout << "Please arrange your equation in standard form: ax^2 + bx + c = 0" << endl; 
	/*Next lines takes the values (via keyboard input) of the coefficients and constant to process the solutions
	of the equations.*/
	cout<<"Please enter the values for coefficient \"a\"" << endl;//Print to screen letting the user know what data to enter
	cin >> a;//keyboard input
	cout << "Please enter the value for coefficient \"b\"" << endl;//Print to screen letting the user know what data to enter
	cin >> b;//keyboard input
	cout << "Please enter the value for constant \"c\""<<endl;//Print to screen letting the user know what data to enter
	cout<<"(If there is no constant in the equation set this value to 0)" << endl;//Print to screen letting the user know what data to enter
	cin >> c;//keyboard input

	//Processing the solutions for the equations
	x1 = ((b*-1.0) + sqrt((b*b) - (4.0*a*c))) / (2.0*a);//Quadratic formula addition
	x2 = ((b*-1.0) - sqrt((b*b) - (4.0*a*c))) / (2.0*a);//Quadratic formula subtraction
	
	//Next lines checks whether the solutions for the equation are real or not
	if (isnan(x1) == true & isnan(x2) == true)//If the values of x are NOT real do...
	{
		cout << "The equation has no real solutions" << endl;//Print this to the screen
	}
	else//Any other case different than the previous do...
	{
		cout << "X=" << x1 << " and X=" << x2 << " are the solutions of the equation" << endl;//Prints the solutions to the screen
	}
    return 0;//Return 0 to indicate that the program ran successfully
}

