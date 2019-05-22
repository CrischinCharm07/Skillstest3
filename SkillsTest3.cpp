#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[100], s, i, j, temp;

	cout << "Input the size of the integers: "; cin >> s;
	cout << " " << endl;

	if (s > 0 && s < 101)
	{

	cout << "Input the integers: " << endl;
	for (i = 0; i < s; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < s; i++)
	{
		for (j = i + 1; j < s; j++)
		{
			if (arr [i] > arr [j])
			{
				temp = arr [i];
				arr [i] = arr [j];
				arr [j] = temp;
			}
		}
	}
	
	cout << " " << endl;
	cout << "The integers in ascending order: " << endl;
	for (i = 0; i < s; i++)
	{
		cout << arr [i] << "\n";
	}

	}

	else if (s > 100)
		cout << "This program can read a maximum of 100 integers only." << endl;

	else 
		cout << "Invalid input." << endl;
		
		
getch ();
return 0;
}