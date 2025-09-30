// COMSC-210 | Lab 16 | Dat Hoang Vien
// IDE used: Visual Code Studio

#pragma once

// Libraries
#include <iostream>
using namespace std;

// Color class
class Color
{
private:
    int red;        // Red value
    int green;      // Green value
    int blue;       // Blue value

public:
    // Constants
    static const int MAX_RGB = 255;      // Max RGB value
    static const int MIN_RGB = 0;        // Min RGB value
    static const int RGB_RANGE = 256;    // RGB value range

    // Constructors
    Color()                         // Default constructor
    {
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int r, int g, int b)      // Parameters constructor
    {
        red = r;
        green = g;
        blue = b;
    }

    Color(int r)                    // Partial constructor (Red value)
    {
        red = r;
        green = 0;
        blue = 0;
    }

    Color(int g, int b)             // Partial constructor (Green and Blue value)
    {
        red = 0;
        green = g;
        blue = b;
    }

    // Accessors / Getters
    int getRed() const
    {
        return red;        // Return the red value
    }

    int getGreen() const
    {
        return green;      // Return the green value
    }

    int getBlue() const
    {
        return blue;       // Return the blue value
    }

    // Mutators / Setters
    void setRed(int r)
    {
        if (r >= MIN_RGB && r <= MAX_RGB)       // If the value is in the valid range 0-255
        {
            red = r;                            // Assign red = r
        }
        else if (r < MIN_RGB)                   // If the value is smaller than MIN_RGB
        {
            r = (r % RGB_RANGE) + RGB_RANGE;    // Wrap negative numbers into the range 0-255
            red = r;                            // Assign red = r
        }
        else                                    // If the value is larger than MAX_RGB
        {
            r = r % RGB_RANGE;                  // Wrap large positive numbers into the range 0–255
            red = r;                            // Assign red = r
        }
    }

    void setGreen(int g)
    {
        if (g >= MIN_RGB && g <= MAX_RGB)       // If the value is in the valid range 0-255
        {
            green = g;                          // Assign green = g
        }
        else if (g < MIN_RGB)                   // If the value is smaller than MIN_RGB
        {
            g = (g % RGB_RANGE) + RGB_RANGE;    // Wrap negative numbers into the range 0-255
            green = g;                          // Assign green = g
        }
        else                                    // If the value is larger than MAX_RGB
        {
            g = g % RGB_RANGE;                  // Wrap large positive numbers into the range 0–255
            green = g;                          // Assign green = g
        }
    }

    void setBlue(int b)
    {
        if (b >= MIN_RGB && b <= MAX_RGB)       // If the value is in the valid range 0-255
        {
            blue = b;                           // Assign blue = b
        }
        else if (b < MIN_RGB)                   // If the value is smaller than MIN_RGB
        {
            b = (b % RGB_RANGE) + RGB_RANGE;    // Wrap negative numbers into the range 0-255
            blue = b;                           // Assign blue = b
        }
        else                                    // If the value is larger than MAX_RGB
        {
            b = b % RGB_RANGE;                  // Wrap large positive numbers into the range 0–255
            blue = b;                           // Assign blue = b
        }
    }

    // Methods
    /*
        print()
        Display the Color's red, green, and blue values to the console
        Arguments: none
        Return: none
    */
    void print() const
    {
        // Display the color values
        cout << " - Red: " << getRed() << endl;          // Red
        cout << " - Green: " << getGreen() << endl;      // Green
        cout << " - Blue: " << getBlue() << endl;        // Blue
    }
};