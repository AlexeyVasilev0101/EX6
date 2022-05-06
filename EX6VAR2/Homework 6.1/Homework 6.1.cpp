#include<iostream>
#include<ctime>
#include"Source.h";
void main()
{
	srand(time(NULL));
	const int SIZE = 5;
	int massA[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		massA[i] = rand() % 10;
	}
	double massB[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		massB[i] = rand() % 10 * 1.73;
	}
	print_mass(massA, SIZE);
	print_mass(massB, SIZE);
	cout << endl;
	sort(massA, SIZE);
	sort(massB, SIZE);
	print_mass(massA, SIZE);
	print_mass(massB, SIZE);
}