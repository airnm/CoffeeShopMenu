#include <iostream>
#include <string>
#include <iomanip>
#include "constants.h"

using namespace std;


int main() {
	int userInputOne;
	char userInputTwo;
	double userTotal = 0;
	double userTip;
	

	do {
		cout << PICK << endl;
		cout << DMP << endl;
		cout << BT << endl;
		cout << CT << endl;
		cout << QUIT << endl;
		cout << USERCHOICE;
		cin >> userInputOne;
		cin.clear();
		cin.ignore(100, '\n');


		while (!(userInputOne >= 1 && userInputOne <= 4)) {
			cout << endl;
			cout << INVALID_ONE << endl;
			cout << USERCHOICE;
			cin >> userInputOne;
			cin.clear();
			cin.ignore(100, '\n');
		}
		cout << fixed << setprecision(2) << endl;

		switch (userInputOne) {
		case 1:
			cout << CHOICE << endl;
			cout << DONUTS << endl;
			cout << MUFFINS << endl;
			cout << PASTRIES << endl;
			while (userInputOne) {
				cout << USERCHOICE;
				cin >> userInputTwo;
				cin.clear();
				cin.ignore(100, '\n');
				userInputTwo = tolower(userInputTwo);

				if (userInputTwo == 'd') {
					userTotal += 4;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else if (userInputTwo == 'm') {
					userTotal += 4.5;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else if (userInputTwo == 'p') {
					userTotal += 5.5;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else {
					cout << INVALID_TWO << endl;
					cout << INVALID_DMP << endl << endl;

				}

			}
			break; //case 1 break

		case 2:
			cout << CHOICE << endl;
			cout << BAGELS << endl;
			cout << TOAST << endl;
			while (userInputOne) {
				cout << USERCHOICE;
				cin >> userInputTwo;
				cin.clear();
				cin.ignore(100, '\n');
				userInputTwo = tolower(userInputTwo);

				if (userInputTwo == 'b') {
					userTotal += 3.75;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else if (userInputTwo == 't') {
					userTotal += 2.25;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else {
					cout << INVALID_TWO << endl;
					cout << INVALID_BT << endl << endl;

				}
			}
			break; //case 2 break

		case 3:
			cout << CHOICE << endl;
			cout << COFFEE << endl;
			cout << TEA << endl;
			while (userInputOne) {
				cout << USERCHOICE;
				cin >> userInputTwo;
				cin.clear();
				cin.ignore(100, '\n');
				userInputTwo = tolower(userInputTwo);

				if (userInputTwo == 'c') {
					userTotal += 3.50;
					cout << TOTAL << userTotal << endl;
					break;
				}
				else if (userInputTwo == 't') {
					userTotal += 2.5;
					cout << TOTAL << userTotal << endl;;
					break;
				}
				else {
					cout << INVALID_TWO << endl;
					cout << INVALID_CT << endl << endl;

				}
			}
			break; //case 3 break


		} // end bracket for switch
		cout << setw(50) << setfill('-') << ' ' << setfill(' ') << '\n' << endl;
	} // end bracket for DO
	while (userInputOne != 4); //biggest of DO-WHILES

	cout << "Your total is " << userTotal << endl << endl;
	cout << "Would you like to add a tip? Suggested amounts:\n" << endl;
	cout << "10% = $" << userTotal * 1.10 << endl;
	cout << "15% = $" << userTotal * 1.15 << endl;
	cout << "20% = $" << userTotal * 1.20 << endl << endl;
	cout << "Enter tip amount: $";
	cin >> userTip;

	userTotal += userTip;

	cout << "Please pay $" << userTotal << endl << endl;
	cout << setw(32) << setfill('=') << ' ' << setfill(' ') << endl;
	cout << GOOD_BYE << endl;
	cout << setw(32) << setfill('=') << ' ' << setfill(' ');



	return 0;
}