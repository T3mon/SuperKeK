#include "stdafx.h"
#include "ResoucesStrings.h"

void main()
{
	const string menu[5]{ "+", "-", "/","*","=" };
	const string menuChooser = "->";
	int result = 0;
	int FirstNum = 0;
	int SecondNum = 0;

	// Вверх=72
	// Вниз=80
	// Равно=13 . 0
	const int size = 100;
	int i = 0;

	int input;
	input = _getch();
	while (true)
	{

		menu[i] == menuChooser + menu[i + 1];
		cout << FirstNum << menu[i] << SecondNum << "=" << result << endl;
		cout << menu[0] << endl;
		cout << menu[1] << endl;
		cout << menu[2] << endl;
		cout << menu[3] << endl;
		cout << menu[4] << endl;
		cout << menu[5] << endl;

		

		if (input == 72)
		{
			cout << "up" << endl;
			i--;
		}
		else if (input == 80)
		{	
			cout << "down" << endl;
			i++;

		}
	}
	system("pause");
}
