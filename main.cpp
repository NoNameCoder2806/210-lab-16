// COMSC-210 | Lab 14 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <vector>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include "Color.h"
using namespace std;

// Constants
const int NUMBER_OF_COLORS = 10;

// Main function
int main()
{
    // Declare a vector to hold all the Color objects
    vector<Color> colors;

    // Call srand and time to create a seed
    srand(time(0));

    // Randomly create 10 Color objects
    for (int i = 0; i < NUMBER_OF_COLORS; i++)
    {
        // Create a temporary color object
        Color temp;

        // Set the values via the mutators
        temp.setRed(rand() % (Color::MAX_RGB + 1));        // Randomize a red value
        temp.setGreen(rand() % (Color::MAX_RGB + 1));      // Randomize a green value
        temp.setBlue(rand() % (Color::MAX_RGB + 1));       // Randomize a blue value

        // Push the object into the vector
        colors.push_back(temp);
    }

    // Create a Color object to test the out of range values
    Color color1;              // Create a Color objectobject
    color1.setRed(455);        // Set the red value
    color1.setGreen(-360);     // Set the green value
    color1.setBlue(125);       // Set the blue value
    colors.push_back(color1);  // Add the Color object to the vector

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