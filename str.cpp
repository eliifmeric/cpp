#include <iostream>
#include <string>
//--------------------Q1-----------------
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	int len1, len2;
	len1 = strlen(str1); //to get the string's length
	len2 = strlen(str2);
	cout << "First word: ";
	cin.getline(str1, sizeof(str1));
	

	cout << "Second word: ";
	cin.getline(str2, sizeof(str2));
	

	for (int i = 0; i <= len2; i++) {
		for (int j = 0; i <= len1; i++) {
			if (str1[i] == str2[j]) {
				cout << "All the letters of the word " << str1;
				cout << " are found in the word " << str2;
			}
				break;
			
		}
		
	}

	return 0;
}