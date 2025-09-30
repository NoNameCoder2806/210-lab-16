// COMSC-210 | Lab 16 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <vector>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include "Color.h"
using namespace std;

// Constants
const int NUMBER_OF_COLORS = 5;

// Main function
int main()
{
    // Declare a vector to hold all the Color objects
    vector<Color> colors;

    // Call srand and time to create a seed
    srand(time(0));

    // Create a Color object using the Default constructor
    Color obj;

    // Add the Color object into the vector
    colors.push_back(obj);

    // Create 3 Color objects using the Parameter constructor
    for (int i = 0; i < NUMBER_OF_COLORS; i++)
    {
        // Declare 3 integers to hold the RGB values
        int r = rand() % (Color::MAX_RGB + 1);      // Randomize a red value
        int g = rand() % (Color::MAX_RGB + 1);      // Randomize a green value
        int b = rand() % (Color::MAX_RGB + 1);      // Randomize a blue value

        // Create a temporary Color object via the Parameter constructor
        Color temp(r, g, b);

        // Add the Color objects into the vector
        colors.push_back(temp);
    }

    // Create a Color object using a Partial constructor (Red value)
    int r = rand() % (Color::MAX_RGB + 1);      // Randomize a red value
    Color c1(r);                                // Partial constructor (Red value)
    colors.push_back(c1);                       // Add the Color object into the vector

    // Create a Color object using a Partial constructor (Green and Blue value)
    int b = rand() % (Color::MAX_RGB + 1);      // Randomize a blue value
    int g = rand() % (Color::MAX_RGB + 1);      // Randomize a green value
    Color c2(b, g);                             // Partial constructor (Green and Blue value)
    colors.push_back(c2);                       // Add the Color object into the vector

    // Iterate through the vector and display all the Color objects
    for (int i = 0; i < colors.size(); i++)
    {
        // Display the values of the Color objects via the print() method
        cout << "Color #" << i + 1 << ":" << endl;
        colors.at(i).print();

        // Display a blank line
        cout << endl;
    }

    return 0;
}