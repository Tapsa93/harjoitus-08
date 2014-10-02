/*******************
//Tapio Pekkarinen
//Harjoitus 8
//2.10.2014
//versio 1.0
*/
#include <iostream>
using namespace std;
int luku1, luku2, luku3; 
int main()
{
	cout << "Anna ensimmäinen luku: ";
	cin >> luku1;
	cout << "Anna toinen luku: ";
	cin >> luku2;
	cout << "Anna kolmas luku: ";
	cin >> luku3;

	if ((luku1 <= luku2) && (luku1 <= luku3)) {
		if (luku2 <= luku3) {
			cout << "Antamasi luvut suuruusj„rjestyksessä: " << luku1 << ", " << luku2 << ", " << luku3 << "." << endl;
		}
		else {
			cout << "Antamasi luvut suuruusj„rjestyksessä: " << luku1 << ", " << luku3 << ", " << luku2 << "." << endl;
		}
	}
	else if ((luku2 <= luku1) && (luku2 <= luku3)) {
		if (luku1 <= luku3) {
			cout << "Antamasi luvut suuruusjärjestyksessä:  " << luku2 << ", " << luku1 << ", " << luku3 << "." << endl;
		}
		else {
			cout << "Antamasi luvut suuruusjärjestyksessä:  " << luku2 << ", " << luku3 << ", " << luku1 << "." << endl;
		}
	}
	else if ((luku3 <= luku1) && (luku3 <= luku2)) {
		if (luku2 <= luku1){
			cout << "Antamasi luvut suuruusjärjestyksessä: " << luku3 << "," << luku2 << "," << luku1 << "," << endl;
		}
		else {
			cout << "Antamasi luvut suuruusjärjestyksessä: " << luku3 << "," << luku1 << "," << luku2 << "," << endl;
		}
	}

}

