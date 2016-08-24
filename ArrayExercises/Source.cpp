#include<iostream>
using namespace std;

/*
Exercise 1 answers:
a. Valid
b. Invalid. Only 5 spaces are decalred, not 7.
c. Valid
d. Invalid. Syntax error due to blank spaces.
e. Valid.
f. Valid.
g. Invalid. Number can not be below 1.
h. Valid.

Exercise 2 answers:
a. 10
b. 2
c. 6
d. 3
e. Invalid
*/

int exerciseThree()
{
	int data[11];
	for (int i = 10; i >= 0; i--)
	{
		data[i] = i;
	}
	return 0;
}

int exerciseFour()
{
	int array[5];
	
	cout << "Give me five numbers, and I'll give them back in reverse order." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Number " << i + 1 << ": " << endl;
		cin >> array[i];
	}
	
	cout << "Here are your numbers in reverse: " << endl;

	for (int i = 4; i >= 0; i--)
	{
		cout << array[i] << endl;
	}
	system("pause");
	system("cls");
	return 0;
}

int exerciseFive()
{
	int array[10];

	cout << "Give me ten numbers, and I'll give back the largest and smallest numbers." << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Number " << i + 1 << ": " << endl;
		cin >> array[i];
	}

	int t;

	for (int i = 0; i < 10; i++)
	{
		for (int y = 0; y < 9; y++)
		{
			if (array[y] < array[y + 1])
			{
				t = array[y];
				array[y] = array[y + 1];
				array[y + 1] = t;
			}
		}
	}

	cout << "Your largest number is: " << array[0] << endl;
	cout << "Your smallest number is: " << array[9] << endl;

	system("pause");
	system("cls");
	return 0;
}

int exerciseSix()
{
	int array[3][3];
	int number = 1;

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			array[x][y] = number;
			number++;
		}
	}

	cout << "Here is a matrix example." << endl;
	cout << array[0][0] << " " << array[0][1] << " " << array[0][2] << endl;
	cout << array[1][0] << " " << array[1][1] << " " << array[1][2] << endl;
	cout << array[2][0] << " " << array[2][1] << " " << array[2][2] << endl;

	system("pause");
	system("cls");

	return 0;
}

int exerciseSeven()
{
	int days[29][5];
	int colsum[29];
	int rowsum[3];

	for (int i = 0; i < 29; i++)
		colsum[i] = i;

	for (int i = 0; i < 29; i++)
		rowsum[i] = i;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 29; x++)
		{
			rowsum[y] = rowsum[y] + days[x][y];
		}
	}

	for (int x = 0; x < 29; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			colsum[x] = colsum[x] + days[x][y];
		}
	}

	cout << "The sum of all rows is: " << rowsum << endl;
	cout << "The sum of all columns is: " << colsum << endl;

	system("pause");
	system("cls");

	return 0;
}

int exerciseEight()
{
	int health[5];
	int input;

	for (int i = 0; i < 5; i++)
		health[i] = 100;

	for (int i = 0; i < 5; i++)
		cout << "Character " << i+1 << " health: " << health[i] << endl;

	for (int turn = 0; turn < 5; turn++)
	{
		cout << "Turn " << turn+1 << ". Choose which character to attack!" << endl;
		cin >> input;

		input--;

		if (input >= 0 && input <= 5)
		{
			if (health[input] >= 0)
			{
				health[input] = health[input] - rand() % 40 + 1;
			}
			else if (health[input] <= 0)
			{
				cout << "This character is already dead! Select a different character." << endl;
				turn--;
			}
		}
		else
		{
			cout << "Invalid character number!" << endl;
			turn--;
		}
	}

	for (int i = 0; i < 5; i++)
		cout << "Character " << i + 1 << " health: " << health[i] << endl;

	system("pause");
	system("cls");

	return 0;
}

int exerciseNine()
{
	int dragonfood[3][7];
	double foodsum[4];

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 7; y++)
		{
			dragonfood[x][y] = rand() % 23 + 6;
			foodsum[3] = foodsum[3] + dragonfood[x][y];
		}
	}

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 7; y++)
		{
			for (int i = 0; i < 3; i++)
			{
				foodsum[i] = foodsum[i] + dragonfood[x][y];
			}
		}
	}

	cout << "Average amount of food eaten per day by all dragons: " << foodsum[3] / 21 << endl;

	for (int x = 0; x < 4; x++)
	{
		cout << "Average amount of food eaten per day by dragon #" << x + 1 << ": " << foodsum[x] << endl;
	}

	system("pause");
	system("cls");

	return 0;
}


int main()
{
	exerciseFour();
	exerciseFive();
	exerciseSix();
	exerciseEight();
}