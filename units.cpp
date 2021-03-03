#include <iostream>
#include <string>

using namespace std;
#define ARRAY_SIZE 5

void convertUnitsOfLength(double u[ARRAY_SIZE]) {
	//function to convert units of length
	 u[1] = u[0] * 39.3701;
	 u[2] = u[0] * 1.3123;
	 u[3] = u[0] * 1.09361;
	 u[4] = u[0] * 0.000621371;
	 
}
void displayUnitsOfLength(double unit[ARRAY_SIZE]) {
	//function to display results
	string arr[ARRAY_SIZE] = {"meters","inches","steps","yards","miles"}; //array to display unit names

	for (int i = 1; i < ARRAY_SIZE; i++) { //for loop to display results
		for (int j = 1; j < ARRAY_SIZE; j++) {
		cout << unit[0] << " m = " << unit[i];
			cout << arr[j] << endl;

			break;
		}
	}

}
	
int main()
{ //main function 
	double arrUnitsOfLength[ARRAY_SIZE] = { 1, 39.3701, 1.3123, 1.09361, 0.000621371 }; //units
	cout << "Enter length (meter): ";
	cin >> arrUnitsOfLength[0];
	convertUnitsOfLength(arrUnitsOfLength);
	displayUnitsOfLength(arrUnitsOfLength);

	return 0;
}
