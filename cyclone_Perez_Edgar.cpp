/*
Edgar Perez
CSC 3110 – Program 3: The Perfect Storm
November 13, 2025
Pledge: I have neither given nor received unauthorized aid on this program.

This program asks the user for a wind speed, either in mph or km/h
and then converts it to the other unit. It also tells what kind of
storm it would be on both the hurricane and typhoon scales.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    //conversion constant: 1 km/h = 0.621371 mph
    const double KM_TO_MILES = 0.621371;

    double mph = 0.0;
    double kmh = 0.0;
    string hurricane, typhoon;
    char unit;

    //ask the user which type of speed they are entering
    cout << "Do you want to enter miles/hour or km/hour? (type m or k): ";
    cin >> unit;

    //get the wind speed and do the conversion
    if (unit == 'm' || unit == 'M') {
        cout << "Enter the wind speed in miles/hour: ";
        cin >> mph;
        if (cin.fail()) {
            cout << "Invalid wind speed. Please enter a numeric value." << endl;
            return 0;
        }
        
        //convert to km/h
        kmh = mph / KM_TO_MILES; 
    }
    else if (unit == 'k' || unit == 'K') {
        cout << "Enter the wind speed in km/hour: ";
        cin >> kmh;
        if (cin.fail()) {
            cout << "Invalid wind speed. Please enter a numeric value." << endl;
            return 0;
        }
        
        //convert to mph
        mph = kmh * KM_TO_MILES;  
    }
    else {
        cout << "Invalid input. Please type 'm' or 'k'." << endl;
        return 0;
    }

    //figure out the hurricane category, uses mph
    if (mph < 39)
        hurricane = "tropical depression";
    else if (mph < 74)
        hurricane = "tropical storm";
    else if (mph < 96)
        hurricane = "Category 1 hurricane";
    else if (mph < 111)
        hurricane = "Category 2 hurricane";
    else if (mph < 130)
        hurricane = "Category 3 hurricane";
    else if (mph < 157)
        hurricane = "Category 4 hurricane";
    else
        hurricane = "Category 5 hurricane";

    //figure out the typhoon category, uses km/h
    if (kmh < 63)
        typhoon = "tropical depression";
    else if (kmh < 88)
        typhoon = "tropical storm";
    else if (kmh < 118)
        typhoon = "severe tropical storm";
    else if (kmh < 150)
        typhoon = "typhoon";
    else if (kmh < 185)
        typhoon = "severe typhoon";
    else
        typhoon = "super typhoon";

    //show results, rounded to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nThis is " << kmh << " km/hr and " << mph << " mph." << endl;
    cout << "On the hurricane scale, this is a " << hurricane << "." << endl;
    cout << "On the typhoon scale, this is a " << typhoon << "." << endl;

    return 0;
}
