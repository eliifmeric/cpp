#include <iostream>
using namespace std;

int findArea(int l,int w) //function to calculate the area of the rectangle.
{
	return (l * w); //it returns to "l*w" to calculate the area of the rectangle.
}
float findArea(float r) //function to calculate the are of the circle 
{
	return (3.14 * r * r); //it returns to "3.14 * r * r" to calculate the are of the circle.
}

int main()
{
	int selection, l, w;
	float r;
	do {
		cout << "Choose one of the following:" << endl; //ask user to choose one of them
		cout << "1: Area of the rectangle" << endl;
		cout << "2:Area of the circle" << endl;
		cout << "3:End of the program" << endl;
		cout << "Your choice:";
		cin >> selection;
		
		switch (selection)
		{
		case 1:
			cout << "Enter two sides of the rectangle: "; //ask user to enter the values
			cin >> l >> w; 
			cout << "Area= "<< findArea(l, w);
			//show user the area of the rectangle with calculating the area of the rectangle with the function findArea()
			cout << endl;
			break;
		case 2:
			cout << "Enter the radius of the circle: "; //ask user to enter the values
			cin >> r;
			cout << "Area= " << findArea(r); 
			//show user the area of the circle with calculating the area of the circle with the function findArea()
			cout << endl;
			break;
		case 3:
			cout << "Goodbye!" << endl;
			exit(0); //terminate the program if user enters 3
		}
	} while (selection != 3); //The loop continues while the user does not enters the number 3.

	return 0;
}
