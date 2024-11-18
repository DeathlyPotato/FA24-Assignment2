/*
    Name: Chen, Isaac, 2002582920, CS 135 1009, 
    Assignment FA 24 - Assignment 2
    Description: Creating a C++ program that uses two points
    from the user to generate a manhattan distance and euclidian 
    distance. Then generates length with it
    Input: Two integers and Two doubles
    Output: Points, Euclidean and Manhattan distance, string of length
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int PADDING = 32; //Padding for printing out the distances

int main() {
    // String will be used for length
    // Acquire points
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    double eDistance = 0;
    double mDistance = 0;
    string eDistanceString = "";
    string mDistanceString = "";


    // Grabs actual user input for the points
    cout << "Please enter the first x coordinate";
    cin >> x1;
    cout << "\nPlease enter the first y coordinate";
    cin >> y1;
    cout << "\nPlease enter the second x coordinate";
    cin >> x2;
    cout << "\nPlease enter the second y coordinate";
    cin >> y2;

    // Prints out the pairs of numbers
    cout << "\nPoints: ";
    cout << "(" << x1 << ", " << y1 << ") and ";
    cout << "(" << x2 << ", " << y2 << ")" << endl;

    // Compute the distances
    eDistance = sqrt( pow( x2 - x1, 2 ) + pow( y2 - y1, 2) );
    mDistance = abs( x2 - x1 ) + abs( y2 - y1);

    // Outputs right aligned text
    // Outputs the string of length distance
    cout << fixed << setprecision(2);
    cout << setw(PADDING) << "Euclidean distance: "<< eDistance << endl;
    cout << "o" << setw(eDistance+1) << setfill('-') << "o" << endl;
    cout << "\n";
    cout << setw(PADDING) << setfill (' ');
    cout << "Manhattan distance: "<< mDistance << endl;
    cout << "o" << setw(mDistance+1) << setfill('-') << "o" << endl;



    return 0; 
}