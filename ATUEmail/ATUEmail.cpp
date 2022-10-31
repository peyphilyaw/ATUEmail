// ATUEmail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

    // ATU Email Program

    string fname, lname, wholename;

    cout << "Please enter first name" << endl;
    cin >> fname;
    cout << "Please enter last name" << endl;
    cin >> lname;
    wholename = fname + " " + lname;
    
    // first = fname.substr(0, 1);

    if (isupper(fname[0])) {
        fname[0] = tolower(fname[0]);
    }

    for (int i = 0; i < lname.length(); i++) {
        if (isupper(lname[i])) {
            lname[i] = tolower(lname[i]);
        }
    }

    cout << "\nEmail ID: " << fname[0] << lname << "@atu.edu" << endl << endl;


    // ASCII Value Program

    int sum = 0;

    for (int i = 0; i < wholename.length(); i++) {
        sum += wholename[i];
    }

    for (int i = 0; i < wholename.length(); i++) {
        cout << "'" << wholename[i] << "'";
        if (i < wholename.length() - 1) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    return 0;
}
