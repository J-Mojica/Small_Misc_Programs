
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int i, j, k, w, h;
	int x = 0, y = 0;
	ofstream draw;

	while (x != 6)
	{
		cout << "1. Draw a Square" << endl;
		cout << "2. Draw a Rectangle" << endl;
		cout << "3. Draw a Right Triangle" << endl;
		cout << "4. Draw an isosceles Triangle" << endl;
		cout << "5. What is a skeleton's favourite musical instrument?" << endl;
		cout << "6. Quit" << endl;
		cin >> x;
		draw.open("drawings.txt");
		switch (x)
		{
		case 1:
		{
			cout << "Enter the length of the sides of your square" << endl;
			cin >> h;
			draw << "--------------------This is your square--------------------" << endl << endl;
			for (i = 0; i < h; i++)
			{
				for (j = 0; j < h; j++)
				{
					draw << "* ";
				}
				draw << endl;
			}
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "Enter the height of your rectangle" << endl;
			cin >> h;
			cout << "Enter the width of your rectangle" << endl;
			cin >> w;
			draw << "--------------------This is your rectangle--------------------" << endl << endl;
			for (i = 0; i < h; i++)
			{
				for (j = 0; j < w; j++)
				{
					draw << "* ";
				}
				draw << endl;
			}
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "Enter the height of your triangle" << endl;
			cin >> h;
			draw << "--------------------This is your triangle--------------------" << endl << endl;
			for (i = 1; i <= h; i++)
			{
				for (j = 1; j <= i; j++)
				{
					draw << "* ";
				}
				draw << endl;
			}
			cout << endl;
			break;
		}
		case 4:
		{
			cout << "Enter the height of your triangle" << endl;
			cin >> h;
			w = h;
			y = 1;
			cout << "--------------------This is your triangle--------------------" << endl << endl;
			for (i = 0; i < h; i++)
			{
				for (j = w; j > 0; j--)
				{
					draw << " ";

				}
				for (k = 0; k < y; k++)
				{
					draw << "*";
				}
				y += 2;
				w--;
				draw << endl;
			}
			cout << endl;
			break;
		}
		case 5:
		{
            draw<<" _______________________________________________________     "<<endl;
            draw<<"/                                                       \\   "<<endl;
            draw<<"|                    The trom-BONE!                     |    "<<endl;
            draw<<"\\_________              _______________________________/    "<<endl;
            draw<<"          \\_         __/    ___---------__                  "<<endl;
            draw<<"            \\      _/      /              \\_               "<<endl;
            draw<<"             \\    /       /                 \\              "<<endl;
            draw<<"              |  /       | _    _ \\          \\             "<<endl;
            draw<<"              | |       / / \\  / \\ |          \\           "<<endl;
            draw<<"              | |       ||   ||   ||           |             "<<endl;
            draw<<"              | |       | \\_//\\\\_/ |           |          "<<endl;
            draw<<"              | |       |_| (||)   |_______|   |             "<<endl;
            draw<<"              | |         |  ||     | _  / /   |             "<<endl;
            draw<<"               \\ \\        |_________|| \\/ /   /           "<<endl;
            draw<<"                \\ \\_       |_|_|_|_|/|  _/___/             "<<endl;
            draw<<"                 \\__>       _ _/_ _ /  |                    "<<endl;
            draw<<"                          .|_|_|_|_|   |                     "<<endl;
            draw<<"                          |           /                      "<<endl;
            draw<<"                          |__________/                       "<<endl;
			break;
		}
		case 6: break;
		default: cout << "You entered an invalid option. Try again" << endl << endl;
		}
	}
	draw.close();
	return 0;
}
