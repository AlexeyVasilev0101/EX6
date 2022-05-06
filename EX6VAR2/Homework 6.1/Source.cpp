#include"Source.h"
void sort(int *massA, const int SIZE)
{ 
	int tmp; 
	int item;
	for (int i = 1; i < SIZE; i++)
	{
		tmp = massA[i];
		item = i-1;
		while (item >= 0 and massA[item] > tmp)
		{
			massA[item + 1] = massA[item];
			massA[item] = tmp;
			item--;
 		}
	}
	//print_mass(massA, SIZE);
}
void sort(double *massB, const int SIZE )
{
	double tmp;
	int item;
	for (int i = 1; i < SIZE; i++)
	{
		tmp = massB[i];
		item = i-1;
		while (item >= 0 and massB[item] > tmp)
		{
			massB[item + 1] = massB[item];
			massB[item] = tmp;
			item--;
		}
	}
	//print_mass(massB,SIZE);
}
void print_mass(int *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}
void print_mass(double *mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
}