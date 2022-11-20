#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void max_heap(int L[], int SIZE, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < SIZE && L[l] > L[largest])
		largest = l;

	if (r < SIZE && L[r] > L[largest])
		largest = r;

	if (largest != i)
	{
		swap(L[i], L[largest]);

		max_heap(L, SIZE, largest);
	}
}

void heap_sort(int L[], int SIZE)
{
	for (int i = SIZE / 2 - 1; i >= 0; i--)
		max_heap(L, SIZE, i);

	for (int i = SIZE - 1; i >= 0; i--)
	{
		swap(L[0], L[i]);
		max_heap(L, i, 0);
	}
}


void main()
{
	cout << "Input Data : ";
	print_data();

	heap_sort(L, SIZE);

	cout << "\n\nSorted Data : ";
	print_data();

}