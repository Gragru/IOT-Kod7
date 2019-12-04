#include <iostream>
#include <string>

using namespace std;




int main()
{
	cout << "Please enter a valid sentence (with spaces):\n>";

	string y;
	//cin >> y; // Fungerar inte med mellanslag
	//cout << "You entered: " << y << endl << endl; 

	cout << "Hej";

 
	getline(cin, y); // Fungerar med mellanslag
	cout << "You entered: " << y << endl << endl;



	getline(cin, y);
	return 0;
}