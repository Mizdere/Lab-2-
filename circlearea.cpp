// This program will output the circumference and area
// of the circle with a given radius.

// Last Modified Date: 3/26/2024

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	double area;								// definition of area of circle 
	int circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
	cout << "The circumference of the circle is " << circumference << "\n";
	// Fill in the code for the cout statement that will output (with description)
	cout << "The area of the circle is " << area << "\n";
	// the area of the circle

	return 0;
}