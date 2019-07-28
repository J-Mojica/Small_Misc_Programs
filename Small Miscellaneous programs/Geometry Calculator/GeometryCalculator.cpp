// Geometry Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Constant value for pi
    const double PI = 3.14159;

    //Switch Variables
    int x = 0, y = 0, z = 0, q = 0;

    //Radius, Base, Height, Perimeter, Area.
    double r, b, h, p, a;

    //Main Loop
    while (x != 4)
    {
        //Main Menu
        cout << " Which geometric figure are you using? \n\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit\n\n";
        cout << "Select one option\n";
        cin >> x;

        //Options Main Menu
        switch (x)
        {
        //Circle
        case 1:
        {
            //Circle loop
            while (y != 4)
            {
                //Circle Menu
                cout << "   What do you want to calculate? \n\n";
                cout << "1. Circumference\n";
                cout << "2. Area\n";
                cout << "3. Radius\n";
                cout << "4. Return to the main menu\n\n";
                cout << "Select one option\n";
                cin >> y;

                //Options Circle
                switch (y)
                {
                    //Circumference
                    case 1:
                    {
                        cout << "Enter the radius of the circle\n";
                        cin >> r;
                        p = 2.0 * PI*r;
                        cout << "Thea circumference of the circle is: " << p << "\n\n";
                        p = 0;
                        break;
                    }
                    //Area
                    case 2:
                    {
                        cout << "Enter the radius of the circle\n";
                        cin >> r;
                        a = PI*pow(r, 2);
                        cout << "Thea area of the circle is: " << a << "\n\n";
                        a = 0;
                        break;
                    }
                    //Radius
                    case 3:
                    {
                        //Radius loop
                        while (q != 3)
                        {
                            //Radius Menu
                            cout << "   What information do you have about the circle?\n\n";
                            cout << "1. Area\n";
                            cout << "2. Circumference\n";
                            cout << "3. Return\n\n";
                            cout << "Select one option\n";
                            cin >> q;

                            //Radius Options
                            switch (q)
                            {
                            //Area
                            case 1:
                            {
                                cout << "Enter the Area of the circle\n";
                                cin >> a;
                                r = sqrt(a / PI);
                                cout << "Thea radius of the circle is: " << r << "\n\n";
                                r = 0;
                                break;
                            }
                            //Circumference
                            case 2:
                            {
                                cout << "Enter the Circumference of the circle\n";
                                cin >> p;
                                r = p / (2.0 * PI);
                                cout << "Thea radius of the circle is: " << r << "\n\n";
                                r = 0;
                                break;
                            }
                            //Return to Circle menu
                            case 3: cout << "Returning...\n\n";
                                break;
                                //Invalid input
                            default: cout << "You entered an invalid option\n\n";
                            }
                        }
                        q = 0;
                        break;
                    }
                    case 4: cout << "Returning...\n\n";
                        break;
                        //Invalid input
                    default: cout << "You entered an invalid option\n\n";
                }
            }
            y = 0;
            break;
        }
        //Rectangle
        case 2:
        {
            //Rectangle Loop
            while (y != 5)
            {
                //Rectangle menu
                cout << "   What do you want to calculate? \n\n";
                cout << "1. Perimeter\n";
                cout << "2. Area\n";
                cout << "3. Height\n";
                cout << "4. Width\n";
                cout << "5. Return to the main menu\n\n";
                cout << "Select one option\n";
                cin >> y;

                //Options Rectangle
                switch (y)
                {
                    //Perimeter
                case 1:
                {
                    cout << "Enter the width of the rectangle\n";
                    cin >> b;
                    cout << "Enter the height of the rectangle\n";
                    cin >> h;
                    p = 2.0*(b + h);
                    cout << "Thea perimeter of the rectangle is: " << p << "\n\n";
                    p = 0;
                    break;
                }
                //Area
                case 2:
                {
                    cout << "Enter the width of the rectangle\n";
                    cin >> b;
                    cout << "Enter the height of the rectangle\n";
                    cin >> h;
                    a = b*h;
                    cout << "Thea area of the rectangle is: " << a << "\n\n";
                    a = 0;
                    break;
                }
                //Height
                case 3:
                {
                    //Height Loop
                    while (q != 3)
                    {
                        //Height Menu
                        cout << "   What information do you have about the rectangle?\n\n";
                        cout << "1. Area and Width\n";
                        cout << "2. Perimeter and Width\n";
                        cout << "3. Return\n";
                        cout << "Select one option\n";
                        cin >> q;

                        //Height options
                        switch (q)
                        {
                        case 1:
                        {
                            cout << "Enter the area of the rectangle\n";
                            cin >> a;
                            cout << "Enter the width of the rectangle\n";
                            cin >> b;
                            h = a / b;
                            cout << "The height of the rectangle is: " << h << "\n\n";
                            h = 0;
                            break;
                        }
                        case 2:
                        {
                            cout << "Enter the perimeter of the rectangle\n";
                            cin >> p;
                            cout << "Enter the width of the rectangle\n";
                            cin >> b;
                            h = (p - (2.0*b)) / 2.0;
                            cout << "The height of the rectangle is: " << h << "\n\n";
                            h = 0;
                            break;
                        }
                        default: cout << "You entered an invalid option\n\n";
                        }
                    }
                    q = 0;
                    break;
                }
                //Width
                case 4:
                {
                    //Width Loop
                    while (q != 3)
                    {
                        //Height Menu
                        cout << "   What information do you have about the rectangle?\n\n";
                        cout << "1. Area and Height\n";
                        cout << "2. Perimeter and Height\n";
                        cout << "3. Return\n";
                        cout << "Select one option\n";
                        cin >> q;

                        //Height options
                        switch (q)
                        {
                            //Area and Height
                        case 1:
                        {
                            cout << "Enter the area of the rectangle\n";
                            cin >> a;
                            cout << "Enter the height of the rectangle\n";
                            cin >> h;
                            b = a / h;
                            cout << "The width of the rectangle is: " << b << "\n\n";
                            b = 0;
                            break;
                        }
                        //Perimeter and Height
                        case 2:
                        {
                            cout << "Enter the perimeter of the rectangle\n";
                            cin >> p;
                            cout << "Enter the height of the rectangle\n";
                            cin >> h;
                            b = (p - (2.0*h)) / 2.0;
                            cout << "The width of the rectangle is: " << b << "\n\n";
                            b = 0;
                            break;
                        }
                        //Return to rectangle menu
                        case 3: break;
                            //Invalid input
                        default: cout << "You entered an invalid option\n\n";
                        }
                    }
                    q = 0;
                    break;
                }
                case 5: cout << "Returning...\n\n";
                    break;
                default: cout << "You entered an invalid option\n\n";
                }
            }
            y = 0;
            break;
        }
        //Triangle
        case 3:
        {
            //Triangle Loop
            while (y != 5)
            {
                cout << "   What do you want to calculate? \n\n";
                cout << "1. Area\n";
                cout << "2. Perimeter\n";
                cout << "3. Height\n";
                cout << "4. Base\n";
                cout << "5. Return\n\n";
                cout << "Select one option\n";
                cin >> y;

                //Triangle options
                switch (y)
                {
                    //Area
                case 1:
                {
                    cout << "Enter the base of the Triangle\n";
                    cin >> b;
                    cout << "Enter the height of the Triangle\n";
                    cin >> h;
                    a = (1.0 / 2.0)*b*h;
                    cout << "The area of the triangle is: " << a << "\n\n";
                    a = 0;
                    break;
                }
                //Perimeter
                case 2:
                {
                    cout << "Enter one side of the Triangle\n";
                    cin >> b;
                    cout << "Enter the next side of the Triangle\n";
                    cin >> h;
                    cout << "Enter the last side of the Triangle\n";
                    cin >> a;
                    p = a + b + h;
                    cout << "The perimeter of the triangle is: " << p << "\n\n";
                    p = 0;
                    break;
                }
                //Height
                case 3:
                {
                    cout << "Enter the base of the Triangle\n";
                    cin >> b;
                    cout << "Enter the area of the Triangle\n";
                    cin >> a;
                    h = b / (2.0*a);
                    cout << "The height of the triangle is: " << h << "\n\n";
                    h = 0;
                    break;
                }
                //Base
                case 4:
                {
                    cout << "Enter the height of the Triangle\n";
                    cin >> h;
                    cout << "Enter the area of the Triangle\n";
                    cin >> a;
                    b = h / (2.0 * a);
                    cout << "The base of the triangle is: " << b << "\n\n";
                    b = 0;
                    break;
                }
                case 5: cout << "Returning...\n\n";
                    break;
                default: cout << "You entered an invalid option\n\n";
                    break;
                }
            }
            y = 0;
            break;
        }
        //Exit the program
        case 4: cout << "Well then, good-bye!" << endl;
        //Invalid input
        default: cout << "You entered an invalid option\n\n" << endl;
        }
    }
    return 0;
}
