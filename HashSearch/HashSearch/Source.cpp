#include<iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
	// array that contains keys to be mapped 
	int array[] = { 11, 12, 21, 14, 15 };
	int n = sizeof(array) / sizeof(array[0]);
	unordered_map<string, int> hashtable;

	for (int j = 1; j <= n; j++)
	{
		hashtable.emplace(to_string(array[j - 1]), j);
	}

	for (int i = 0; i < 25; i++)
	{
		cout << i << " : ";
			
		if (hashtable[to_string(i)] != 0)
			cout << hashtable[to_string(i)] - 1 << endl;
		else
			cout << "Finns inte" << endl;
			
	}

	string y;
	getline(cin, y);



	return 0;
}

