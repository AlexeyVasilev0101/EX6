#include<iostream>
using namespace std;
void main()
{
	const int size = 5;
	srand(time(NULL));
	const int SIZE = 5;
	string mass[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		mass[i] = rand();
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << mass[i] << " ";
	}
}