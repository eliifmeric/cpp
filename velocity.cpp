#include<iostream>
#include<cmath>

using namespace std;
const float g = 9.80665; //I declared gravitational acceleration constant as a global variable
void freeFall(float velocity, float &time, float &height) { //the function to calculate time and height

	time = velocity / g;  //the formula to calculate time
	height = pow(velocity,2)/ (2 * g); //the formula to calculate height
	//I used pow() function in here to take the power of velocity.
}

int main()
{
	
	float velocity, time=0.0, height=0.0; //I initialized the time and the height to 0.0 (because they're float variables)
	cout << "Enter the velocity (m/s): ";
	cin >> velocity;
	freeFall(velocity, time, height); //I used freeFall function to calculate time and height
	cout << "Time: " << time << " sec" << endl; //these two lines are for printing time and height values.
	cout << "Height: " << height << " m" << endl;
	return 0;
}
