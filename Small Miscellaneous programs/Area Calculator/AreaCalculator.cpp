
#include <iostream>
#include <cmath>

using namespace std;

void menu();
double circle(double);
double triangle(double, double);
double rectangle(double, double);

const double PI = 3.14159;

double area;
bool quit = false;

int main()
{   
    menu();
    if(!quit)
    cout<<"The area is "<<area<<endl;
	else
	cout<<"Bye bye!"<<endl;
	return 0;
}

void menu()
{
	int q = 0;
	double radius, height, base;
	do{
		cout<<"Area Calculator"<<endl<<endl;
		cout<<"1. Calculate the Area of a Circle"<<endl;
		cout<<"2. Calculate the Area of a Rectangle"<<endl;
		cout<<"3. Calculate the Area of a Triangle"<<endl;
		cout<<"4. Quit"<<endl<<endl;
		cout<<"Enter your choice (1-4)"<<endl;
		
		cin>>q;

		switch(q)
		{
			case 1: 
			{
				cout << "Enter the radius of the Circle\n";
                cin >> radius;
				area = circle(radius);
				q=4;
				break;
			}
			case 2:
			{	cout << "Enter the height of the Rectangle\n";
                cin >> height;
                cout << "Enter the width of the Rectangle\n";
                cin >> base;
				area = rectangle(height, base);
				q=4;
				break;
			}
			case 3: 
			{
				cout << "Enter the height of the Triangle\n";
                cin >> height;
                cout << "Enter the base of the Triangle\n";
                cin >> base;
				area = triangle(height, base);
				q=4;
				break;
			}
			case 4: quit = true;
			break;
			default: cout<<"You entered an invalid option. Try again"<<endl;
			break;
		}
	}while(q!=4);
}
double circle(double r)
{
	return PI*pow(r,2);
}
double rectangle(double h, double b)
{
	return h*b;
}
double triangle(double h, double b)
{
	return ((h*b)/2.0);
}